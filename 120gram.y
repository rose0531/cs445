//120gram.y
/*
 * Grammar for 120++, a subset of C++ used in CS 120 at University of Idaho
 *
 * Adaptation by Clinton Jeffery, with help from Matthew Brown, Ranger
 * Adams, and Shea Newton.
 *
 * Based on Sandro Sigala's transcription of the ISO C++ 1996 draft standard.
 * 
 */

/*	$Id: parser.y,v 1.3 1997/11/19 15:13:16 sandro Exp $	*/

/*
 * Copyright (c) 1997 Sandro Sigala <ssigala@globalnet.it>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * ISO C++ parser.
 *
 * Based on the ISO C++ draft standard of December '96.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "nonterm.h"
#include "tree.h"
#include "token.h"
//#define YYDEBUG 1


extern int line_num;
extern char *file_name;
int yydebug = 0;


int yylex();
void yyerror(char *s);
struct tree *tree_node(int rule, int k, ...);


%}
%union {
  struct tree* treenode;
}

/* nonterms */
%type < treenode > identifier
%type < treenode > direct_declarator parameter_declaration_clause
%type < treenode > parameter_declaration_list parameter_declaration
%type < treenode > decl_specifier_seq declarator decl_specifier
%type < treenode > type_specifier simple_type_specifier
%type < treenode > ptr_operator qualified_id
%type < treenode > constant_expression_opt class_name constant_expression conditional_expression  
%type < treenode > literal integer_literal character_literal floating_literal string_literal boolean_literal 
%type < treenode > translation_unit primary_expression id_expression unqualified_id nested_name_specifier 
%type < treenode > postfix_expression expression_list unary_expression unary_operator new_expression new_placement 
%type < treenode > new_type_id new_declarator direct_new_declarator new_initializer delete_expression cast_expression 
%type < treenode > pm_expression multiplicative_expression additive_expression shift_expression relational_expression 
%type < treenode > equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression 
%type < treenode > logical_or_expression assignment_expression assignment_operator expression 
%type < treenode > statement labeled_statement expression_statement compound_statement statement_seq 
%type < treenode > selection_statement condition iteration_statement for_init_statement jump_statement declaration_statement 
%type < treenode > declaration_seq declaration block_declaration simple_declaration 
%type < treenode > type_name
%type < treenode > elaborated_type_specifier
%type < treenode > using_directive 
%type < treenode > init_declarator_list init_declarator cv_qualifier_seq cv_qualifier declarator_id type_id
%type < treenode > type_specifier_seq abstract_declarator direct_abstract_declarator 
%type < treenode > function_definition function_body initializer 
%type < treenode > initializer_clause initializer_list class_specifier class_head class_key member_specification 
%type < treenode > member_declaration member_declarator_list member_declarator pure_specifier 
%type < treenode > base_clause base_specifier_list base_specifier access_specifier  
%type < treenode > ctor_initializer mem_initializer_list mem_initializer mem_initializer_id
%type < treenode > constant_initializer
%type < treenode > declaration_seq_opt 
%type < treenode > expression_list_opt COLONCOLON_opt new_placement_opt new_initializer_opt new_declarator_opt 
%type < treenode > expression_opt statement_seq_opt condition_opt initializer_opt 
%type < treenode > abstract_declarator_opt type_specifier_seq_opt direct_abstract_declarator_opt 
%type < treenode > ctor_initializer_opt COMMA_opt member_specification_opt SEMICOLON_opt

/* tokens */
%token < treenode > IDENTIFIER INTEGER FLOATING CHARACTER STRING
%token < treenode > CLASS_NAME
%token < treenode > AND ASN BANG COLON CM DIV DOT ER GT LB LC LP LT
%token < treenode > MINUS MUL MOD NOT OR PLUS QUEST RB RC RP SM
%token < treenode > COLONCOLON ADDEQ SUBEQ MULEQ DIVEQ MODEQ
%token < treenode > SL SR SREQ SLEQ EQ NOTEQ LTEQ GTEQ ANDAND OROR
%token < treenode > PLUSPLUS MINUSMINUS ARROW 
%token < treenode > BOOL BREAK CASE CHAR CLASS CONST
%token < treenode > DEFAULT DELETE DO DOUBLE ELSE
%token < treenode > FALSE FLOAT FOR IF INT LONG NEW
%token < treenode > PRIVATE PUBLIC RETURN
%token < treenode > SHORT SWITCH 
%token < treenode > TRUE TYPENAME UNSIGNED 
%token < treenode > VOID WHILE USING NAMESPACE STD

/* Precedence */
%left ELSE
%left CM
%right ASN ADDEQ SUBEQ MULEQ DIVEQ SLEQ SREQ
%left OROR
%left ANDAND
%left OR
%left ER
%left AND
%left EQ NOTEQ
%left GT GTEQ LT LTEQ
%left SL SR
%left PLUS MINUS
%left MUL DIV MOD
%left BANG NOT PLUSPLUS MINUSMINUS

%start translation_unit

%%

/*----------------------------------------------------------------------
 * Context-dependent identifiers.
 *----------------------------------------------------------------------*/

class_name:
        /* identifier */
	CLASS_NAME {  $$ = tree_node(class_name, 1, $1); }
	;

/*----------------------------------------------------------------------
 * Lexical elements.
 *----------------------------------------------------------------------*/

identifier:
        IDENTIFIER {  $$ = tree_node(identifier, 1, $1); }
	;

literal:
        integer_literal     {  $$ = tree_node(literal, 1, $1); }
	| character_literal {  $$ = tree_node(literal, 1, $1); }
	| floating_literal  {  $$ = tree_node(literal, 1, $1); }
	| string_literal    {  $$ = tree_node(literal, 1, $1); }
	| boolean_literal   {  $$ = tree_node(literal, 1, $1); }
	;

integer_literal:
        INTEGER {  $$ = tree_node(integer_literal, 1, $1); }
	;

character_literal:
	CHARACTER {  $$ = tree_node(character_literal, 1, $1); }
	;

floating_literal:
	FLOATING {  $$ = tree_node(floating_literal, 1, $1); }
	;

string_literal:
	STRING {  $$ = tree_node(string_literal, 1, $1); }
	;

boolean_literal:
	TRUE    {  $$ = tree_node(boolean_literal, 1, $1); }
	| FALSE {  $$ = tree_node(boolean_literal, 1, $1); }
	;

/*----------------------------------------------------------------------
 * Translation unit.
 *----------------------------------------------------------------------*/

translation_unit:
        declaration_seq_opt {  root = tree_node(translation_unit, 1, $1); $$ = root; }
	;

/*----------------------------------------------------------------------
 * Expressions.
 *----------------------------------------------------------------------*/

primary_expression:
	literal 		   {  $$ = tree_node(primary_expression, 1, $1); }
	| LP expression RP {  $$ = tree_node(primary_expression, 3, $1, $2, $3); }
	| id_expression    {  $$ = tree_node(primary_expression, 1, $1); }
	;

id_expression:
	unqualified_id {   $$ = tree_node(id_expression, 1, $1); }
	| qualified_id {   $$ = tree_node(id_expression, 1, $1); }
	;

unqualified_id:
	    identifier 		 { $$ = tree_node(unqualified_id, 1, $1); }
        | NOT class_name 	 { yyerror("C++ destructors not supported"); $$ = NULL; }
	;

qualified_id:
	class_name id_expression { $$ = tree_node(qualified_id, 2, $1, $2); }
	;

nested_name_specifier:
	class_name COLONCOLON nested_name_specifier 	  { $$ = tree_node(nested_name_specifier, 3, $1, $2, $3); }
	| class_name COLONCOLON 						  { $$ = tree_node(nested_name_specifier, 2, $1, $2); }
	;

postfix_expression:
	primary_expression 						{  $$ = tree_node(postfix_expression, 1, $1); }
	| postfix_expression LB expression RB 				{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| postfix_expression LP expression_list_opt RP 			{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| DOUBLE LP expression_list_opt RP 				{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| INT LP expression_list_opt RP 				{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| CHAR LP expression_list_opt RP 				{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| BOOL LP expression_list_opt RP 				{  $$ = tree_node(postfix_expression, 4, $1, $2, $3, $4); }
	| postfix_expression DOT id_expression 				{  $$ = tree_node(postfix_expression, 3, $1, $2, $3); }
	| postfix_expression ARROW id_expression 			{  $$ = tree_node(postfix_expression, 3, $1, $2, $3); }
	| postfix_expression PLUSPLUS 					{  $$ = tree_node(postfix_expression, 2, $1, $2); }
	| postfix_expression MINUSMINUS 				{  $$ = tree_node(postfix_expression, 2, $1, $2); }
	;

expression_list:
	assignment_expression {   $$ = tree_node(expression_list, 1, $1); }
	| expression_list CM assignment_expression {  $$ = tree_node(expression_list, 3, $1, $2, $3); }
	;

unary_expression:
	postfix_expression {   $$ = tree_node(unary_expression, 1, $1); }
	| PLUSPLUS cast_expression {  $$ = tree_node(unary_expression, 2, $1, $2); }
	| MINUSMINUS cast_expression {  $$ = tree_node(unary_expression, 2, $1, $2); }
	| MUL cast_expression {  $$ = tree_node(unary_expression, 2, $1, $2); }
	| AND cast_expression {  $$ = tree_node(unary_expression, 2, $1, $2); }
	| unary_operator cast_expression {  $$ = tree_node(unary_expression, 2, $1, $2); }
	| new_expression {   $$ = tree_node(unary_expression, 1, $1); }
	| delete_expression {   $$ = tree_node(unary_expression, 1, $1); }
	;

unary_operator:
	  PLUS {   $$ = tree_node(unary_operator, 1, $1); }
	| MINUS {   $$ = tree_node(unary_operator, 1, $1); }
	| BANG {   $$ = tree_node(unary_operator, 1, $1); }
	| NOT {   $$ = tree_node(unary_operator, 1, $1); }
	;

new_expression:
	  NEW new_placement_opt new_type_id new_initializer_opt {  $$ = tree_node(new_expression, 4, $1, $2, $3, $4); }
	| COLONCOLON NEW new_placement_opt new_type_id new_initializer_opt {   $$ = tree_node(new_expression, 5, $1, $2, $3, $4, $5); }
	| NEW new_placement_opt LP type_id RP new_initializer_opt {  $$ = tree_node(new_expression, 6, $1, $2, $3, $4, $5, $6); }
	| COLONCOLON NEW new_placement_opt LP type_id RP new_initializer_opt {  $$ = tree_node(new_expression, 7, $1, $2, $3, $4, $5, $6, $7); }
	;

new_placement:
	LP expression_list RP {  $$ = tree_node(new_placement, 3, $1, $2, $3); }
	;

new_type_id:
	type_specifier_seq new_declarator_opt {  $$ = tree_node(new_type_id, 2, $1, $2); }
	;

new_declarator:
	ptr_operator new_declarator_opt {  $$ = tree_node(new_declarator, 2, $1, $2); }
	| direct_new_declarator {   $$ = tree_node(new_declarator, 1, $1); }
	;

direct_new_declarator:
	LB expression RB {  $$ = tree_node(direct_new_declarator, 3, $1, $2, $3); }
        | direct_new_declarator LB constant_expression RB { $$ = tree_node(direct_new_declarator, 4, $1, $2, $3, $4); }
	;

new_initializer:
	LP expression_list_opt RP {  $$ = tree_node(new_initializer, 3, $1, $2, $3); }
	;

delete_expression:
	DELETE cast_expression {  $$ = tree_node(delete_expression, 2, $1, $2); }
	| COLONCOLON DELETE cast_expression {  $$ = tree_node(delete_expression, 3, $1, $2, $3); }
	;

cast_expression:
	unary_expression {   $$ = tree_node(cast_expression, 1, $1); }
	| LP type_id RP cast_expression {  $$ = tree_node(cast_expression, 4, $1, $2, $3, $4); }
	;

pm_expression:
	cast_expression {   $$ = tree_node(pm_expression, 1, $1); }
	;

multiplicative_expression:
	pm_expression {   $$ = tree_node(multiplicative_expression, 1, $1); }
	| multiplicative_expression MUL pm_expression {  $$ = tree_node(multiplicative_expression, 3, $1, $2, $3); }
	| multiplicative_expression DIV pm_expression {  $$ = tree_node(multiplicative_expression, 3, $1, $2, $3); }
	| multiplicative_expression MOD pm_expression {  $$ = tree_node(multiplicative_expression, 3, $1, $2, $3); }
	;

additive_expression:
	multiplicative_expression {   $$ = tree_node(additive_expression, 1, $1); }
	| additive_expression PLUS multiplicative_expression {  $$ = tree_node(additive_expression, 3, $1, $2, $3); }
	| additive_expression MINUS multiplicative_expression {  $$ = tree_node(additive_expression, 3, $1, $2, $3); }
	;

shift_expression:
	additive_expression {   $$ = tree_node(shift_expression, 1, $1); }
	| shift_expression SL additive_expression {  $$ = tree_node(shift_expression, 3, $1, $2, $3); }
	| shift_expression SR additive_expression {  $$ = tree_node(shift_expression, 3, $1, $2, $3); }
	;

relational_expression:
	shift_expression {   $$ = tree_node(relational_expression, 1, $1); }
	| relational_expression LT shift_expression {  $$ = tree_node(relational_expression, 3, $1, $2, $3); }
	| relational_expression GT shift_expression {  $$ = tree_node(relational_expression, 3, $1, $2, $3); }
	| relational_expression LTEQ shift_expression {  $$ = tree_node(relational_expression, 3, $1, $2, $3); }
	| relational_expression GTEQ shift_expression {  $$ = tree_node(relational_expression, 3, $1, $2, $3); }
	;

equality_expression:
	relational_expression {   $$ = tree_node(equality_expression, 1, $1); }
	| equality_expression EQ relational_expression {  $$ = tree_node(equality_expression, 3, $1, $2, $3); }
	| equality_expression NOTEQ relational_expression {  $$ = tree_node(equality_expression, 3, $1, $2, $3); }
	;

and_expression:
	equality_expression {   $$ = tree_node(and_expression, 1, $1); }
	| and_expression AND equality_expression {  $$ = tree_node(and_expression, 3, $1, $2, $3); }
	;

exclusive_or_expression:
	and_expression {   $$ = tree_node(exclusive_or_expression, 1, $1); }
	| exclusive_or_expression ER and_expression {  $$ = tree_node(exclusive_or_expression, 3, $1, $2, $3); }
	;

inclusive_or_expression:
	exclusive_or_expression {   $$ = tree_node(inclusive_or_expression, 1, $1); }
	| inclusive_or_expression OR exclusive_or_expression {  $$ = tree_node(inclusive_or_expression, 3, $1, $2, $3); }
	;

logical_and_expression:
	inclusive_or_expression {   $$ = tree_node(logical_and_expression, 1, $1); }
	| logical_and_expression ANDAND inclusive_or_expression {  $$ = tree_node(logical_and_expression, 3, $1, $2, $3); }
	;

logical_or_expression:
	logical_and_expression {   $$ = tree_node(logical_or_expression, 1, $1); }
	| logical_or_expression OROR logical_and_expression {  $$ = tree_node(logical_or_expression, 3, $1, $2, $3); }
	;


conditional_expression:
	logical_or_expression {   $$ = tree_node(conditional_expression, 1, $1); }
	| logical_or_expression QUEST expression COLON assignment_expression {  $$ = tree_node(conditional_expression, 5, $1, $2, $3, $4, $5); }
	;


assignment_expression:
    conditional_expression {   $$ = tree_node(assignment_expression, 1, $1); }
	| logical_or_expression assignment_operator assignment_expression {  $$ = tree_node(assignment_expression, 3, $1, $2, $3); }
	;

assignment_operator:
        ASN     {   $$ = tree_node(assignment_operator, 1, $1); }
	| MULEQ {   $$ = tree_node(assignment_operator, 1, $1); }
	| DIVEQ {   $$ = tree_node(assignment_operator, 1, $1); }
	| MODEQ {   $$ = tree_node(assignment_operator, 1, $1); }
	| ADDEQ {   $$ = tree_node(assignment_operator, 1, $1); }
	| SUBEQ {   $$ = tree_node(assignment_operator, 1, $1); }
	| SREQ  {   $$ = tree_node(assignment_operator, 1, $1); }
	| SLEQ  {   $$ = tree_node(assignment_operator, 1, $1); }
	;

expression:
	assignment_expression { $$ = tree_node(expression, 1, $1); }
	| expression CM assignment_expression { $$ = tree_node(expression, 3, $1, $2, $3); }
	;


constant_expression:
	conditional_expression {  $$ = tree_node(constant_expression, 1, $1); }
	;


/*----------------------------------------------------------------------
 * Statements.
 *----------------------------------------------------------------------*/

statement:
	labeled_statement       {   $$ = tree_node(statement, 1, $1); }
	| expression_statement  {   $$ = tree_node(statement, 1, $1); }
	| compound_statement    {   $$ = tree_node(statement, 1, $1); }
	| selection_statement   {   $$ = tree_node(statement, 1, $1); }
	| iteration_statement   {   $$ = tree_node(statement, 1, $1); }
	| jump_statement        {   $$ = tree_node(statement, 1, $1); }
	| declaration_statement {   $$ = tree_node(statement, 1, $1); }
	;

labeled_statement:
	identifier COLON statement { $$ = tree_node(labeled_statement, 3, $1, $2, $3); }
	| DEFAULT COLON statement { $$ = tree_node(labeled_statement, 3, $1, $2, $3); }
	;

expression_statement:
	expression_opt SM { $$ = tree_node(expression_statement, 2, $1, $2); }
	;

compound_statement:
	LC statement_seq_opt RC { $$ = tree_node(compound_statement, 3, $1, $2, $3); }
	;

statement_seq:
	statement {   $$ = tree_node(statement_seq, 1, $1); }
	| statement_seq statement { $$ = tree_node(statement_seq, 2, $1, $2); }
	;

selection_statement:
	IF LP condition RP statement { $$ = tree_node(selection_statement, 5, $1, $2, $3, $4, $5); }
	| IF LP condition RP statement ELSE statement { $$ = tree_node(selection_statement, 7, $1, $2, $3, $4, $5, $6, $7); }
	| SWITCH LP condition RP statement {  $$ = tree_node(selection_statement, 5, $1, $2, $3, $4, $5); }
	;

condition:
	expression {   $$ = tree_node(condition, 1, $1); }
	| type_specifier_seq declarator ASN assignment_expression { $$ = tree_node(condition, 4, $1, $2, $3, $4); }
	;

iteration_statement:
	WHILE LP condition RP statement { $$ = tree_node(iteration_statement, 5, $1, $2, $3, $4, $5); }
	| DO statement WHILE LP expression RP SM { $$ = tree_node(iteration_statement, 7, $1, $2, $3, $4, $5, $6, $7); }
        | FOR LP for_init_statement condition_opt SM expression_opt RP statement { $$ = tree_node(iteration_statement, 8, $1, $2, $3, $4, $5, $6, $7, $8); }
	;

for_init_statement:
	expression_statement {   $$ = tree_node(for_init_statement, 1, $1); }
	| simple_declaration {   $$ = tree_node(for_init_statement, 1, $1); }
	;

jump_statement:
	BREAK SM {  $$ = tree_node(jump_statement, 2, $1, $2); }
	| RETURN expression_opt SM { $$ = tree_node(jump_statement, 3, $1, $2, $3); }
	;

declaration_statement:
	block_declaration {  $$ = tree_node(declaration_statement, 1, $1); }
	;

/*----------------------------------------------------------------------
 * Declarations.
 *----------------------------------------------------------------------*/

declaration_seq:
	declaration {   $$ = tree_node(declaration_seq, 1, $1); }
	| declaration_seq declaration { $$ = tree_node(declaration_seq, 2, $1, $2); }
	;

declaration:
	block_declaration {   $$ = tree_node(declaration, 1, $1); }
	| function_definition {   $$ = tree_node(declaration, 1, $1); }
	;

block_declaration:
	simple_declaration 			 {   $$ = tree_node(block_declaration, 1, $1); }
	| using_directive 			 {   $$ = tree_node(block_declaration, 1, $1); }
	;

simple_declaration:
	decl_specifier_seq init_declarator_list SM { $$ = tree_node(simple_declaration, 3, $1, $2, $3); }
	| decl_specifier_seq SM { $$ = tree_node(simple_declaration, 2, $1, $2); }
	;

decl_specifier:
	type_specifier        {   $$ = tree_node(decl_specifier, 1, $1); }
	;

decl_specifier_seq:
	  decl_specifier 		    {  $$ = tree_node(decl_specifier_seq, 1, $1); }
	| decl_specifier_seq decl_specifier {  $$ = tree_node(decl_specifier_seq, 2, $1, $2); }
	;

type_specifier:
	simple_type_specifier 		{   $$ = tree_node(type_specifier, 1, $1); }
	| class_specifier 	  	{   $$ = tree_node(type_specifier, 1, $1); }
	| elaborated_type_specifier     {   $$ = tree_node(type_specifier, 1, $1); }
    | cv_qualifier 			{  $$ = tree_node(type_specifier, 1, $1); }
	;

simple_type_specifier:
	  type_name {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| nested_name_specifier type_name {  $$ = tree_node(simple_type_specifier, 2, $1, $2); }
	| CHAR 	   {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| BOOL 	   {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| SHORT    {   $$ = tree_node(simple_type_specifier, 1, $1); }
    | INT 	   {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| LONG 	   {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| UNSIGNED {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| FLOAT    {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| DOUBLE   {   $$ = tree_node(simple_type_specifier, 1, $1); }
	| VOID     {   $$ = tree_node(simple_type_specifier, 1, $1); }
	;

type_name:
	class_name     {   $$ = tree_node(type_name, 1, $1); }
	;

elaborated_type_specifier:
	  class_key COLONCOLON nested_name_specifier identifier { $$ = tree_node(elaborated_type_specifier, 4, $1, $2, $3, $4); }
	| class_key COLONCOLON identifier { $$ = tree_node(elaborated_type_specifier, 3, $1, $2, $3); }
	| TYPENAME COLONCOLON_opt nested_name_specifier identifier { $$ = tree_node(elaborated_type_specifier, 4, $1, $2, $3, $4); }
	;

using_directive:
	USING NAMESPACE STD SM { $$ = tree_node(using_directive, 4, $1, $2, $3, $4); }
	;

/*----------------------------------------------------------------------
 * Declarators.
 *----------------------------------------------------------------------*/

init_declarator_list:
        init_declarator { $$ = tree_node(init_declarator_list, 1, $1); }
        | init_declarator_list CM init_declarator { $$ = tree_node(init_declarator_list, 3, $1, $2, $3); }
	;

init_declarator:
	declarator initializer_opt { $$ = tree_node(init_declarator, 2, $1, $2); }
	;

declarator:
	direct_declarator { $$ = tree_node(declarator, 1, $1); }                             
	| ptr_operator declarator { $$ = tree_node(declarator, 2, $1, $2); }                   
	;

direct_declarator:
    declarator_id {  $$ = tree_node(direct_declarator, 1, $1); }
	| direct_declarator LP parameter_declaration_clause RP cv_qualifier_seq { $$ = tree_node(direct_declarator, 5, $1, $2, $3, $4, $5); }
	| direct_declarator LP parameter_declaration_clause RP { $$ = tree_node(direct_declarator, 4, $1, $2, $3, $4); }
	| CLASS_NAME LP parameter_declaration_clause RP { $$ = tree_node(direct_declarator, 4, $1, $2, $3, $4); }
	| CLASS_NAME COLONCOLON declarator_id LP parameter_declaration_clause RP { $$ = tree_node(direct_declarator, 6, $1, $2, $3, $4, $5, $6); }
	| CLASS_NAME COLONCOLON CLASS_NAME LP parameter_declaration_clause RP { $$ = tree_node(direct_declarator, 6, $1, $2, $3, $4, $5, $6); }
    | direct_declarator LB constant_expression_opt RB { $$ = tree_node(direct_declarator, 4, $1, $2, $3, $4); }
	| LP declarator RP { $$ = tree_node(direct_declarator, 3, $1, $2, $3); }
	;

ptr_operator:
	MUL { $$ = tree_node(ptr_operator, 1, $1); }
	| MUL cv_qualifier_seq { $$ = tree_node(ptr_operator, 2, $1, $2); }
	| AND { $$ = tree_node(ptr_operator, 1, $1); }
	| nested_name_specifier MUL { $$ = tree_node(ptr_operator, 2, $1, $2); }
	| nested_name_specifier MUL cv_qualifier_seq { $$ = tree_node(ptr_operator, 3, $1, $2, $3); }
	| COLONCOLON nested_name_specifier MUL { $$ = tree_node(ptr_operator, 3, $1, $2, $3); }
	| COLONCOLON nested_name_specifier MUL cv_qualifier_seq { $$ = tree_node(ptr_operator, 4, $1, $2, $3, $4); }
	;

cv_qualifier_seq:
	cv_qualifier { $$ = tree_node(cv_qualifier_seq, 1, $1); }
	| cv_qualifier cv_qualifier_seq { $$ = tree_node(cv_qualifier_seq, 2, $1, $2); }
	;

cv_qualifier:
	CONST { $$ = tree_node(cv_qualifier, 1, $1); }
	;

declarator_id:
	  id_expression { $$ = tree_node(declarator_id, 1, $1); }
	| COLONCOLON id_expression { $$ = tree_node(declarator_id, 2, $1, $2); }
	| COLONCOLON nested_name_specifier type_name { $$ = tree_node(declarator_id, 3, $1, $2, $3); }
	| COLONCOLON type_name { $$ = tree_node(declarator_id, 2, $1, $2); }
	;

type_id:
	type_specifier_seq abstract_declarator_opt { $$ = tree_node(type_id, 2, $1, $2); }
	;

type_specifier_seq:
	type_specifier type_specifier_seq_opt { $$ = tree_node(type_specifier_seq, 2, $1, $2); }
	;

abstract_declarator:
	ptr_operator abstract_declarator_opt { $$ = tree_node(abstract_declarator, 2, $1, $2); }
	| direct_abstract_declarator { $$ = tree_node(abstract_declarator, 1, $1); }
	;

direct_abstract_declarator:
	direct_abstract_declarator_opt LP parameter_declaration_clause RP cv_qualifier_seq { $$ = tree_node(abstract_declarator, 5, $1, $2, $3, $4, $5); }
	| direct_abstract_declarator_opt LP parameter_declaration_clause RP { $$ = tree_node(abstract_declarator, 4, $1, $2, $3, $4); }
    | direct_abstract_declarator_opt LB constant_expression_opt RB { $$ = tree_node(abstract_declarator, 4, $1, $2, $3, $4); }
	| LP abstract_declarator RP { $$ = tree_node(abstract_declarator, 3, $1, $2, $3); }
	;

parameter_declaration_clause:
	parameter_declaration_list { $$ = tree_node(parameter_declaration_clause, 1, $1); }
	| { $$ = NULL; }
	;

parameter_declaration_list:
	parameter_declaration { $$ = tree_node(parameter_declaration_list, 1, $1); }
	| parameter_declaration_list CM parameter_declaration { $$ = tree_node(parameter_declaration_list, 3, $1, $2, $3); }
	;

parameter_declaration:
	decl_specifier_seq declarator { $$ = tree_node(parameter_declaration, 2, $1, $2); }
	| decl_specifier_seq declarator ASN assignment_expression { $$ = tree_node(parameter_declaration, 4, $1, $2, $3, $4); }
	| decl_specifier_seq abstract_declarator_opt { $$ = tree_node(parameter_declaration, 2, $1, $2); }
	| decl_specifier_seq abstract_declarator_opt ASN assignment_expression { $$ = tree_node(parameter_declaration, 4, $1, $2, $3, $4); }
	;

function_definition:
	  declarator ctor_initializer_opt function_body { $$ = tree_node(function_definition, 3, $1, $2, $3); }
	| decl_specifier_seq declarator ctor_initializer_opt function_body { $$ = tree_node(function_definition, 4, $1, $2, $3, $4); }
	;

function_body:
	compound_statement { $$ = tree_node(function_body, 1, $1); }
	;

initializer:
	ASN initializer_clause { $$ = tree_node(initializer, 2, $1, $2); }
	| LP expression_list RP { $$ = tree_node(initializer, 3, $1, $2, $3); }
	;

initializer_clause:
	assignment_expression { $$ = tree_node(initializer_clause, 1, $1); }
	| LC initializer_list COMMA_opt RC { $$ = tree_node(initializer_clause, 4, $1, $2, $3, $4); }
	| LC RC { $$ = tree_node(initializer_clause, 2, $1, $2); }
	;

initializer_list:
	initializer_clause { $$ = tree_node(initializer_list, 1, $1); }
	| initializer_list CM initializer_clause { $$ = tree_node(initializer_list, 3, $1, $2, $3); }
	;

/*----------------------------------------------------------------------
 * Classes.
 *----------------------------------------------------------------------*/

class_specifier:
	class_head LC member_specification_opt RC { $$ = tree_node(class_specifier, 4, $1, $2, $3, $4); }
	;

class_head:
        class_key identifier { typenametable_insert($2->kids[0]->leaf->text, CLASS_NAME); $$ = tree_node(class_head, 2, $1, $2); }
	| class_key identifier base_clause { $$ = tree_node(class_head, 3, $1, $2, $3); }
	| class_key nested_name_specifier identifier { $$ = tree_node(class_head, 3, $1, $2, $3); }
	| class_key nested_name_specifier identifier base_clause { $$ = tree_node(class_head, 4, $1, $2, $3, $4); }
	;

class_key:
	CLASS { $$ = tree_node(class_key, 1, $1); }
	;

member_specification:
	member_declaration member_specification_opt { $$ = tree_node(member_specification, 2, $1, $2); }
	| access_specifier COLON member_specification_opt { $$ = tree_node(member_specification, 3, $1, $2, $3); }
	;

member_declaration:
	  decl_specifier_seq member_declarator_list SM { $$ = tree_node(member_declaration, 3, $1, $2, $3); }
	| decl_specifier_seq SM { $$ = tree_node(member_declaration, 2, $1, $2); }
	| member_declarator_list SM { $$ = tree_node(member_declaration, 2, $1, $2); }
	| SM { $$ = tree_node(member_declaration, 1, $1); }
	| function_definition SEMICOLON_opt { $$ = tree_node(member_declaration, 2, $1, $2); }
	;

member_declarator_list:
	member_declarator
	| member_declarator_list CM member_declarator
	;

member_declarator:
	  declarator { $$ = tree_node(member_declarator, 1, $1); }
	| declarator pure_specifier { $$ = tree_node(member_declarator, 2, $1, $2); }
    | declarator constant_initializer { $$ = tree_node(member_declarator, 2, $1, $2); }
	;

/*
 * This rule need a hack for working around the ``= 0'' pure specifier.
 * 0 is returned as an ``INTEGER'' by the lexical analyzer but in this
 * context is different.
 */
pure_specifier:
	ASN '0'
	;


constant_initializer:
	ASN constant_expression { $$ = tree_node(constant_initializer, 2, $1, $2); }
	;


/*----------------------------------------------------------------------
 * Derived classes.
 *----------------------------------------------------------------------*/

base_clause:
	COLON base_specifier_list { $$ = tree_node(base_clause, 2, $1, $2); }
	;

base_specifier_list:
	base_specifier { $$ = tree_node(base_specifier_list, 1, $1); }
	| base_specifier_list CM base_specifier { $$ = tree_node(base_specifier_list, 3, $1, $2, $3); }
	;

base_specifier:
	  COLONCOLON nested_name_specifier class_name { $$ = tree_node(base_specifier, 3, $1, $2, $3); }
	| COLONCOLON class_name { $$ = tree_node(base_specifier, 2, $1, $2); }
	| nested_name_specifier class_name { $$ = tree_node(base_specifier, 2, $1, $2); }
	| class_name { $$ = tree_node(base_specifier, 1, $1); }
	;

access_specifier:
	PRIVATE { $$ = tree_node(access_specifier, 1, $1); }
	| PUBLIC { $$ = tree_node(access_specifier, 1, $1); }
	;

/*----------------------------------------------------------------------
 * Special member functions.
 *----------------------------------------------------------------------*/

ctor_initializer:
	COLON mem_initializer_list { $$ = tree_node(ctor_initializer, 2, $1, $2); }
	;

mem_initializer_list:
	mem_initializer { $$ = tree_node(mem_initializer_list, 1, $1); }
	| mem_initializer CM mem_initializer_list { $$ = tree_node(mem_initializer_list, 3, $1, $2, $3); }
	;

mem_initializer:
	mem_initializer_id LP expression_list_opt RP { $$ = tree_node(mem_initializer, 4, $1, $2, $3, $4); }
	;

mem_initializer_id:
	  COLONCOLON nested_name_specifier class_name { $$ = tree_node(mem_initializer_id, 3, $1, $2, $3); }
	| COLONCOLON class_name { $$ = tree_node(mem_initializer_id, 2, $1, $2); }
	| nested_name_specifier class_name { $$ = tree_node(mem_initializer_id, 2, $1, $2); }
	| class_name { $$ = tree_node(mem_initializer_id, 1, $1); }
	| identifier { $$ = tree_node(mem_initializer_id, 1, $1); }
	;

/*----------------------------------------------------------------------
 * Overloading.
 *----------------------------------------------------------------------*/

/* NONE */

/*----------------------------------------------------------------------
 * Templates.
 *----------------------------------------------------------------------*/

/* NONE */

/*----------------------------------------------------------------------
 * Exception handling.
 *----------------------------------------------------------------------*/

 /* NONE */

/*----------------------------------------------------------------------
 * Epsilon (optional) definitions.
 *----------------------------------------------------------------------*/

declaration_seq_opt:
    /* epsilon */ { $$ = NULL; }
	| declaration_seq { $$ = tree_node(declaration_seq_opt, 1, $1); }
	;

expression_list_opt:
	/* epsilon */ { $$ = NULL; }
	| expression_list { $$ = tree_node(expression_list_opt, 1, $1); }
	;

COLONCOLON_opt:
	/* epsilon */ { $$ = NULL; }
	| COLONCOLON { $$ = tree_node(COLONCOLON_opt, 1, $1); }
	;

new_placement_opt:
	/* epsilon */ { $$ = NULL; }
	| new_placement { $$ = tree_node(new_placement_opt, 1, $1); }
	;

new_initializer_opt:
	/* epsilon */ { $$ = NULL; }
	| new_initializer { $$ = tree_node(new_initializer_opt, 1, $1); }
	;

new_declarator_opt:
	/* epsilon */ { $$ = NULL; }
	| new_declarator { $$ = tree_node(new_declarator_opt, 1, $1); }
	;

expression_opt:
	/* epsilon */ { $$ = NULL; }
	| expression { $$ = tree_node(expression_opt, 1, $1); }
	;

statement_seq_opt:
	/* epsilon */ { $$ = NULL; }
	| statement_seq { $$ = tree_node(statement_seq_opt, 1, $1); }
	;

condition_opt:
	/* epsilon */ { $$ = NULL; }
	| condition { $$ = tree_node(condition_opt, 1, $1); }
	;

initializer_opt:
	/* epsilon */ { $$ = NULL; }
	| initializer { $$ = tree_node(initializer_opt, 1, $1); }
	;


constant_expression_opt:
        { $$ = NULL; }
	| constant_expression { $$ = tree_node(constant_expression_opt, 1, $1); }
	;


abstract_declarator_opt:
	/* epsilon */ { $$ = NULL; }
	| abstract_declarator { $$ = tree_node(abstract_declarator_opt, 1, $1); }
	;

type_specifier_seq_opt:
	/* epsilon */ { $$ = NULL; }
	| type_specifier_seq { $$ = tree_node(type_specifier_seq_opt, 1, $1); }
	;

direct_abstract_declarator_opt:
	/* epsilon */ { $$ = NULL; }
	| direct_abstract_declarator { $$ = tree_node(direct_abstract_declarator_opt, 1, $1); }
	;

ctor_initializer_opt:
	/* epsilon */ { $$ = NULL; }
	| ctor_initializer { $$ = tree_node(ctor_initializer_opt, 1, $1); }
	;

COMMA_opt:
	/* epsilon */ { $$ = NULL; }
	| CM { $$ = tree_node(COMMA_opt, 1, $1); }
	;

member_specification_opt:
	/* epsilon */ { $$ = NULL; }
	| member_specification { $$ = tree_node(member_specification_opt, 1, $1); }
	;

SEMICOLON_opt:
	/* epsilon */ { $$ = NULL; }
	| SM { $$ = tree_node(SEMICOLON_opt, 1, $1); }
	;

%%

void yyerror(char *s)
{
   fprintf(stderr, "%s: %d: %s\n", file_name, line_num, s);
   exit(2);
}


struct tree *tree_node(int rule, int k, ...)
{
  int i;
  va_list ap;
  struct tree *new_treenode = (struct tree*)malloc(sizeof(struct tree) + (k-1)*sizeof(struct tree *));
  new_treenode->prodrule = rule; //name of nonterm
  new_treenode->nkids = k; //number of kids nonterm has
  va_start(ap, k);
  for(i = 0; i < k; i = i + 1)
  {
    new_treenode->kids[i] = va_arg(ap, struct tree *);
  }
  va_end(ap);

  return new_treenode;
}
