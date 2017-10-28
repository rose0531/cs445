#ifndef TYPE_H
#define TYPE_H
/* type.h */

#include "tree.h"
/* base types */
#define ERROR_TYPE -1000000

#define VOID_TYPE 1000000
#define INT_TYPE 1000001
#define CHAR_TYPE 1000002
#define BOOL_TYPE 1000003
#define DOUBLE_TYPE 1000004
#define FUNC_TYPE 1000005

#define CLASS_TYPE 1000006

typedef struct param{
	char *name;
	struct typeinfo *type;
	struct param *next;
} *paramlist;

typedef struct typeinfo{
	int basetype; /* such as char, int, etc. */
	int pointer;
	union {
		struct classinfo{ /* if we find a class, we want to store info about it */
			char *name;
			struct sym_table *st; //change to my symbol table struct
		} c;
		struct functioninfo{
			char *name;
			struct sym_table *st; //change to my symbol table struct
		    struct typeinfo *returntype;
		    int nparams;
			struct param *parameters;
		} f;
		//struct typeinfo *p;		//pointer type, points at another type
	} u;
} *typeptr;


extern struct typeinfo integer_type;
extern struct typeinfo void_type;
extern struct typeinfo char_type;
extern struct typeinfo bool_type;
extern struct typeinfo double_type;
extern struct typeinfo error_type;
extern struct typeinfo class_type;
extern struct typeinfo ptr_type;


extern char *typname[];

/* functions */

typeptr alctype(int);
typeptr alcclasstype(char *, struct sym_table *);
typeptr alcfunctiontype(char *, struct tree *, struct tree *, struct sym_table *);
typeptr get_returntype(struct tree *t);
paramlist get_parameters(paramlist plist, struct tree *t, struct sym_table *st);
typeptr synthesize_type(struct tree *t);
paramlist add_to_paramlist(paramlist plist, char *s, typeptr rv);
char *typename(typeptr t); //returns the name of the type for debugging


#endif //TYPE_H
