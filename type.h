#ifndef TYPE_H
#define TYPE_H
/* type.h */

#include "tree.h"

/* base types */
#define ERROR_TYPE -1000000

#define VOID_TYPE 1000000
#define INT_TYPE 1000001
#define CLASS_TYPE 1000002
#define CHAR_TYPE 1000003
#define BOOL_TYPE 1000004
#define FLOAT_TYPE 1000005
#define FUNC_TYPE 1000006
#define FOR_TYPE 1000007

typedef struct param{
	char *name;
	struct typeinfo *type;
	struct param *next;
} *paramlist;

typedef struct typeinfo{
	int basetype; /* such as char, int, etc. */
	union {
		struct classinfo{ /* if we find a class, we want to store info about it */
			char *name;
			struct sym_table *st; //change to my symbol table struct
		} c;
		struct functioninfo{
			char *name;
			struct sym_table *st; //change to my symbol table struct
		    struct typeinfo *returntype;
			struct param *parameters;
		} f;
		struct typeinfo *p;		//pointer type, points at another type
	} u;
} *typeptr;


extern struct typeinfo integer_type;
extern struct typeinfo void_type;
extern struct typeinfo char_type;
extern struct typeinfo bool_type;
extern struct typeinfo float_type;
extern struct typeinfo error_type;
extern struct typeinfo class_type;

extern char *typname[];

/* functions */

typeptr alctype(int);
typeptr alcclasstype(char *, struct sym_table *);
typeptr alcfunctiontype(char *, struct tree *, struct tree *, struct sym_table *);
typeptr get_returntype(struct tree *t);
paramlist get_parameters(struct tree *t, struct sym_table *st);
typeptr synthesize_type(struct tree *t);
void add_to_paramlist(paramlist p);
char *typename(typeptr t); //returns the name of the type for debugging

#endif //TYPE_H
