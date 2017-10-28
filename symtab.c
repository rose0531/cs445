/* symtab.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#include "nonterm.h" 		//nonterminal values
#include "120gram.tab.h"	//terminal values
#include "type.h"
#include "tree.h"

SymbolTable globals;
SymbolTable current;
int const_flag = 0;
int func_declaration = 0;
int iostream_flag = 0;
int namespace_flag = 0;

int and_flag = 0;
int counter = 0;


/* create symbol table*/
SymbolTable new_st(int nbuckets){ 
	SymbolTable rv;
	rv = (SymbolTable)alloc(sizeof(struct sym_table));
	rv->tbl = (struct st_entry **)alloc(nbuckets * sizeof(struct st_entry *));
	rv->nBuckets = nbuckets;
	rv->nEntries = 0;
	return rv;
}


char *alloc(int n){
  char *a = calloc(n, sizeof(char));
  if(a == NULL){
    fprintf(stderr, "alloc(%d): out of memory\n", (int)n);
    exit(1);
  }
  return a;
}
	

/* destroy symbol table*/
void delete_st(SymbolTable st){
	SymbolTableEntry se, se1;
	int h;

	for(h = 0; h < st->nBuckets; ++h){
		for(se = st->tbl[h]; se != NULL; se = se1){
			se1 = se->next;
			free((char *)se);
		}
		free((char *)st);
	}
}


/* lookup symbol from symbol table*/
SymbolTableEntry lookup_symbol(SymbolTable st, char *sym){
	int h;
	SymbolTableEntry se;
	if(st == NULL){
		return NULL;
	}

	h = hash(st, sym);
	for(se = st->tbl[h]; se != NULL; se = se->next){
		if(strcmp(sym, se->s) == 0){
			/* found it */
			return se;
		}
	}

	return NULL;
}

/* hash function*/
int hash(SymbolTable st, char *s){
	int h = 0;
	char c;
	while((c = *s++)){
		h += c & 0377;
		h *= 37;
	}
	if(h < 0)
		h = -h;

	return h % st->nBuckets;
}

/*  
 * Enter a new scope and create a new symbol table
*/
void enter_newscope(char *s, int typ, struct tree *rv_tree, struct tree *param_tree){
    SymbolTable new = new_st(13); /* 13 buckets */
    
	typeptr t;
	if(typ == CLASS_TYPE){
		t = alcclasstype(s, new);
	}else{
		t = alcfunctiontype(s, rv_tree, param_tree, new);
	}
	new->scope = t;
	
	insert_symbol(current, s, t);
	pushscope(new);
}


/* enter symbol into table*/
int insert_symbol(SymbolTable st, char *str, typeptr t){
	int h;
	SymbolTableEntry se;

	h = hash(st, str);
	for(se = st->tbl[h]; se != NULL; se = se->next){
		if(strcmp(str, se->s) == 0){
			/* copy of the string is already in the table */
			if(se->func_declaration == 1){
				se->type = t;
				se->func_declaration = 0;				
				return 1;
			}else{
				fprintf(stderr, "redeclaration: \"%s\"\n", str);
				const_flag = 0;
				func_declaration = 0;
				return 0;
			}
		}
	}
	

   /*
    * The string is not in the table. Add the copy from the
    *  buffer to the table.
    */

	se = (struct st_entry *)alloc(sizeof(struct st_entry));
	se->next = st->tbl[h];
	se->table = st;
	st->tbl[h] = se;
	se->s = strdup(str);
	se->type = t;
	se->const_flag = const_flag;
	se->func_declaration = func_declaration;
	const_flag = 0;
	func_declaration = 0;
	st->nEntries++;
	return 1;
}



void populatesymbols(struct tree *t){
	int i;
	char *s;
	if(t == NULL){
		return;
	}

	switch(t->prodrule){
		case declaration:
			//skip the using_directive rule, it's just for using namespace std
			if(t->kids[0]->kids[0]->prodrule == using_directive){
				namespace_flag = 1;
				break;
			}
			if(t->kids[0]->prodrule == function_definition){
				break;
			}
			if(current == NULL)
				current = new_st(13);

			//get the type
			typeptr typ = synthesize_type(t->kids[0]);


			//check if the declaration is a function prototype, if so, set a flag
			if(check_if_func_prototype(t->kids[0]->kids[0]->kids[1])){
				func_declaration = 1;
			}

			//get the declaration name
			populate_init_declarators(t->kids[0]->kids[0]->kids[1], typ);

			func_declaration = 0;
		
			break;


		case function_definition:
			if(current == NULL)
				current = new_st(13);

			s = get_funcname(t->kids[1]);

			/* for entering new scope, you have to give it the
		 	* tree that contains the return value and the tree
		 	* that contains the parameters for the function
			*/
			if(t->kids[1]->kids[0]->kids[0]->prodrule == CLASS_NAME )
				enter_newscope(s, FUNC_TYPE, t->kids[0], t->kids[1]->kids[0]->kids[4]);
			else
				enter_newscope(s, FUNC_TYPE, t->kids[0], t->kids[1]->kids[0]->kids[2]);

			/* get local variables in function body and put them in the symbol table*/
			populatelocals(t->kids[3]);

			break;
		

		case class_specifier:
			/* get the class name */
			s = t->kids[0]->kids[1]->kids[0]->leaf->text;

			/* since this is a class type, it doesn't need
		     * a return type tree or a parameters tree, that
		     * is why we have two NULLs
			*/
			enter_newscope(s, CLASS_TYPE, NULL, NULL);
			break;

		case member_declaration:
			if(t->kids[0]->prodrule == function_definition){
				break;
			}else{
				typeptr typ = synthesize_type(t->kids[0]);
				s = get_membername(t->kids[1]);
				insert_symbol(current, s, typ);
			}
			break;

	}

	/* visit children */
	if(t->prodrule > 0){
		return;
	}else{
		for(i = 0; i < t->nkids; i++){
			populatesymbols(t->kids[i]);
		}
	}

	switch(t->prodrule){
		case function_definition:
		case class_specifier:
			popscope();
			return;
	}
}



void populate_init_declarators(struct tree *t, typeptr typ){
	int i;
	switch(t->prodrule){
		case declarator_id:
		case id_expression:
		case unqualified_id:
		case init_declarator:
		case direct_declarator:
			populate_init_declarators(t->kids[0], typ);
			return;

		case identifier:
			insert_symbol(current, t->kids[0]->leaf->text, typ);
			return;

		case declarator:
			if(t->nkids > 1){
				/* we know that t->kids[0] is a ptr_operator */
				typ->pointer = 1;
				populate_init_declarators(t->kids[1], typ);
			}else
				populate_init_declarators(t->kids[0], typ);
			return;

		default:
			if(t->prodrule < 0){
				for(i = 0; i < t->nkids; i++){
					if(t->kids[i] == NULL)
						return;
					populate_init_declarators(t->kids[i], typ);
				}
				return;
			}
			return;
	}
}


/* populatelocals: populates the symbol table
 * with local variables from a function body
*/
void populatelocals(struct tree *t){
	int i;
	typeptr typ;
	char *s;
	while(1){
		switch(t->prodrule){
			case compound_statement:
			  	populatelocals(t->kids[1]);
				return;

		    case function_body:
			case statement_seq_opt:
			case statement:
			case declaration_statement:
			case block_declaration:
				populatelocals(t->kids[0]);
				return;

			case iteration_statement:
				s = t->kids[0]->leaf->text;
				if(strcmp(s, "for") == 0){
					enter_newscope(s, FUNC_TYPE, NULL, NULL);
					typ = synthesize_type(t->kids[2]->kids[0]->kids[0]);
					populate_init_declarators(t->kids[2]->kids[0]->kids[1], typ);
					populatelocals(t->kids[7]);
					popscope();
				}else if(strcmp(s, "while") == 0){
					enter_newscope(s, FUNC_TYPE, NULL, NULL);
					if(t->kids[2]->kids[0]->prodrule == type_specifier_seq){
						typ = synthesize_type(t->kids[2]->kids[0]->kids[0]);
						populate_init_declarators(t->kids[2]->kids[1], typ);
					}
					populatelocals(t->kids[4]);
					popscope();
				}else{ // if s == "do"
					enter_newscope(s, FUNC_TYPE, NULL, NULL);
					populatelocals(t->kids[1]);
					popscope();
				}
				return;

			case simple_declaration:
				if(t->kids[0]->nkids >= 2)
					const_flag = check_for_const(t->kids[0]);

				typ = synthesize_type(t->kids[0]);
				populate_init_declarators(t->kids[1], typ);
				return;

			case qualified_id:
				typ = synthesize_type(t->kids[0]);
				populate_init_declarators(t->kids[1], typ);
				return;


			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						if(t->kids[i] == NULL)
							return;
						populatelocals(t->kids[i]);
					}
					return;
				}
				return;
		}
	}
}





char *get_membername(struct tree *t){
	while(1){
		switch(t->prodrule){
			case declarator:
				if(t->kids[0]->prodrule == ptr_operator)
					t = t->kids[1];
				else
					t = t->kids[0];
				break;

			case member_declarator:
			case direct_declarator:
			case declarator_id:
			case id_expression:
			case unqualified_id:
				t = t->kids[0];
				break;

			case identifier:
				return t->kids[0]->leaf->text;

			default:
				fprintf(stderr, "get_membername called on non-member_declarator subtree\n");
				return NULL;
		}
	}
}


char *get_funcname(struct tree *t){
   while (1) {
      switch (t->prodrule) {
      case identifier:
	  	return t->kids[0]->leaf->text;

      case declarator:
      	if(t->kids[0]->prodrule == ptr_operator)
      		t = t->kids[1];
      	else
      		t = t->kids[0];
		break;

      case direct_declarator:
      	if(t->nkids == 6)
      		t = t->kids[2];
      	else
      		t = t->kids[0];

      case declarator_id:
      case id_expression:
      case unqualified_id:
	 	t = t->kids[0]; 
	 	break;

      default:
	 	fprintf(stderr, "get_funcname called on non-function subtree\n");
	 	/* may want to sprintf in order to print the t->label on this */
	 	return NULL;
	  }
   }
}


int check_for_const(struct tree *t){
	while(1){
		switch(t->prodrule){
			case cv_qualifier:
				const_flag = 1;
				return 1;

			case decl_specifier_seq:
			case decl_specifier:
			case type_specifier:
				t = t->kids[0];
				break;

			default:
				return 0;
		}
	}
}


int check_if_func_prototype(struct tree *t){
	switch(t->prodrule){
		case init_declarator_list:
		case init_declarator:
		case declarator:
			check_if_func_prototype(t->kids[0]);
			break;

		case direct_declarator:
			if(t->nkids > 1){
				return 0;
			}
			else{
				return 1;
			}

		default:
			return 1;
	}
	return 1;
}


void printsymbols(SymbolTable st, int level){
	int i, j;
	SymbolTableEntry ste;

	if(st == NULL) 
		return;

	for(i = 0; i < st->nBuckets; i++){
		for(ste = st->tbl[i]; ste; ste = ste->next){
			for(j = 0; j < level; j++) printf("\t");
			printf("sym: ");

			if(ste->func_declaration == 1)
				printf("(function prototype) ");

			if(ste->const_flag == 1)
				printf("(const) ");

			printf("%s, type: %d\n", ste->s, ste->type->basetype);
			
			if(!ste->type) continue;
			switch(ste->type->basetype){
				case CLASS_TYPE:
					printsymbols(ste->type->u.c.st, level+1);
					break;
				case FUNC_TYPE:
					printsymbols(ste->type->u.f.st, level+1);
					break;
			}
		}
	}
}



/*
 * **********************************************
 * *			Type checking section 			*
 * **********************************************
*/


/* type_check_locals is given a function_body tree*/
void typecheck_symbols(struct tree *t){
	typeptr lt, rt;
	int i;
	switch(t->prodrule){
		case init_declarator:
			if(t->nkids > 1 && t->kids[1] != NULL){
				lt = get_left_type(t->kids[0], current);
				rt = get_right_type(t->kids[1], current);
				if(compare_types(ASN, lt, rt) == 0){
					return;
				}else{
					fprintf(stderr, "non-matching types: \"%s = %s\"\n", typename(lt), typename(rt));
					exit(3);
				}
			}
			return;


		case function_definition:{
			typeptr functype;
			functype = get_right_type(t->kids[1]->kids[0]->kids[0], current); //fails on t->kids[] = NULL
			printf("functype->basetype: %s\n", typename(functype));
			typecheck_locals(t->kids[3], functype);
			return;
		}


		/*
		case class_specifier:
			return;
		*/

		default:
			if(t->prodrule < 0){
				for(i = 0; i < t->nkids; i++){
					if(t->kids[i] == NULL)
						return;
					typecheck_symbols(t->kids[i]);
				}
				return;
			}
			return;

	}
}


void typecheck_locals(struct tree *t, typeptr functype){
	typeptr lt;
	typeptr rt;
	typeptr f;
	char *s;
	int i;

	while(1){
		switch(t->prodrule){
			case init_declarator:
				if(t->nkids > 1 && t->kids[1] != NULL){
					lt = get_left_type(t->kids[0], functype->u.f.st);
					rt = get_right_type(t->kids[1], functype->u.f.st);
					if(compare_types(ASN, lt, rt) == 0){
						return;
					}else{
						fprintf(stderr, "non-matching types: \"%s = %s\"\n", typename(lt), typename(rt));
						exit(3);
					}
				}

			case assignment_expression:
				/* check assignment expressions */
				if(t->nkids > 1){
					/* check left side of the assignment */
					lt = get_left_type(t->kids[0], functype->u.f.st);
					rt = get_right_type(t->kids[2], functype->u.f.st);
					if(compare_types(ASN, lt, rt) == 0){
						return;
					}else{
						fprintf(stderr, "non-matching types: \"%s = %s\"\n", typename(lt), typename(rt));
						exit(3);
					}
				}


			case postfix_expression:
				if(t->nkids > 1){
					f = get_left_type(t->kids[0], functype->u.f.st);
					s = get_funcname(t->kids[0]->kids[0]->kids[0]);
					/* typecheck_params takes the function parameters tree,
					 * the functions type, the functions name, and the current
					 * symbol table that we are in
					*/
					typecheck_params(t->kids[2], f, s, functype->u.f.st);
					return;
				}


			/*
			case class_specifier:
				return;
			*/

			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						if(t->kids[i] == NULL)
							return;
						typecheck_locals(t->kids[i], functype);
					}
					return;
				}
				return;

		}
	}
}




void typecheck_params(struct tree *t, typeptr functype, char *s, SymbolTable st){
	int i;
	int num_params = 0;
	paramlist pptr;
	//typeptr paramtype1, paramtype2;

	while(1){
		switch(t->prodrule){
			case expression_list_opt:
				num_params = count_params(t->kids[0], num_params);
				printf("nparams: %d\n", functype->u.f.nparams);
				printf("num_params: %d\n", num_params);
				if(num_params != functype->u.f.nparams){
					fprintf(stderr, "in \"%s\": wrong number of parameters for function: %s()\n", 
							st->scope->u.f.name, s);
					exit(3);
				}else{
					typecheck_params(t->kids[0], functype, s, st);
				}
				


			case expression_list:
				if(t->nkids > 1){
					pptr = functype->u.f.parameters;
					pptr = traverse_parameters(t, functype, pptr, st);
				}
				return;


			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						if(t->kids[i] == NULL)
							return;
						typecheck_params(t->kids[i], functype, s, st);
					}
					return;
				}
				return;

		}
	}
}


paramlist traverse_parameters(struct tree *t, typeptr functype, paramlist pptr, SymbolTable st){
	typeptr paramtype1, paramtype2;

	switch(t->prodrule){
		case assignment_expression:
		case expression_list:
			if(t->nkids > 1){
				pptr = traverse_parameters(t->kids[0], functype, pptr, st);
				pptr = traverse_parameters(t->kids[2], functype, pptr, st);
				return pptr;
			}else{
				paramtype1 = get_right_type(t->kids[0], st);
				printf("param1: %s\n", typename(paramtype1));
				paramtype2 = pptr->type;
				printf("param2: %s, name: %s\n", typename(paramtype2), pptr->name);
				if(compare_types(0, paramtype1, paramtype2) != 0){
					fprintf(stderr, "in \"%s\": non-matching type for parameter in function: %s()\n", 
							st->scope->u.f.name, functype->u.f.name);
					exit(3);
				}

				pptr = pptr->next;
				return pptr;
			}

		default:
			return pptr;
	}
}



int count_params(struct tree *t, int n){
	while(1){
		switch(t->prodrule){
			case expression_list:
				n++;
				n = count_params(t->kids[0], n);
				return n;

			default:
				return n;		
		}
	}
}


typeptr get_left_type(struct tree *t, SymbolTable symtab){
	char *s;
	int i;
	typeptr typ = NULL;

	while(1){
		switch(t->prodrule){
			case identifier:{
				s = t->kids[0]->leaf->text;
				SymbolTable st = symtab;
				SymbolTableEntry ste = NULL;
				do{
					ste = lookup_symbol(st, s);
					st = st->parent;
				}while(!ste && st);

				if(ste == NULL){
					fprintf(stderr, "undeclared name: \"%s\"\n", s);
					exit(3);
				}else{
					typ = ste->type;
					printf("left: typ->basetype: %s, name: %s\n", typename(typ), ste->s);
					return typ;
				}
			}

			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						if(t->kids[i] == NULL)
							return typ;
						typ = get_left_type(t->kids[i], symtab);
					}
					return typ;
				}
				return typ;
		}
	}
}

typeptr get_right_type(struct tree *t, SymbolTable symtab){
	char *s;
	int i;
	typeptr typ = NULL;

	while(1){
		switch(t->prodrule){
			case identifier:{
				s = t->kids[0]->leaf->text;
				SymbolTable st = symtab;
				SymbolTableEntry ste = NULL;
				do{
					ste = lookup_symbol(st, s);
					st = st->parent;
				}while(!ste && st);

				if(ste == NULL){
					fprintf(stderr, "undeclared name: \"%s\"\n", s);
					exit(3);
				}else{
					typ = ste->type;
					printf("right: typ->basetype: %s, name: %s\n", typename(typ), ste->s);
					return typ;
				}
			}

			case integer_literal:
				typ = &integer_type;
				typ->pointer = 0;
				return typ;

			case character_literal:
				typ = &char_type;
				typ->pointer = 0;
				return typ;
	
			case floating_literal:
				typ = &double_type;
				typ->pointer = 0;
				return typ;
	
			case string_literal:
				typ = &char_type;
				typ->pointer = 1;
				return typ;
	
			case boolean_literal:
				typ = &bool_type;
				typ->pointer = 0;
				return typ;
			/*
			case unary_expression:
				if(t->nkids > 1 && t->kids[0]->prodrule == AND){
					and_flag = 1;
					typ = get_right_type(t->kids[1]);
				}else{
					typ = get_right_type(t->kids[0]);
				}
				return typ;
			*/
			case additive_expression:
				if(t->nkids > 1){
					typeptr lt = get_right_type(t->kids[0], symtab); //technically the left side of the assignment operator can't have other operators
					typeptr rt = get_right_type(t->kids[2], symtab);
					if(t->kids[1]->prodrule == PLUS){
						if(compare_types(PLUS, lt, rt) == 0)
							return lt;
						else{
							fprintf(stderr, "non-matching types: \"%s + %s\": line %d\n", typename(lt), typename(rt), t->kids[1]->leaf->lineno);
							exit(3);
						}
					}
					else{
						if(compare_types(MINUS, lt, rt) == 0)
							return lt;
						else{
							fprintf(stderr, "non-matching types: \"%s - %s\": line %d\n", typename(lt), typename(rt), t->kids[1]->leaf->lineno);
							exit(3);
						}
					}
				}else{
					typ = get_right_type(t->kids[0], symtab);

					return typ;
				}



			case multiplicative_expression:
				if(t->nkids > 1){
					typeptr lt = get_right_type(t->kids[0], symtab); //technically the left side of the assignment operator can't have other operators
					typeptr rt = get_right_type(t->kids[2], symtab);
					if(t->kids[1]->prodrule == MUL){
						if(compare_types(MUL, lt, rt) == 0)
							return lt;
						else{
							fprintf(stderr, "non-matching types: \"%s * %s\": line %d\n", typename(lt), typename(rt), t->kids[1]->leaf->lineno);
							exit(3);
						}
					}
					else if(t->kids[1]->prodrule == DIV){
						if(compare_types(DIV, lt, rt) == 0)
							return lt;
						else{
							fprintf(stderr, "non-matching types: \"%s / %s\": line %d\n", typename(lt), typename(rt), t->kids[1]->leaf->lineno);
							exit(3);
						}
					}else{
						if(compare_types(MOD, lt, rt) == 0)
							return lt;
						else{
							fprintf(stderr, "non-matching types: \"%s %% %s\": line %d\n", typename(lt), typename(rt), t->kids[1]->leaf->lineno);
							exit(3);
						}
					}
				}else{
					typ = get_right_type(t->kids[0], symtab);
					return typ;
				}
				

			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						if(t->kids[i] == NULL)
							return typ;
						typ = get_right_type(t->kids[i], symtab);
					}
					return typ;
				}
				return typ;
		}
	}
}


int compare_types(int opr, typeptr lt, typeptr rt){
	if(lt == NULL || rt == NULL)
		return 1;

	switch(opr){
		case 0:
		case DIV:
		case MUL:
		case MOD:
		case PLUS:
		case MINUS:
		case ASN:
			if(lt->basetype == rt->basetype)
				return 0;
			else
				return 1;
			
		default:
			return 1;
	}
}