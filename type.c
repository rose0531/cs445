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
struct typeinfo float_type =  {FLOAT_TYPE};
struct typeinfo error_type =  {ERROR_TYPE};
struct typeinfo class_type = {CLASS_TYPE};

char *typname[] = {"void", "int", "class", "function", "char", "bool", "float"};

paramlist plptr = NULL;


typeptr alctype(int base){
	typeptr rv;
	if(base == INT_TYPE) return &integer_type;
	if(base == VOID_TYPE) return &void_type;
	if(base == CHAR_TYPE) return &char_type;
	if(base == BOOL_TYPE) return &bool_type;
	if(base == FLOAT_TYPE) return &float_type;

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
typeptr alcfunctiontype(char *funcname, struct tree *r, struct tree *p, struct sym_table *st){
	int i;

	/* base type */
	typeptr rv = alctype(FUNC_TYPE);
	if(rv == NULL)
		return NULL;

	/* function name */
	rv->u.f.name = strdup(funcname);

	/* symbol table we belong to */
	rv->u.f.st = st;

	/* return type */
	if(r != NULL)
		rv->u.f.returntype = get_returntype(r);
	else
		rv->u.f.returntype = NULL;

	/* param list */
	if(p != NULL){
		paramlist plist;
		plptr = NULL;
		plist = get_parameters(p, st); //makes paramlist and puts parameters into the symbol table
		rv->u.f.parameters = plist;
	}else{
		rv->u.f.parameters = NULL;
	}

	return rv;
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
			return t1;
		case VOID:
		    t1 = &void_type;
			return t1;
		case CHAR:
		    t1 = &char_type;
			return t1;
		case BOOL:
		    t1 = &bool_type;
			return t1;
		case FLOAT:
			t1 = &float_type;
			return t1;
		default:
		    t1 = &error_type;
			return t1;
	}
}


paramlist get_parameters(struct tree *t, struct sym_table *st){
	int i;
	paramlist p;

	switch(t->prodrule){
		case parameter_declaration_clause:
			p = get_parameters(t->kids[0], st);
			return p;
			break;
		case parameter_declaration_list:
			for(i = 0; i < t->nkids; i++){
				if(t->kids[i]->prodrule == CM){
					i++;
					p = get_parameters(t->kids[i], st);
				}
				else
					p = get_parameters(t->kids[i], st);	
			}
			return p;
			break;
		case parameter_declaration:
			p->type = get_returntype(t->kids[0]); //same as synthesize type?
			p->name = strdup(get_funcname(t->kids[1]));
			insert_symbol(st, p->name, p->type);
			add_to_paramlist(p);
			return p;
			break;	
	}
}


void add_to_paramlist(paramlist p){
	if(plptr == NULL){
		plptr = p;
		p->next = NULL;
	}
	else{
		p = plptr->next;
		plptr = p;
	}
}


typeptr synthesize_type(struct tree *t){
	int i;
	typeptr t1;

	if(t == NULL) return &error_type;

	if(is_nonterminal(t)){
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
			return t1;
		case VOID:
		    t1 = &void_type;
			return t1;
		case CHAR:
		    t1 = &char_type;
			return t1;
		case BOOL:
		    t1 = &bool_type;
			return t1;
		case FLOAT:
			t1 = &float_type;
			return t1;
		case CLASS_NAME:
			t1 = &class_type;
		default:
		    t1 = &error_type;
			return t1;
	}
}


char *typename(typeptr t){
	if (!t) 
		return "(NULL)";
   	else if (t->basetype == CLASS_TYPE) {
    	return t->u.c.name;	/* return class name */
   	}
   	else 
   		return typname[t->basetype-1000000];
}
