#include "tree.h"
#include "token.h"
#include <stdio.h>
#include <stdlib.h>

int print_tree(struct tree *t, int depth)
{
	int i;
	if(t != NULL)
	{
	  if(t->prodrule > 0)
	    /* leaf */
	    printf("%*s \"%s\" (%d): %d\n", depth, " ", humanreadable(t), t->leaf->category, t->nkids);
	  else
	    /* nonterm */
	    printf("%*s %s: %d\n", depth, " ", humanreadable(t), t->nkids);

	  for(i = 0; i < t->nkids; i++)
	    print_tree(t->kids[i], depth+1);
	}
    return 0;
}

char *humanreadable(struct tree *t)
{
    if(t->prodrule < 0){
        return nonterm_lookup(t->prodrule);
    }
    return t->leaf->text;
}


int is_nonterminal(struct tree *t){
  if(t->prodrule < 0)
    return 0;
  else
    return 1;
}


char *nonterm_lookup(int rule)
{
  switch(rule)
  {
    case -1000: return "typedef_name";
    case -2000: return "namespace_name";
    case -3000: return "original_namespace_name";
    case -4000: return "class_name"; 
    case -5000: return "enum_name"; 
    case -6000: return "template_name"; 
    case -7000: return "identifier"; 
    case -8000: return "literal"; 
    case -9000: return "integer_literal"; 
    case -10000: return "character_literal"; 
    case -11000: return "floating_literal"; 
    case -12000: return "string_literal"; 
    case -13000: return "boolean_literal"; 
    case -14000: return "translation_unit"; 
    case -15000: return "primary_expression"; 
    case -16000: return "id_expression"; 
    case -17000: return "unqualified_id"; 
    case -18000: return "qualified_id"; 
    case -19000: return "nested_name_specifier"; 
    case -20000: return "postfix_expression"; 
    case -21000: return "expression_list"; 
    case -22000: return "unary_expression"; 
    case -23000: return "unary_operator"; 
    case -24000: return "new_expression"; 
    case -25000: return "new_placement"; 
    case -26000: return "new_type_id"; 
    case -27000: return "new_declarator"; 
    case -28000: return "direct_new_declarator"; 
    case -29000: return "new_initializer"; 
    case -30000: return "delete_expression"; 
    case -31000: return "cast_expression"; 
    case -32000: return "pm_expression"; 
    case -33000: return "multiplicative_expression";
    case -34000: return "additive_expression"; 
    case -35000: return "shift_expression"; 
    case -36000: return "relational_expression";
    case -37000: return "equality_expression"; 
    case -38000: return "and_expression"; 
    case -39000: return "exclusive_or_expression"; 
    case -40000: return "inclusive_or_expression"; 
    case -41000: return "logical_and_expression"; 
    case -42000: return "logical_or_expression"; 
    case -43000: return "conditional_expression"; 
    case -44000: return "assignment_expression"; 
    case -45000: return "assignment_operator"; 
    case -46000: return "expression"; 
    case -47000: return "constant_expression"; 
    case -48000: return "statement"; 
    case -49000: return "labeled_statement"; 
    case -50000: return "expression_statement";
    case -51000: return "compound_statement"; 
    case -52000: return "statement_seq"; 
    case -53000: return "selection_statement";
    case -54000: return "condition"; 
    case -55000: return "iteration_statement"; 
    case -56000: return "for_init_statement";
    case -57000: return "jump_statement"; 
    case -58000: return "declaration_statement"; 
    case -59000: return "declaration_seq"; 
    case -60000: return "declaration"; 
    case -61000: return "block_declaration"; 
    case -62000: return "simple_declaration"; 
    case -63000: return "decl_specifier"; 
    case -64000: return "decl_specifier_seq"; 
    case -65000: return "storage_class_specifier";
    case -66000: return "function_specifier"; 
    case -67000: return "type_specifier"; 
    case -68000: return "simple_type_specifier"; 
    case -69000: return "type_name"; 
    case -70000: return "elaborated_type_specifier"; 
    case -72000: return "enum_specifier"; 
    case -73000: return "enumerator_list"; 
    case -74000: return "enumerator_definition"; 
    case -75000: return "enumerator"; 
    case -78000: return "namespace_definition"; 
    case -79000: return "named_namespace_definition"; 
    case -80000: return "original_namespace_definition"; 
    case -81000: return "extension_namespace_definition";
    case -82000: return "unnamed_namespace_definition"; 
    case -83000: return "namespace_body"; 
    case -84000: return "namespace_alias"; 
    case -85000: return "namespace_alias_definition"; 
    case -86000: return "qualified_namespace_specifier"; 
    case -87000: return "using_declaration"; 
    case -88000: return "using_directive"; 
    case -89000: return "asm_definition"; 
    case -90000: return "linkage_specification"; 
    case -91000: return "init_declarator_list"; 
    case -92000: return "init_declarator"; 
    case -93000: return "declarator"; 
    case -94000: return "direct_declarator"; 
    case -95000: return "ptr_operator"; 
    case -96000: return "cv_qualifier_seq"; 
    case -97000: return "cv_qualifier"; 
    case -98000: return "declarator_id"; 
    case -99000: return "type_id"; 
    case -100000: return "type_specifier_seq"; 
    case -101000: return "abstract_declarator"; 
    case -102000: return "direct_abstract_declarator"; 
    case -103000: return "parameter_declaration_clause"; 
    case -104000: return "parameter_declaration_list"; 
    case -105000: return "parameter_declaration"; 
    case -106000: return "function_definition"; 
    case -107000: return "function_body"; 
    case -108000: return "initializer"; 
    case -109000: return "initializer_clause"; 
    case -110000: return "initializer_list"; 
    case -111000: return "class_specifier"; 
    case -112000: return "class_head"; 
    case -113000: return "class_key"; 
    case -114000: return "member_specification"; 
    case -115000: return "member_declaration"; 
    case -116000: return "member_declarator_list"; 
    case -117000: return "member_declarator"; 
    case -118000: return "pure_specifier"; 
    case -119000: return "constant_initializer"; 
    case -120000: return "base_clause"; 
    case -121000: return "base_specifier_list"; 
    case -122000: return "base_specifier"; 
    case -123000: return "access_specifier"; 
    case -124000: return "conversion_function_id"; 
    case -125000: return "conversion_type_id"; 
    case -126000: return "conversion_declarator"; 
    case -127000: return "ctor_initializer"; 
    case -128000: return "mem_initializer_list"; 
    case -129000: return "mem_initializer"; 
    case -130000: return "mem_initializer_id"; 
    case -131000: return "operator_function_id"; 
    case -132000: return "operator"; 
    case -133000: return "template_declaration"; 
    case -134000: return "template_parameter_list"; 
    case -135000: return "template_parameter"; 
    case -136000: return "type_parameter"; 
    case -137000: return "template_id"; 
    case -138000: return "template_argument_list"; 
    case -139000: return "template_argument"; 
    case -140000: return "explicit_instantiation"; 
    case -141000: return "explicit_specialization"; 
    case -142000: return "try_block"; 
    case -143000: return "function_try_block"; 
    case -144000: return "handler_seq"; 
    case -145000: return "handler"; 
    case -146000: return "exception_declaration"; 
    case -147000: return "throw_expression"; 
    case -148000: return "exception_specification"; 
    case -149000: return "type_id_list"; 
    case -150000: return "declaration_seq_opt"; 
    case -151000: return "nested_name_specifier_opt"; 
    case -152000: return "expression_list_opt"; 
    case -153000: return "COLONCOLON_opt"; 
    case -154000: return "new_placement_opt"; 
    case -155000: return "new_initializer_opt"; 
    case -156000: return "new_declarator_opt"; 
    case -157000: return "expression_opt"; 
    case -158000: return "statement_seq_opt"; 
    case -159000: return "condition_opt"; 
    case -160000: return "enumerator_list_opt"; 
    case -161000: return "initializer_opt"; 
    case -162000: return "constant_expression_opt"; 
    case -163000: return "abstract_declarator_opt"; 
    case -164000: return "type_specifier_seq_opt"; 
    case -165000: return "direct_abstract_declarator_opt"; 
    case -166000: return "ctor_initializer_opt"; 
    case -167000: return "COMMA_opt"; 
    case -168000: return "member_specification_opt"; 
    case -169000: return "SEMICOLON_opt"; 
    case -170000: return "conversion_declarator_opt"; 
    case -171000: return "EXPORT_opt"; 
    case -172000: return "handler_seq_opt"; 
    case -173000: return "assignment_expression_opt"; 
    case -174000: return "type_id_list_opt"; 
    default:
        return "error: nonterm not found";
  }
}
