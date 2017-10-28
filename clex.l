O        [0-7]
D        [0-9]
L        [a-zA-Z_]
H        [a-fA-F0-9]
E        [Ee][+-]?{D}+
FS       (f|F|l|L)
IS       (u|U|l|L)
W        [ \t\f]*
LIT      \"(\\.|[^\\"])*\"

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "120gram.tab.h"
#include "token.h"
#include "tree.h"
#include "nonterm.h"
#include "symtab.h"

#define YY_NO_INPUT
#define MAX_INCLUDE_DEPTH 2

extern char *file_name;
struct token *yytoken = NULL;

void lexerr(char *s);
void generate_token(int token_num);
void handle_user_include();
void string_to_sval(char *text);
void char_to_sval(char *text);
void remove_substring(char *s, char *s_remove);
int check_identifier(char *);
//int typenametable_insert(char *s, int cat);
struct tree *leaf_node(int token_num);
void clear_typename_table();
void clear_sysinclude_flags();

/* Save file information for backtracking */
struct fileinfo
{
   int line_num;
   char *file_name;
};

/* Type table */
struct typenametable_entry {
   char *name;
   int category;
   struct typenametable_entry *next;
} *head;


/* Stack for holding includes */
struct fileinfo *include_stack[MAX_INCLUDE_DEPTH];
int top = -1;
int yybuffer_state_counter = 0;

/* Temp storage for ival/sval/dval */
int ival;
char *sval;
double dval;

/* Systeam Includes */
int included_cmath = 0;
int included_cstdlib = 0;
int included_ctime = 0;
int included_fstream = 0;
int included_iostream = 0;
int included_string = 0;
int included_std = 0;

extern int iostream_flag;
extern int namespace_flag;


/* Other counters */
int line_num = 1;
int errors;

%}

%%

\n                        { line_num++; }
[ \t\f]+                  {  }

("//".*)|("/*"([^*]|("*"+[^*/]))*"*/") { /*generate_token(COMMENT); return COMMENT;*/ }

"abort"                 { lexerr(yytext); }
"and"                   { lexerr(yytext); }
"and_eq"                { lexerr(yytext); }
"alignas"               { lexerr(yytext); }
"alignof"               { lexerr(yytext); }
"asm"                   { lexerr(yytext); }
"auto"                  { lexerr(yytext); }
"bitand"                { lexerr(yytext); }
"bitor"                 { lexerr(yytext); }
"bool"                  { generate_token(BOOL); yylval.treenode = leaf_node(BOOL); return BOOL; }
"break"                 { generate_token(BREAK); yylval.treenode = leaf_node(BREAK); return BREAK; }
"case"                  { generate_token(CASE); yylval.treenode = leaf_node(CASE); return CASE; }
"catch"                 { lexerr(yytext); }
"char"                  { generate_token(CHAR); yylval.treenode = leaf_node(CHAR); return CHAR; }
"char16_t"              { lexerr(yytext); }
"char32_t"              { lexerr(yytext); }
"class"                 { generate_token(CLASS); yylval.treenode = leaf_node(CLASS); return CLASS; }
"compl"                 { lexerr(yytext); }
"const"                 { generate_token(CONST); yylval.treenode = leaf_node(CONST); return CONST; }
"constexpr"             { lexerr(yytext); }
"const_cast"            { lexerr(yytext); }
"continue"              { lexerr(yytext); }
"decltype"              { lexerr(yytext); }
"default"               { generate_token(DEFAULT); yylval.treenode = leaf_node(DEFAULT); return DEFAULT; }
"delete"                { generate_token(DELETE); yylval.treenode = leaf_node(DELETE); return DELETE; }
"do"                    { generate_token(DO); yylval.treenode = leaf_node(DO); return DO; }
"double"                { generate_token(DOUBLE); yylval.treenode = leaf_node(DOUBLE); return DOUBLE; }
"dynamic_cast"          { lexerr(yytext); }
"else"                  { generate_token(ELSE); yylval.treenode = leaf_node(ELSE); return ELSE; }
"enum"                  { lexerr(yytext); }
"explicit"              { lexerr(yytext); }
"export"                { lexerr(yytext); }
"extern"                { lexerr(yytext); }
"false"                 { generate_token(FALSE); yylval.treenode = leaf_node(FALSE); return FALSE; }
"float"                 { generate_token(FLOAT); yylval.treenode = leaf_node(FLOAT); return FLOAT; }
"for"                   { generate_token(FOR); yylval.treenode = leaf_node(FOR); return FOR; }
"friend"                { lexerr(yytext); }
"goto"                  { lexerr(yytext); }
"if"                    { generate_token(IF); yylval.treenode = leaf_node(IF); return IF; }
"inline"                { lexerr(yytext); }
"int"                   { generate_token(INT); yylval.treenode = leaf_node(INT); return INT; }
"long"                  { generate_token(LONG); yylval.treenode = leaf_node(LONG); return LONG; }
"mutable"               { lexerr(yytext); }
"namespace"             { generate_token(NAMESPACE); yylval.treenode = leaf_node(NAMESPACE); return NAMESPACE; }
"new"                   { generate_token(NEW); yylval.treenode = leaf_node(NEW); return NEW; }
"noexcept"              { lexerr(yytext); }
"not"                   { lexerr(yytext); }
"not_eq"                { lexerr(yytext); }
"nullptr"               { lexerr(yytext); }
"operator"              { lexerr(yytext); }
"or"                    { lexerr(yytext); }
"or_eq"                 { lexerr(yytext); }
"private"               { generate_token(PRIVATE); yylval.treenode = leaf_node(PRIVATE); return PRIVATE; }
"protected"             { lexerr(yytext); }
"public"                { generate_token(PUBLIC); yylval.treenode = leaf_node(PUBLIC); return PUBLIC; }
"register"              { lexerr(yytext); }
"reinterpret_cast"      { lexerr(yytext); }
"return"                { generate_token(RETURN); yylval.treenode = leaf_node(RETURN); return RETURN; }
"short"                 { generate_token(SHORT); yylval.treenode = leaf_node(SHORT); return SHORT; }
"signed"                { lexerr(yytext); }
"sizeof"                { lexerr(yytext); }
"static"                { lexerr(yytext); }
"static_assert"         { lexerr(yytext); }
"static_cast"           { lexerr(yytext); }
"struct"                { lexerr(yytext); }
"switch"                { generate_token(SWITCH); yylval.treenode = leaf_node(SWITCH); return SWITCH; }
"template"              { lexerr(yytext); }
"this"                  { lexerr(yytext); }
"thread_local"          { lexerr(yytext); }
"throw"                 { lexerr(yytext); }
"true"                  { generate_token(TRUE); yylval.treenode = leaf_node(TRUE); return TRUE; }
"try"                   { lexerr(yytext); }
"typedef"               { lexerr(yytext); }
"typeid"                { lexerr(yytext); }
"typename"              { lexerr(yytext); }
"union"                 { lexerr(yytext); }
"unsigned"              { generate_token(UNSIGNED); yylval.treenode = leaf_node(UNSIGNED); return UNSIGNED; }
"using"                 { generate_token(USING); yylval.treenode = leaf_node(USING); return USING; }
"virtual"               { lexerr(yytext); }
"void"                  { generate_token(VOID); yylval.treenode = leaf_node(VOID); return VOID; }
"volatile"              { lexerr(yytext); }
"wchar_t"               { lexerr(yytext); }
"while"                 { generate_token(WHILE); yylval.treenode = leaf_node(WHILE); return WHILE; }
"xor"                   { lexerr(yytext); }
"xor_eq"                { lexerr(yytext); }
"#include <iostream>"   { included_iostream = 1; iostream_flag = 1; }
"#include <string>"     { included_string = 1; }
"#include <ctime>"      { included_ctime = 1; }
"#include <cstdlib>"    { included_cstdlib = 1; }
"#include <cmath>"      { included_cmath = 1; }
"#include <fstream>"    { included_fstream = 1; }

"std"           { included_std = 1; generate_token(STD); yylval.treenode = leaf_node(STD); namespace_flag = 1;
                if (included_string) typenametable_insert("string", CLASS_NAME);
                if (included_iostream)
                {
                   typenametable_insert("ifstream", CLASS_NAME);
                   typenametable_insert("ofstream", CLASS_NAME);
                   typenametable_insert("fstream", CLASS_NAME);
                   typenametable_insert("cout", IDENTIFIER);
                   typenametable_insert("cin", IDENTIFIER);
                   typenametable_insert("endl", IDENTIFIER);
                }
                return STD;
             }


{L}({L}|{D})*           {   int cat;
                            cat = check_identifier(yytext);
                            generate_token(cat);
                            yylval.treenode = leaf_node(cat); 
                            return cat;
                        }

0b[10]+{IS}?            { lexerr("Binary not supported"); }

0[xX]{H}+{IS}?          { lexerr("Hex not supported"); }

0{O}+{IS}?              { lexerr("Octal not supported"); }

{D}+{IS}?               { ival = atoi(yytext); generate_token(INTEGER); yylval.treenode = leaf_node(INTEGER); return INTEGER; }

'(\\.|[^\\'])+'         { char_to_sval(yytext); generate_token(CHARACTER); yylval.treenode = leaf_node(CHARACTER); return CHARACTER; }

{D}+{E}{FS}?            { dval = atof(yytext); generate_token(FLOATING); yylval.treenode = leaf_node(FLOATING); return FLOATING; }
{D}*"."{D}+({E})?{FS}?  { dval = atof(yytext); generate_token(FLOATING); yylval.treenode = leaf_node(FLOATING); return FLOATING; }
{D}+"."{D}*({E})?{FS}?  { dval = atof(yytext); generate_token(FLOATING); yylval.treenode = leaf_node(FLOATING); return FLOATING; }

{LIT}                   { string_to_sval(yytext); generate_token(STRING); yylval.treenode = leaf_node(STRING); return STRING; }

"#include"[ ]*\"[^\\"]+\"  { handle_user_include(); }


"."                     { generate_token(DOT); yylval.treenode = leaf_node(DOT); return DOT; }
">>="                   { generate_token(SREQ); yylval.treenode = leaf_node(SREQ); return SREQ; }
"<<="                   { generate_token(SLEQ); yylval.treenode = leaf_node(SLEQ); return SLEQ; }
"+="                    { generate_token(ADDEQ); yylval.treenode = leaf_node(ADDEQ); return ADDEQ; }
"-="                    { generate_token(SUBEQ); yylval.treenode = leaf_node(SUBEQ); return SUBEQ; }
"*="                    { generate_token(MULEQ); yylval.treenode = leaf_node(MULEQ); return MULEQ; }
"/="                    { generate_token(DIVEQ); yylval.treenode = leaf_node(DIVEQ); return DIVEQ; }
"%="                    { generate_token(MODEQ); yylval.treenode = leaf_node(MODEQ); return MODEQ; }
"&="                    { lexerr(yytext); }
"^="                    { lexerr(yytext); }
"|="                    { lexerr(yytext); }
">>"                    { generate_token(SR); yylval.treenode = leaf_node(SR); return SR; }
"<<"                    { generate_token(SL); yylval.treenode = leaf_node(SL); return SL; }
"++"                    { generate_token(PLUSPLUS); yylval.treenode = leaf_node(PLUSPLUS); return PLUSPLUS; }
"--"                    { generate_token(MINUSMINUS); yylval.treenode = leaf_node(MINUSMINUS); return MINUSMINUS; }
"->"                    { generate_token(ARROW); yylval.treenode = leaf_node(ARROW); return ARROW; }
"&&"                    { generate_token(ANDAND); yylval.treenode = leaf_node(ANDAND); return ANDAND; }
"||"                    { generate_token(OROR); yylval.treenode = leaf_node(OROR); return OROR; }
"<="                    { generate_token(LTEQ); yylval.treenode = leaf_node(LTEQ); return LTEQ; }
">="                    { generate_token(GTEQ); yylval.treenode = leaf_node(GTEQ); return GTEQ; }
"=="                    { generate_token(EQ); yylval.treenode = leaf_node(EQ); return EQ; }
"!="                    { generate_token(NOTEQ); yylval.treenode = leaf_node(NOTEQ); return NOTEQ; }
"::"                    { generate_token(COLONCOLON); yylval.treenode = leaf_node(COLONCOLON); return COLONCOLON; }
";"                     { generate_token(SM); yylval.treenode = leaf_node(SM); return SM; }
"{"                     { generate_token(LC); yylval.treenode = leaf_node(LC); return LC; }
"}"                     { generate_token(RC); yylval.treenode = leaf_node(RC); return RC; }
","                     { generate_token(CM); yylval.treenode = leaf_node(CM); return CM; }
":"                     { generate_token(COLON); yylval.treenode = leaf_node(COLON); return COLON; }
"="                     { generate_token(ASN); yylval.treenode = leaf_node(ASN); return ASN; }
"("                     { generate_token(LP); yylval.treenode = leaf_node(LP); return LP; }
")"                     { generate_token(RP); yylval.treenode = leaf_node(RP); return RP; }
"["                     { generate_token(LB); yylval.treenode = leaf_node(LB); return LB; }
"]"                     { generate_token(RB); yylval.treenode = leaf_node(RB); return RB; }
"&"                     { generate_token(AND); yylval.treenode = leaf_node(AND); return AND; }
"!"                     { generate_token(BANG); yylval.treenode = leaf_node(BANG); return BANG; }
"~"                     { generate_token(NOT); yylval.treenode = leaf_node(NOT); return NOT; }
"-"                     { generate_token(MINUS); yylval.treenode = leaf_node(MINUS); return MINUS; }
"+"                     { generate_token(PLUS); yylval.treenode = leaf_node(PLUS); return PLUS; }
"*"                     { generate_token(MUL); yylval.treenode = leaf_node(MUL); return MUL; }
"/"                     { generate_token(DIV); yylval.treenode = leaf_node(DIV); return DIV; }
"%"                     { generate_token(MOD); yylval.treenode = leaf_node(MOD); return MOD; }
"<"                     { generate_token(LT); yylval.treenode = leaf_node(LT); return LT; }
">"                     { generate_token(GT); yylval.treenode = leaf_node(GT); return GT; }
"^"                     { generate_token(ER); yylval.treenode = leaf_node(ER); return ER; }
"|"                     { generate_token(OR); yylval.treenode = leaf_node(OR); return OR; }
"?"                     { generate_token(QUEST); yylval.treenode = leaf_node(QUEST); return QUEST; }
"@"                     { lexerr(yytext); }
"$"+                    { lexerr(yytext); }

%%

void lexerr(char *s)
{
	errors++;

	fprintf(stderr, "%s: lexical error", s);

	fprintf(stderr, ", C++ token \"%s\" is not legal in 120++, file: %s line: %d\n", yytext, file_name, line_num);
  exit(1);
}

/*
 * Return 1 if done, 0 if yyin points at more input
 */
int yywrap()
{
   if(yybuffer_state_counter == 0)
   {
      line_num = 1;
      clear_typename_table();
      //clear_sysinclude_flags();

      return 1;
   }
   else
   {
      fclose(yyin);
      /* pop the buffer state */
      yypop_buffer_state();
      yybuffer_state_counter--;
      
      /* create a fileinfo struct to get contents from the top of the include_stack */
      struct fileinfo *info = (struct fileinfo*)malloc(sizeof(struct fileinfo));
      info = include_stack[top];
      top--;

      file_name = info->file_name;
      line_num = info->line_num;

      /* make sure to free the fileinfo struct because we don't need it anymore */
      info = NULL;
      free(info);
      return 0;
   }
}

void generate_token(int token_num)
{
   /* Create a new struct token and fill in the token information */
   struct token *t = (struct token*)malloc(sizeof(struct token));
   t->dvalflag = 0;
   t->svalflag = 0;
   t->ivalflag = 0;   

   t->category = token_num;
   t->text = strdup(yytext);
   t->lineno = line_num; 
   t->filename = strdup(file_name);

   /* Store svals/ivals/dvals depending on what type token was found */
   switch(token_num)
   {
      case STRING :
      case CHARACTER :
         t->sval = strdup(sval);
         t->svalflag = 1;
         break;
      case INTEGER :
         t->ival = ival;
         t->ivalflag = 1;
         break;
      case FLOATING :
         t->dval = dval;
         t->dvalflag = 1;
         break;
      default :
         break;
   }
   
   /* Give the token to yytoken so main() can use it */
   yytoken = t;   
}

struct tree *leaf_node(int token_num)
{
   struct tree *new_leafnode = (struct tree*)malloc(sizeof(struct tree));
   new_leafnode->prodrule = token_num;
   new_leafnode->nkids = 0;    //no kids
   new_leafnode->leaf = yytoken;
   return new_leafnode;
}


void handle_user_include()
{
   /* Check if we have too many nested includes */
   top++;
   if(top >= MAX_INCLUDE_DEPTH)
   {
      printf("error: includes nested too deeply\n");
      exit(1);
   }
 

   /* Get the user included file name */
   char *fname = strchr(yytext, '\"')+1;
   fname[strlen(fname)-1] = '\0';
   fname = strdup(fname);

   FILE *input_file = fopen(fname, "r");
   if(!input_file)
   {
      fprintf(stderr, "Unable to open include file: %s\n", fname);
      perror("");
      exit(1);
   }

   
   /* Save the current file information in a fileinfo struct */
   struct fileinfo *fi = (struct fileinfo*)malloc(sizeof(struct fileinfo));
   fi->line_num = line_num;
   fi->file_name = file_name;

   
   /* Add the saved file information to the top of the include_stack */
   include_stack[top] = (struct fileinfo*)malloc(sizeof(struct fileinfo));
   include_stack[top] = fi;

   /* Change the file name and reset the number of lines */
   file_name = fname;
   line_num = 1;


   /* Push flex's internal buffer state */
   yypush_buffer_state(yy_create_buffer(input_file, YY_BUF_SIZE));
   yybuffer_state_counter++;   
}



/* 
 * Converts string to sval by removing qutoes
 * and unnecessary escaped characters
*/
void string_to_sval(char *text)
{
   /* Remove quotes from string */
   char *temp_sval = strdup(text);
   temp_sval = strchr(temp_sval, '\"')+1;
   temp_sval[strlen(temp_sval) - 1] = '\0';
   
   
   /* Remove unnecessary substrings from string */
   remove_substring(temp_sval, "\\n");
   remove_substring(temp_sval, "\\t");
   remove_substring(temp_sval, "\\0");  
   remove_substring(temp_sval, "\\'");
   remove_substring(temp_sval, "\\\\");
   remove_substring(temp_sval, "\\\"");
     
   
   /* Duplicate string to sval, free temp_sval */
   sval = strdup(temp_sval);
   temp_sval = NULL;
   free(temp_sval);
}



/* 
 * Convert single characters to sval 
*/
void char_to_sval(char *text)
{
   /* Remove apostrophes from characters */
   char *char_temp = strdup(text);
   char_temp = strchr(char_temp, '\'')+1;
   char_temp[strlen(char_temp)-1] = '\0';

   
   /* Duplicate character to sval, free char_temp */
   sval = strdup(char_temp);
   char_temp = NULL;
   free(char_temp);
}

void remove_substring(char *s, char *s_remove)
{
   /* 
      Found an easy way to remove substrings from a string online and I modified it a little
      https://stackoverflow.com/questions/4833347/removing-substring-from-a-string
   */

   char *temp_str = NULL;
   int rlen = strlen(s_remove);
   
   while((temp_str = strstr(s, s_remove)))
   {
      //int tlen = strlen(temp_str);
      
      if(strcmp(s_remove, "\\'") == 0 || strcmp(s_remove, "\\\\") == 0 || strcmp(s_remove, "\\\"") == 0)
         memmove(temp_str, temp_str + (rlen - 1), 1 + strlen(temp_str + (rlen - 1)));
      

      /* If we see \n \t or \0, remove the entire escaped character and replace with control character */
      else if(strcmp(s_remove, "\\n") == 0)
      {
         memmove(temp_str, temp_str + (rlen - 1), 1 + strlen(temp_str + (rlen - 1)));
         *temp_str = '\012';
      }
      else if(strcmp(s_remove, "\\t") == 0)
      {
         memmove(temp_str, temp_str + (rlen - 1), 1 + strlen(temp_str + (rlen - 1)));
         *temp_str = '\011';
      }
      else if(strcmp(s_remove, "\\0") == 0)
      {
         memmove(temp_str, temp_str + rlen, 1 + strlen(temp_str + rlen));
         *temp_str = '\000';
      }
      
      
      /* Otherwise, just remove the entire string */
      else
         memmove(temp_str, temp_str + rlen, 1 + strlen(temp_str + rlen));   
   }

   temp_str = NULL;
   free(temp_str);
}



/*
 * Type name table.
*/
int typenametable_lookup(char *s)
{
   struct typenametable_entry *tmp = head;
   while (tmp != NULL) {
      if (strcmp(s, tmp->name) == 0)
        return tmp->category;
      tmp = tmp->next;
   }
   return IDENTIFIER;
}

int typenametable_insert(char *s, int cat)
{
   struct typenametable_entry *tmp = head;
   while (tmp) {
      if (!strcmp(s, tmp->name)) {
         printf("warning: %s is already in the typename table as a %d\n", s, tmp->category);
         return tmp->category;
         }
      tmp = tmp->next;
   }
   tmp = calloc(1, sizeof (struct typenametable_entry));
   if(!tmp) { fprintf(stderr, "tnti out of memory\n"); return -1; }
   tmp->name = strdup(s);
   tmp->category = cat;
   tmp->next = head;
   head = tmp;
   return 0;
}

int check_identifier(char *s)
{
   return typenametable_lookup(s);
}

void clear_typename_table()
{
   struct typenametable_entry *curr = head;
   struct typenametable_entry *next;
   while(curr != NULL)
   {
      next = curr->next;
      curr->next = NULL;
      free(curr);
      curr = next;
   }

   head = NULL;  
}

void clear_sysinclude_flags()
{
   included_std = 0;
   included_iostream = 0;
   included_string = 0;
   included_ctime = 0;
   included_cstdlib = 0;
   included_cmath = 0;
   included_fstream = 0; 
}
