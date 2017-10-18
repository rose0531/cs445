#ifndef SYMTAB_H
#define SYMTAB_H
/* symtab.h */

#include <stdio.h>
#include "type.h"

typedef struct sym_table{
	int nBuckets;
	int nEntries;
	struct sym_table *parent; //enclosing scope
	typeptr scope;	//what type does it belong to
    struct st_entry **tbl; //array of buckets
} *SymbolTable;

typedef struct st_entry{
	SymbolTable table;		//what symbol table do we belong to
	char *s;				//string
	struct typeinfo *type;	//I'll do type stuff in hw4 //aka typeptr, struct c_type *
	int const_flag;
	int func_declaration;
	struct st_entry *next; 
} *SymbolTableEntry;


/*
 * Prototypes
*/
SymbolTable new_st(int size);									/* create symbol table*/
char *alloc(int n);
void delete_st(SymbolTable);									/* destroy symbol table*/
SymbolTableEntry lookup_symbol(SymbolTable, char *sym);			/* lookup symbol from symbol table*/
int hash(SymbolTable st, char *s);								/* compute hash value */
void enter_newscope(char *, int, struct tree *, struct tree *);	/* enter a new scope */
int insert_symbol(SymbolTable, char *str, typeptr);				/* enter symbol into table*/

void populatesymbols(struct tree *t);							/* populate symbols into symbol tables */
void populate_init_declarators(struct tree *t, typeptr typ);
void populatelocals(struct tree *t);
void check_for_undeclared(struct tree *t);
int check_if_func_prototype(struct tree *t);
int check_for_const(struct tree *t);

char *get_membername(struct tree *t);
char *get_funcname(struct tree *t);								/* get a functions name */
void printsymbols(SymbolTable st, int level);					/* print symbols in a symbol table */
void error(char *s, struct tree *t);							/* error handling */


extern SymbolTable current;
extern SymbolTable globals;

#define pushscope(stp) do { stp->parent = current; current = stp; } while (0)
#define popscope() do { current = current->parent; } while(0)

#endif /* SYMTAB_H */
