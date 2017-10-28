//main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "120gram.tab.h"
#include "token.h"
#include "tree.h"
#include "symtab.h"
#include "type.h"

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern struct token *yytoken;

char *file_name;

int main(int argc, char *argv[])
{
   int n = argc;

   while(argc > 1)
   {
      argc--;
      yyin = fopen(argv[n-argc], "r");
      file_name = argv[n-argc];
      current = NULL;
      if(yyparse() == 0)
      {
         print_tree(root, 1);
   		populatesymbols(root);
         printf("file: %s\n", file_name);
         printsymbols(current, 1);
         typecheck_symbols(root);
   		iostream_flag = 0;
   		namespace_flag = 0;
      }
      else if(yyparse() == 1)
	fprintf(stderr, "parser aborter\n");
      else if(yyparse() == 2)
	fprintf(stderr, "memory exhausted\n");
      
   }   
}
