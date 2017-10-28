/* type.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "symtab.h"
#include "tree.h"
#include "120gram.tab.h"
#include "nonterm.h"

struct typeinfo integer_type =  {INT_TYPE};
struct typeinfo void_type =  {VOID_TYPE};
struct typeinfo char_type =  {CHAR_TYPE};
struct typeinfo bool_type =  {BOOL_TYPE};
struct typeinfo double_type =  {DOUBLE_TYPE};
struct typeinfo error_type =  {ERROR_TYPE};
struct typeinfo class_type = {CLASS_TYPE};
struct typeinfo func_type = {FUNC_TYPE};

char *typname[] = {"void", "int", "char", "bool", "double", "function"};

int nparams = 0;


typeptr alctype(int base){
	typeptr rv;
	if(base == INT_TYPE) return &integer_type;
	if(base == VOID_TYPE) return &void_type;
	if(base == CHAR_TYPE) return &char_type;
	if(base == BOOL_TYPE) return &bool_type;
	if(base == DOUBLE_TYPE) return &double_type;

	rv = (typeptr)calloc(1, sizeof(struct typeinfo));
	if(rv == NULL)
		return rv;
	rv->basetype = base;
	return rv;
}

typeptr alcclasstype(char *name, SymbolTable st){
	typeptr rv = alctype(CLASS_TYPE);
	if (rv == NULL) 
		return NULL;
    rv->u.c.name = strdup(name);	/* copy the class name */
    rv->u.c.st = st;				/* what symbol table do you belong to? */
    return rv;
}


/* in order for this to make any sense, you have to pass in the subtrees
 * for the return type (r) and the parameter list (p), but the calls to
 * to this function in the example are just passing NULL at present!
 */
typeptr alcfunctiontype(char *funcname, struct tree *r, struct tree *ptree, struct sym_table *st){
	/* base type */
	typeptr rv = alctype(FUNC_TYPE);
	if(rv == NULL)
		return NULL;

	/* function name */
	rv->u.f.name = strdup(funcname);

	/* symbol table we belong to */
	rv->u.f.st = st;

	/* return type */
	if(r != NULL){
		rv->u.f.returntype = get_returntype(r);
	}
	else
		rv->u.f.returntype = NULL;

	/* param list */
	if(ptree != NULL){
		rv->u.f.parameters = get_parameters(rv->u.f.parameters, ptree, st);
		rv->u.f.nparams = nparams;
		nparams = 0;
	}else{
		rv->u.f.parameters = NULL;
		rv->u.f.nparams = 0;
	}


	rv->pointer = 0;
	return rv;
}


paramlist get_parameters(paramlist p, struct tree *t, struct sym_table *st){
	int i;
	switch(t->prodrule){
		case parameter_declaration_list:
			if(t->nkids > 1){
				p = get_parameters(p, t->kids[0], st);
				p = get_parameters(p, t->kids[2], st);
			}else{
				p = get_parameters(p, t->kids[0], st);
			}
			return p;

		case parameter_declaration:{
			typeptr rv;
			char *s;
			rv = get_returntype(t->kids[0]);
			s = strdup(get_funcname(t->kids[1]));
			insert_symbol(st, s, rv);
			p = add_to_paramlist(p, s, rv);
			nparams++;
		}
		return p;

		default:
			if(t->prodrule < 0){
				for(i = 0; i < t->nkids; i++){
					if(t->kids[i] == NULL)
						return p;
					p = get_parameters(p, t->kids[i], st);
				}
				return p;
			}
			return p;
	}
}


paramlist add_to_paramlist(paramlist plist, char *s, typeptr rv){
	paramlist curr;
	curr = plist;

	paramlist tmp = (struct param *)malloc(sizeof(struct param));
	tmp->name = strdup(s);
	tmp->type = rv;
	tmp->next = NULL;

	if(curr == NULL){
		plist = tmp;
		free(curr);
	}else{
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = tmp;
	}
	return plist;
}


typeptr get_returntype(struct tree *t){
	int i;
	typeptr t1;

	if(t == NULL){
	    t1 = &error_type;
		return t1;
	}

	if(t->prodrule < 0){
		for(i = 0; i < t->nkids; i++){
			t1 = get_returntype(t->kids[i]);
			if(t1 != &error_type){
				return t1;
			}
		}
	}

	switch(t->prodrule){
		case INT:
		    t1 = &integer_type;
		    t1->pointer = 0;
			return t1;
		case VOID:
		    t1 = &void_type;
		    t1->pointer = 0;
			return t1;
		case CHAR:
		    t1 = &char_type;
		    t1->pointer = 0;
			return t1;
		case BOOL:
		    t1 = &bool_type;
		    t1->pointer = 0;
			return t1;
		case FLOAT:
		case DOUBLE:
			t1 = &double_type;
			t1->pointer = 0;
			return t1;
		default:
		    t1 = &error_type;
		    t1->pointer = 0;
			return t1;
	}
}



typeptr synthesize_type(struct tree *t){
	int i;
	typeptr t1;

	if(t == NULL) return &error_type;

	if(t->prodrule < 0){
		for(i = 0; i < t->nkids; i++){
			t1 = synthesize_type(t->kids[i]);
			if(t1 != &error_type){
				return t1;
			}
		}
	}

	switch(t->prodrule){
		case INT:
		case INTEGER:
		    t1 = &integer_type;
		    t1->pointer = 0;
			return t1;
		case VOID:
		    t1 = &void_type;
		    t1->pointer = 0;
			return t1;
		case CHAR:
		    t1 = &char_type;
		    t1->pointer = 0;
			return t1;
		case BOOL:
		    t1 = &bool_type;
		    t1->pointer = 0;
			return t1;
		case FLOAT:
		case DOUBLE:
			t1 = &double_type;
			t1->pointer = 0;
			return t1;
		case CLASS_NAME:
			if(strcmp(t->leaf->text, "string") == 0)
				t1 = &char_type;
			else
				t1 = &class_type;
			t1->pointer = 0;
			return t1;
		default:
		    t1 = &error_type;
		    t1->pointer = 0;
			return t1;
	}
}


char *typename(typeptr typ){
	if(typ == NULL) 
		return "(NULL)";
   	else if(typ->basetype == CLASS_TYPE) {
    	return typ->u.c.name;	/* return class name */
   	}
   	else if(typ->basetype == ERROR_TYPE)
   		return "(ERROR_TYPE)";
   	else 
   		return typname[typ->basetype-1000000];
}

void print_paramlist(paramlist p){
	paramlist ptr;
	ptr = p;
	while(ptr != NULL){
		printf("param name: %s\n", ptr->name);
		ptr = ptr->next;
	}
}