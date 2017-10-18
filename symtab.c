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

/* error handling */
void error(char *s, struct tree *t){
	while(t->prodrule < 0 && t->nkids > 0)
		t = t->kids[0];
	yylval.treenode = t;
	yyerror(s);
}


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
	int i, h;
	SymbolTableEntry se;
	if(st == NULL)
		return NULL;

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
	char *str = strdup(s);
	char c;
	while(c = *s++){
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
	int i, h, l;
	SymbolTableEntry se;

	h = hash(st, str);
	for(se = st->tbl[h]; se != NULL; se = se->next){
		if(!strcmp(str, se->s)){
			/* copy of the string is already in the table */
			if(se->func_declaration == 1){
				se = (struct st_entry *)alloc(sizeof(struct st_entry));
				se->next = st->tbl[h];
				se->table = st;
				st->tbl[h] = se;
				se->s = str;
				se->type = t; 
				se->const_flag = const_flag;
				se->func_declaration = func_declaration;
				const_flag = 0;
				func_declaration = 0;
				st->nEntries++;
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
	se->s = str;
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
	if(t == NULL)
		return;

	switch(t->prodrule){
		case declaration:
			//skip the using_directive rule, it's just for using namespace std
			if(t->kids[0]->prodrule == using_directive){
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
			if(check_if_func_prototype(t->kids[0]->kids[0]->kids[1]) == 1)
				func_declaration = 1;

			//get the declaration name
			populate_init_declarators(t->kids[0]->kids[0]->kids[1], typ);
			func_declaration = 0;
		
			break;


		case function_definition:
			s = get_funcname(t->kids[1]);

			/* for entering new scope, you have to give it the
		 	* tree that contains the return value and the tree
		 	* that contains the parameters for the function
			*/
			if(t->kids[1]->kids[0]->kids[0]->prodrule == CLASS_NAME )
				enter_newscope(s, FUNC_TYPE, t->kids[0], t->kids[1]->kids[0]->kids[4]);
			else
				enter_newscope(s, FUNC_TYPE, t->kids[0], t->kids[1]->kids[0]->kids[2]);

			/* get local variables in function body */
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
			if(t->nkids > 1)
				return 1;
			else
				return 0;

		default:
			return 0;
	}
}



void populate_init_declarators(struct tree *t, typeptr typ){
	int i;
	switch(t->prodrule){
		case init_declarator_list:
			if(t->nkids == 3){
				populate_init_declarators(t->kids[0], typ);
				populate_init_declarators(t->kids[2], typ);	
			}else
				populate_init_declarators(t->kids[0], typ);
			break;

		case init_declarator:
		case declarator:
		case direct_declarator:
		case declarator_id:
		case id_expression:
		case unqualified_id:
			populate_init_declarators(t->kids[0], typ);
			break;

		case identifier:
			insert_symbol(current, t->kids[0]->leaf->text, typ);
			break;

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
					//type check if there is no type_specifier
					populatelocals(t->kids[4]);
					popscope();
				}else{ // if s == "do"
					enter_newscope(s, FUNC_TYPE, NULL, NULL);
					populatelocals(t->kids[1]);
					//type check
					popscope();
				}
				return;

			case simple_declaration:
				if(t->kids[0]->nkids >= 2)
					const_flag = check_for_const(t->kids[0]);

				typ = synthesize_type(t->kids[0]);
				populate_init_declarators(t->kids[1], typ);
				return;

			case expression_statement:
				check_for_undeclared(t);
				return;

			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						populatelocals(t->kids[i]);
					}
					return;
				}
				return;
		}
	}
}


void check_for_undeclared(struct tree *t){
	int i;
	while(1){
		switch(t->prodrule){
			case identifier:{
				SymbolTableEntry ste = NULL;
				SymbolTable st = current;
				do{
					ste = lookup_symbol(st, t->kids[0]->leaf->text);
					st = st->parent;
				}while(!ste && st);
				if(!ste){ 
					fprintf(stderr, "undeclared symbol: \"%s\": line %d\n", t->kids[0]->leaf->text, t->kids[0]->leaf->lineno);
					exit(3);
				}
				return;
			}

			default:
				if(t->prodrule < 0){
					for(i = 0; i < t->nkids; i++){
						check_for_undeclared(t->kids[i]);
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
				error("get_membername called on non-member_declarator subtree\n", t);
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
	 	error("get_funcname called on non-function subtree\n", t);
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


void printsymbols(SymbolTable st, int level){
	int i, j;
	SymbolTableEntry ste;

	if(st == NULL) return;

	for(i = 0; i < st->nBuckets; i++){
		for(ste = st->tbl[i]; ste; ste = ste->next){
			for(j = 0; j < level; j++) printf("\t");
			printf("sym: ");
			if(ste->func_declaration == 1)
				printf("(function prototype) ");
			if(ste->const_flag == 1)
				printf("(const) ");
			printf("%s\n", ste->s);
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
