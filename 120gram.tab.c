/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 45 "120gram.y" /* yacc.c:339  */

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


void yyerror(char *s);
struct tree *tree_node(int rule, int k, ...);



#line 88 "120gram.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "120gram.tab.h".  */
#ifndef YY_YY_120GRAM_TAB_H_INCLUDED
# define YY_YY_120GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    FLOATING = 260,
    CHARACTER = 261,
    STRING = 262,
    CLASS_NAME = 263,
    AND = 264,
    ASN = 265,
    BANG = 266,
    COLON = 267,
    CM = 268,
    DIV = 269,
    DOT = 270,
    ER = 271,
    GT = 272,
    LB = 273,
    LC = 274,
    LP = 275,
    LT = 276,
    MINUS = 277,
    MUL = 278,
    MOD = 279,
    NOT = 280,
    OR = 281,
    PLUS = 282,
    QUEST = 283,
    RB = 284,
    RC = 285,
    RP = 286,
    SM = 287,
    COLONCOLON = 288,
    ADDEQ = 289,
    SUBEQ = 290,
    MULEQ = 291,
    DIVEQ = 292,
    MODEQ = 293,
    SL = 294,
    SR = 295,
    SREQ = 296,
    SLEQ = 297,
    EQ = 298,
    NOTEQ = 299,
    LTEQ = 300,
    GTEQ = 301,
    ANDAND = 302,
    OROR = 303,
    PLUSPLUS = 304,
    MINUSMINUS = 305,
    ARROW = 306,
    STD = 307,
    BOOL = 308,
    BREAK = 309,
    CASE = 310,
    CHAR = 311,
    CLASS = 312,
    CONST = 313,
    DEFAULT = 314,
    DELETE = 315,
    DO = 316,
    DOUBLE = 317,
    ELSE = 318,
    FALSE = 319,
    FLOAT = 320,
    FOR = 321,
    IF = 322,
    INT = 323,
    LONG = 324,
    NAMESPACE = 325,
    NEW = 326,
    PRIVATE = 327,
    PUBLIC = 328,
    RETURN = 329,
    SHORT = 330,
    SWITCH = 331,
    TRUE = 332,
    TYPENAME = 333,
    UNSIGNED = 334,
    USING = 335,
    VOID = 336,
    WHILE = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "120gram.y" /* yacc.c:355  */

  struct tree* treenode;

#line 215 "120gram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "120gram.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  294
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  497

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   155,   159,   160,   161,   162,   163,   167,
     171,   175,   179,   183,   184,   192,   200,   201,   202,   206,
     207,   211,   212,   216,   220,   221,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   239,   240,   244,
     245,   246,   247,   248,   249,   250,   251,   255,   256,   257,
     258,   262,   263,   264,   265,   269,   273,   277,   278,   282,
     283,   287,   291,   292,   296,   297,   301,   305,   306,   307,
     308,   312,   313,   314,   318,   319,   320,   324,   325,   326,
     327,   328,   332,   333,   334,   338,   339,   343,   344,   348,
     349,   353,   354,   358,   359,   364,   365,   370,   371,   375,
     376,   377,   378,   379,   380,   381,   382,   386,   387,   392,
     401,   402,   403,   404,   405,   406,   407,   411,   412,   416,
     420,   424,   425,   429,   430,   431,   435,   436,   440,   441,
     442,   446,   447,   451,   452,   456,   464,   465,   469,   470,
     474,   475,   479,   480,   484,   488,   489,   493,   494,   495,
     496,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   514,   518,   519,   520,   524,   532,   533,   537,
     541,   542,   546,   547,   548,   549,   550,   551,   552,   553,
     557,   558,   559,   560,   561,   562,   563,   567,   568,   572,
     576,   577,   578,   579,   583,   587,   591,   592,   596,   597,
     598,   599,   603,   604,   608,   609,   613,   614,   615,   616,
     620,   621,   625,   629,   630,   634,   635,   636,   640,   641,
     649,   653,   654,   655,   656,   660,   664,   665,   669,   670,
     671,   672,   673,   674,   678,   679,   683,   684,   685,   694,
     699,   708,   712,   713,   717,   718,   719,   720,   724,   725,
     733,   737,   738,   742,   746,   747,   748,   749,   750,   776,
     777,   781,   782,   786,   787,   791,   792,   796,   797,   801,
     802,   806,   807,   811,   812,   816,   817,   821,   822,   827,
     828,   833,   834,   838,   839,   843,   844,   848,   849,   853,
     854,   858,   859,   863,   864
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "FLOATING",
  "CHARACTER", "STRING", "CLASS_NAME", "AND", "ASN", "BANG", "COLON", "CM",
  "DIV", "DOT", "ER", "GT", "LB", "LC", "LP", "LT", "MINUS", "MUL", "MOD",
  "NOT", "OR", "PLUS", "QUEST", "RB", "RC", "RP", "SM", "COLONCOLON",
  "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "MODEQ", "SL", "SR", "SREQ", "SLEQ",
  "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "PLUSPLUS",
  "MINUSMINUS", "ARROW", "STD", "BOOL", "BREAK", "CASE", "CHAR", "CLASS",
  "CONST", "DEFAULT", "DELETE", "DO", "DOUBLE", "ELSE", "FALSE", "FLOAT",
  "FOR", "IF", "INT", "LONG", "NAMESPACE", "NEW", "PRIVATE", "PUBLIC",
  "RETURN", "SHORT", "SWITCH", "TRUE", "TYPENAME", "UNSIGNED", "USING",
  "VOID", "WHILE", "'0'", "$accept", "class_name", "identifier", "literal",
  "integer_literal", "character_literal", "floating_literal",
  "string_literal", "boolean_literal", "translation_unit",
  "primary_expression", "id_expression", "unqualified_id", "qualified_id",
  "nested_name_specifier", "postfix_expression", "expression_list",
  "unary_expression", "unary_operator", "new_expression", "new_placement",
  "new_type_id", "new_declarator", "direct_new_declarator",
  "new_initializer", "delete_expression", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "type_specifier", "simple_type_specifier", "type_name",
  "elaborated_type_specifier", "using_directive", "init_declarator_list",
  "init_declarator", "declarator", "direct_declarator", "ptr_operator",
  "cv_qualifier_seq", "cv_qualifier", "declarator_id", "type_id",
  "type_specifier_seq", "abstract_declarator",
  "direct_abstract_declarator", "parameter_declaration_clause",
  "parameter_declaration_list", "parameter_declaration",
  "function_definition", "function_body", "initializer",
  "initializer_clause", "initializer_list", "class_specifier",
  "class_head", "class_key", "member_specification", "member_declaration",
  "member_declarator_list", "member_declarator", "pure_specifier",
  "constant_initializer", "base_clause", "base_specifier_list",
  "base_specifier", "access_specifier", "ctor_initializer",
  "mem_initializer_list", "mem_initializer", "mem_initializer_id",
  "declaration_seq_opt", "expression_list_opt", "COLONCOLON_opt",
  "new_placement_opt", "new_initializer_opt", "new_declarator_opt",
  "expression_opt", "statement_seq_opt", "condition_opt",
  "initializer_opt", "constant_expression_opt", "abstract_declarator_opt",
  "type_specifier_seq_opt", "direct_abstract_declarator_opt",
  "ctor_initializer_opt", "COMMA_opt", "member_specification_opt",
  "SEMICOLON_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    48
};
# endif

#define YYPACT_NINF -410

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-410)))

#define YYTABLE_NINF -288

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1010,  -410,   185,  -410,   134,   -36,    59,   163,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,    38,  -410,    27,
    -410,   102,  -410,   141,  -410,  -410,  -410,   105,  1010,  -410,
    -410,  -410,  -410,  1051,  -410,  -410,  -410,  -410,  -410,   157,
     100,   134,  -410,  -410,  -410,  -410,   205,    35,  -410,  1348,
      98,   102,   256,   206,  -410,   -36,  -410,  -410,  -410,   203,
    -410,  -410,    59,   208,    59,  -410,   -36,  -410,  -410,  -410,
    -410,  -410,  -410,   145,  -410,   315,    45,  -410,   244,  1305,
    1348,  -410,   983,    58,   254,   280,    59,  1078,   242,   273,
    -410,   282,   163,   153,   288,  -410,  -410,   -36,  -410,   280,
     284,  -410,  -410,   134,  -410,  1230,  1305,  -410,  -410,   244,
      59,   102,  -410,    59,  -410,   308,   306,   679,  -410,  -410,
    -410,  -410,  -410,  -410,  1305,  -410,   919,  -410,  1305,    59,
    -410,    61,  1305,  1305,   309,   324,  1305,   327,  -410,   341,
     343,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
     132,  -410,  1305,  -410,  -410,  -410,  -410,   150,   222,   237,
     251,   270,   355,   356,   348,   328,    26,  -410,  -410,   350,
     345,  -410,  -410,  -410,   357,  1119,   384,   358,  -410,   983,
     188,  -410,   370,   363,  -410,   280,    24,  -410,   254,   389,
     385,   940,  -410,   152,   394,   192,  -410,  1348,  1348,   163,
    1348,  -410,  -410,  -410,  -410,    49,  1198,   482,  -410,  -410,
    -410,   225,  -410,  -410,   102,    59,  -410,    45,  1305,   309,
     379,   324,   401,   839,   327,   400,   406,   341,  1305,   413,
     418,   409,   163,  -410,   426,  -410,  -410,  -410,  -410,   759,
    -410,  -410,  -410,  -410,  -410,  1051,   410,   414,  -410,   262,
    1348,   415,   452,  -410,  1305,   343,  -410,  -410,  1305,  1305,
    -410,  1305,  1305,  1305,  -410,   574,   163,  1305,  1305,  -410,
    -410,   163,  -410,  1305,  1305,  1305,  1305,  1305,  1305,  1305,
    1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,
    1305,  1305,  -410,   -36,  -410,  -410,   384,   190,   552,  -410,
    -410,  -410,  -410,  -410,   134,  -410,   983,  -410,  -410,    59,
     102,    59,   432,  -410,  -410,   417,  1305,  -410,  1305,  1305,
    1348,  -410,   419,   422,  -410,  -410,   443,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  1305,  1305,  -410,  -410,  -410,
     444,   427,  -410,   839,   377,   919,   919,   430,   919,   919,
     839,  1305,  -410,  -410,  -410,  -410,  -410,  -410,  1305,   347,
      59,   441,   452,  -410,  -410,  1321,   437,   438,   447,   451,
     267,  1348,   463,   106,  -410,    43,   453,  -410,  -410,  -410,
    -410,   150,   150,   222,   222,   237,   237,   237,   237,   251,
     251,   270,   355,   356,   348,   287,   328,  -410,  -410,  -410,
    -410,   477,  -410,  -410,   102,    59,  -410,    24,  -410,  -410,
    -410,   459,   460,  -410,  -410,  1230,   465,  -410,  -410,  -410,
    -410,   470,  -410,   919,  -410,   426,   462,   134,  -410,   467,
     468,  -410,  -410,  -410,   473,  1348,   463,  -410,  -410,  -410,
    -410,  -410,   469,  1305,  -410,  -410,  1305,  -410,   483,   106,
    -410,  -410,  -410,  1305,  -410,  -410,  -410,   -36,  -410,  -410,
    1305,  -410,   471,   839,   494,   839,   839,   474,  -410,   463,
     475,    82,  1305,  -410,  -410,  -410,   279,  1305,   446,  1305,
    -410,  -410,   463,  -410,  -410,  -410,   478,   480,   484,   839,
    -410,  -410,  -410,  -410,   839,  -410,  -410
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     259,     3,     2,   182,     0,   180,     0,     0,   154,   153,
     225,   189,   160,   159,   156,   157,   155,   263,   158,     0,
     161,   162,    21,     0,   190,    19,    20,     0,   260,   136,
     138,   140,   145,     0,   144,   147,   151,   149,   141,   287,
     170,     0,   150,   172,   139,   148,     0,     0,    15,   203,
       0,     0,     0,     0,   181,   187,     2,    22,   191,     0,
     193,   264,     0,     0,    25,     1,   183,   162,    23,   152,
     137,   143,   146,     0,   167,   277,     0,   288,     0,   279,
     203,   171,   291,     0,   221,     0,     0,   281,     0,   202,
     204,     2,     0,     0,     0,   179,   188,   185,   192,     0,
       0,    24,   184,     0,   142,     0,     0,   278,   169,     0,
       0,   257,   258,     0,   250,   251,     0,   271,   212,   210,
       9,    11,    10,    12,     0,    49,     0,    48,     0,    50,
      47,     0,     0,     0,     0,     0,     0,     0,    14,     0,
     265,    13,    16,     4,     5,     6,     7,     8,    26,    18,
      39,    64,     0,    45,    46,    66,    67,    71,    74,    77,
      82,    85,    87,    89,    91,    93,    95,   109,   280,     0,
       0,   231,   248,   249,    20,     0,   236,   293,   292,   291,
       0,   234,     0,     0,   164,     0,     0,   222,   223,   285,
     206,   281,   282,   197,   208,     0,   175,     0,   203,     0,
     203,   186,   165,   166,   168,   277,     0,    95,    97,   215,
     213,     0,    37,   211,   255,     0,   256,     0,   261,   154,
       0,   153,     0,   271,   160,     0,     0,   156,   271,     0,
       0,    21,     0,   107,   272,   121,   110,   111,   112,   271,
     113,   114,   115,   116,   135,     0,     0,     0,    43,     0,
     283,     0,   281,    42,     0,   265,    40,    41,   261,   261,
      62,   261,   261,     0,   266,     0,     0,     0,   261,    35,
      36,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,   174,   233,   229,   236,     0,     0,   237,
     238,   294,   232,   226,     0,   230,   291,   220,   163,     0,
     247,     0,   241,   242,   224,     0,     0,   196,     0,   279,
     203,   205,     0,     0,   217,   218,   289,    99,   103,   104,
     100,   101,   102,   105,   106,     0,     0,   214,   254,   252,
     262,     0,   133,   271,     0,   271,     0,     0,     0,     0,
     271,     0,   122,   119,   120,    17,   284,   195,     0,   285,
       0,     0,   281,   194,    63,     0,     0,     0,     0,     0,
       0,     0,   267,   269,    33,     0,     0,    34,    69,    68,
      70,    73,    72,    75,    76,    79,    78,    80,    81,    83,
      84,    86,    88,    90,    92,     0,    94,   173,   228,   239,
     240,   236,   235,   227,   245,     0,   246,     0,   201,   207,
     209,     0,     0,   177,   176,   290,     0,    98,    38,   253,
     118,     0,   131,   275,   132,   126,     0,     0,   134,     0,
       0,   117,   108,    65,     0,     0,   267,    32,    31,    29,
      30,    55,     0,   261,   268,    51,     0,   270,    58,   269,
      56,    27,    28,     0,   244,   243,   200,   199,   219,   216,
       0,   276,     0,   271,     0,   271,   271,     0,    52,   267,
       0,     0,     0,    57,    96,   198,     0,   271,   123,     0,
     125,   128,   267,    53,    61,    59,     0,     0,     0,   271,
     127,    54,    60,   129,   271,   124,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,   202,     8,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   112,    75,   -70,     0,  -410,   -83,  -410,  -410,  -410,
    -410,   156,  -410,  -410,  -410,  -410,   -47,    64,    56,    74,
     149,    57,   228,   238,   240,   243,   235,   -66,   -64,   218,
    -410,  -106,  -287,   -79,  -410,   184,   -59,  -410,  -410,  -323,
    -410,  -410,  -410,  -410,  -410,   503,    30,   193,   -12,    16,
      20,  -410,    63,  -410,  -410,  -410,   434,     1,  -410,    78,
     -52,    -3,   485,  -336,  -117,  -172,  -410,   -62,  -410,   336,
      51,   431,  -410,  -196,  -410,  -410,  -410,  -410,  -410,  -410,
     366,   239,  -410,  -410,   354,  -410,   137,  -410,  -410,   329,
    -410,  -410,  -410,  -222,  -410,   294,  -409,   113,  -220,  -410,
    -410,  -410,   245,   -56,  -410,  -410,   -69,  -410,  -155,  -410
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    22,   142,   143,   144,   145,   146,   147,    23,
     148,   149,    25,    26,    93,   150,   340,   151,   152,   153,
     264,   372,   447,   448,   444,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   207,   208,   233,
     335,   234,   168,   235,   236,   237,   238,   239,   240,   426,
     241,   423,   242,   243,    28,    29,   244,    31,    32,   245,
      34,    35,    36,    37,    38,    73,    74,   176,    40,    41,
      54,    42,    43,   251,   427,   192,   193,    88,    89,    90,
     177,   119,   107,   210,   326,    45,    46,    47,   178,   179,
     180,   181,   299,   300,   187,   312,   313,   182,    77,   114,
     115,   116,    48,   341,    62,   265,   445,   450,   246,   247,
     462,   108,   169,   317,   357,   195,    78,   416,   183,   302
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    39,    55,    96,    52,    53,   109,    59,   347,   252,
     325,   400,   174,   166,   102,   167,    33,   315,   170,   118,
     249,    72,    11,   211,   303,   429,   430,   468,    27,    39,
      30,   194,    56,    27,    75,   442,   366,   367,     1,   368,
     369,    52,    81,    56,    33,   201,   376,    85,     1,    86,
     118,    44,    55,    56,   290,    84,   351,   309,    30,   105,
     483,     1,    99,    55,   101,    87,    56,    56,    83,   106,
      60,    61,   451,   491,   291,    72,   113,   248,   110,    44,
      86,   253,    27,   185,   112,   256,   257,    27,   190,   260,
      69,   184,   199,   188,    55,   351,    87,    63,   175,   467,
     461,     1,    68,    52,   205,   272,    91,   202,     1,   174,
     215,   485,    24,    56,    56,     3,    24,   232,    79,    58,
      80,   254,    98,     6,   446,   231,   232,    68,    66,     5,
       6,    92,   255,   356,    68,    64,   322,     1,   323,   360,
      24,    65,     2,     3,   344,    24,   250,   266,   373,    69,
     267,   403,   268,    24,     4,    60,     1,     5,   103,     6,
     352,   375,    24,    72,   273,   191,     1,     7,    68,    76,
    -286,    56,  -286,   274,   275,    27,   296,   104,     6,    27,
     370,   269,   270,   271,   395,   486,   311,   315,     6,    52,
      53,    52,    81,   308,    24,   175,   363,    86,    86,    24,
      86,   304,    21,   304,    58,    49,     1,   364,    57,    21,
     319,    56,   320,    87,    87,    24,    87,   113,    50,   458,
     305,   470,   398,   232,    82,   112,    97,   109,     6,    67,
      21,   231,   166,    72,   167,    21,   174,    95,   336,   232,
     425,   397,   425,   425,   276,    27,   205,   231,   373,   277,
      86,    21,   361,   166,   252,   167,   337,   488,   412,     1,
     100,    67,    98,   117,   420,    86,   186,   191,   280,   191,
     250,   431,   281,   196,    68,   351,   278,   279,   111,    66,
     336,     6,    21,     1,    21,   250,   197,    24,    67,    21,
      55,    24,   351,   355,    21,    69,   282,   283,   441,   453,
     351,    24,   198,    24,    52,   401,    27,    68,   200,   405,
     487,   433,   214,   284,   285,   216,   203,   425,   252,    21,
      86,   217,   175,   209,   212,   105,   218,    76,    21,   258,
     362,    57,   381,   382,  -287,   106,    87,   378,   379,   380,
     471,   389,   390,   232,   259,   232,   232,   261,   232,   232,
     232,   231,   383,   384,   476,    56,     3,    24,   231,   361,
     434,   262,   361,   263,   286,    86,   250,   359,   250,   250,
       5,    86,   287,   361,   288,   289,   293,    21,   374,   292,
     360,    21,   306,   377,   478,   250,   480,   481,   310,   294,
     301,   250,     1,   307,   298,   316,    76,     2,     3,    21,
      21,    67,    21,  -287,   318,   475,   166,   311,   167,   189,
     495,   342,     5,   343,     6,   496,    24,   338,    24,   111,
     345,   350,     7,   232,   209,    21,   346,    52,   464,   385,
     386,   387,   388,   348,    67,    86,   212,   362,   349,   351,
     362,    21,   353,   250,   354,   407,   358,    21,   408,   361,
     413,   449,    21,   414,    55,   250,   415,   336,   419,   421,
      56,     3,   428,   232,    66,   232,   232,    21,   437,   438,
    -285,   231,   359,   231,   231,     5,   212,   212,   439,   212,
     212,   212,   440,   443,   452,   360,   212,   298,   456,   232,
     460,   457,   327,   463,   232,   459,    97,   231,   465,   466,
     469,   472,   231,   477,   479,   482,   484,   492,    21,   489,
     290,   404,   493,   406,   391,   494,   328,   329,   330,   331,
     332,   436,    21,   333,   334,   392,   396,   449,   393,   422,
     291,    70,   394,   321,   409,    94,   410,   204,   424,    24,
     213,   297,   314,   402,   455,    21,   339,    21,    21,   365,
      21,    21,    21,   417,   418,     1,   120,   121,   122,   123,
      56,   124,   473,   125,   411,     0,     0,    21,     0,   432,
       0,     0,   126,    21,   127,   128,     0,   129,     0,   130,
       0,     0,    56,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,     0,
       0,   132,   133,     0,     0,   134,     0,   454,   135,   310,
       0,     0,   136,     0,   137,     0,   138,     0,     0,     0,
     139,     0,     0,   140,     0,    21,     0,     8,     0,   141,
       9,    10,    11,   209,     0,   399,    12,    21,     0,    13,
       0,     0,    14,    15,     0,     0,     0,     0,     0,    16,
       0,     0,    17,    18,     0,    20,     0,     0,     0,     0,
       0,   212,     0,     0,     0,    21,     0,    21,    21,     0,
       0,   474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   120,   121,   122,   123,    56,   124,     0,
     125,    21,     0,     0,     0,     0,    21,   490,   117,   126,
       0,   127,   128,     0,   129,     0,   130,     0,     0,  -273,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   133,
       0,     0,   219,   220,     0,   221,    10,    11,   222,   136,
     223,   224,     0,   138,    13,   225,   226,   227,    15,     0,
     140,     0,     0,   228,    16,   229,   141,    17,    18,    19,
      20,   230,     1,   120,   121,   122,   123,    56,   124,     0,
     125,     0,     0,     0,     0,     0,     0,     0,   117,   126,
       0,   127,   128,     0,   129,     0,   130,     0,     0,  -274,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   133,
       0,     0,   219,   220,     0,   221,    10,    11,   222,   136,
     223,   224,     0,   138,    13,   225,   226,   227,    15,     0,
     140,     0,     0,   228,    16,   229,   141,    17,    18,    19,
      20,   230,     1,   120,   121,   122,   123,    56,   124,     0,
     125,     0,     0,     0,     0,     0,     0,     0,   117,   126,
       0,   127,   128,     0,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   133,
       0,     0,   219,   220,     0,   221,    10,    11,   222,   136,
     223,   224,     0,   138,    13,   225,   226,   227,    15,     0,
     140,     0,     0,   228,    16,   229,   141,    17,    18,    19,
      20,   230,     1,   120,   121,   122,   123,    56,   124,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,   127,   128,     1,   129,     0,   130,     0,     2,     3,
       0,     0,   131,     0,     0,     0,     0,     0,  -285,     0,
     189,     0,     0,     5,     0,     6,     0,     0,   132,   133,
       0,     0,   219,     7,     0,   221,    10,    11,     0,   136,
       0,   224,     0,   138,    13,     0,     1,   227,    15,     0,
     140,     2,     3,     0,    16,     0,   141,    17,    18,     0,
      20,     0,     0,     4,     0,     0,     5,     0,     6,     0,
       0,     0,     0,     1,     0,   171,     7,     0,     2,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     5,     0,     6,     8,     0,     0,     9,
      10,    11,     0,     7,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,     1,   172,   173,     0,    16,     2,
       3,    17,    18,     8,    20,     0,     9,    10,    11,     0,
       0,     4,    12,     0,     5,    13,     6,     0,    14,    15,
       0,     1,     0,    71,     7,    16,     2,     3,    17,    18,
      19,    20,     0,     0,     0,     0,  -285,     0,   189,     0,
       0,     5,     0,     6,     8,     0,     0,     9,    10,    11,
       0,     7,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,     1,     0,     0,     0,    16,     2,     3,    17,
      18,     8,    20,     0,     9,    10,    11,     0,     0,     4,
      12,     0,     5,    13,     6,     0,    14,    15,     0,     0,
       0,   295,     7,    16,     0,     0,    17,    18,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     9,    10,    11,     0,     0,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
       0,     0,     0,     0,    16,     0,     0,    17,    18,     0,
      20,     1,   120,   121,   122,   123,    56,   124,     0,   125,
       0,     0,     0,     0,     0,     0,     0,   206,   126,     0,
     127,   128,     0,   129,     0,   130,     0,     0,   324,     0,
       0,   131,     0,     1,   120,   121,   122,   123,    56,   124,
       0,   125,     0,     0,     0,     0,     0,   132,   133,   206,
     126,   134,   127,   128,   135,   129,     0,   130,   136,     0,
     137,     0,   138,   131,     0,     0,   139,     0,     0,   140,
       0,     0,     0,     0,     0,   141,     0,     0,     0,   132,
     133,     0,     0,   134,     0,     0,   135,     0,     0,     0,
     136,     0,   137,     0,   138,     0,     0,     0,   139,     0,
       0,   140,     0,     0,     0,     0,     0,   141,     1,   120,
     121,   122,   123,    56,   124,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,   127,   128,    56,
     129,     0,   130,     0,     0,     0,     0,     0,   131,     0,
       0,   435,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   133,    56,     0,   134,     0,
       0,   135,     0,     0,     0,   136,     0,   137,     0,   138,
       0,     0,     0,   139,     8,     0,   140,     9,    10,    11,
       0,     0,   141,    12,     0,     0,    13,     0,     0,    14,
      15,     0,     0,     0,     0,     0,    16,     0,     0,    17,
      18,     8,    20,     0,     9,    10,    11,     0,     0,     0,
      12,     0,     0,    13,     0,     0,    14,    15,     0,     0,
       0,     0,     0,    16,     0,     0,    17,    18,     0,    20
};

static const yytype_int16 yycheck[] =
{
       0,     0,     5,    55,     4,     4,    75,     7,   228,   126,
     206,   298,    82,    79,    66,    79,     0,   189,    80,    78,
     126,    33,    58,   106,   179,   348,   349,   436,    28,    28,
       0,    87,     8,    33,    33,   371,   258,   259,     3,   261,
     262,    41,    41,     8,    28,    97,   268,    47,     3,    49,
     109,     0,    55,     8,    28,    47,    13,    33,    28,    10,
     469,     3,    62,    66,    64,    49,     8,     8,    33,    20,
       7,    33,    29,   482,    48,    87,    76,   124,    33,    28,
      80,   128,    82,    83,    76,   132,   133,    87,    87,   136,
      27,    83,    92,    85,    97,    13,    80,    70,    82,   435,
     423,     3,    27,   103,   103,   152,     8,    99,     3,   179,
     110,    29,     0,     8,     8,     9,     4,   117,    18,     7,
      20,    60,    59,    25,    18,   117,   126,    52,    23,    23,
      25,    33,    71,   250,    59,    33,   198,     3,   200,    33,
      28,     0,     8,     9,   223,    33,   126,    15,   265,    86,
      18,   306,    20,    41,    20,    92,     3,    23,    13,    25,
     239,   267,    50,   175,    14,    87,     3,    33,    93,    12,
      18,     8,    20,    23,    24,   175,   175,    32,    25,   179,
     263,    49,    50,    51,   290,   472,   186,   359,    25,   189,
     189,   191,   191,   185,    82,   179,   252,   197,   198,    87,
     200,    13,     0,    13,    92,    20,     3,   254,     6,     7,
      18,     8,    20,   197,   198,   103,   200,   217,    33,   415,
      32,   443,    32,   223,    19,   217,    23,   296,    25,    27,
      28,   223,   298,   245,   298,    33,   306,    31,    13,   239,
     346,   293,   348,   349,    22,   245,   245,   239,   365,    27,
     250,    49,   252,   319,   371,   319,    31,   477,   320,     3,
      52,    59,   199,    19,   343,   265,    12,   189,    17,   191,
     250,   350,    21,    31,   199,    13,    39,    40,    76,    23,
      13,    25,    80,     3,    82,   265,    13,   175,    86,    87,
     293,   179,    13,    31,    92,   232,    45,    46,    31,    12,
      13,   189,    20,   191,   304,   304,   306,   232,    20,   309,
      31,   358,   110,    43,    44,   113,    32,   423,   435,   117,
     320,    13,   306,   105,   106,    10,    20,    12,   126,    20,
     252,   129,   276,   277,    19,    20,   320,   273,   274,   275,
     446,   284,   285,   343,    20,   345,   346,    20,   348,   349,
     350,   343,   278,   279,   460,     8,     9,   245,   350,   359,
     360,    20,   362,    20,     9,   365,   346,    20,   348,   349,
      23,   371,    16,   373,    26,    47,    31,   175,   266,    29,
      33,   179,    12,   271,   463,   365,   465,   466,   186,    32,
      32,   371,     3,    30,    10,    10,    12,     8,     9,   197,
     198,   199,   200,    19,    10,   457,   472,   407,   472,    20,
     489,    32,    23,    12,    25,   494,   304,   215,   306,   217,
      20,    12,    33,   423,   206,   223,    20,   427,   427,   280,
     281,   282,   283,    20,   232,   435,   218,   359,    20,    13,
     362,   239,    32,   423,    30,    13,    31,   245,    31,   449,
      31,   373,   250,    31,   457,   435,    13,    13,    31,    82,
       8,     9,    32,   463,    23,   465,   466,   265,    31,    31,
      18,   463,    20,   465,   466,    23,   258,   259,    31,   261,
     262,   263,    31,    20,    31,    33,   268,    10,    29,   489,
      20,    31,    10,    31,   494,    30,    23,   489,    31,    31,
      31,    18,   494,    32,    10,    31,    31,    29,   306,    63,
      28,   309,    32,   311,   286,    31,    34,    35,    36,    37,
      38,   365,   320,    41,    42,   287,   291,   449,   288,   345,
      48,    28,   289,   197,   316,    50,   318,   103,   345,   427,
     109,   175,   188,   304,   407,   343,   217,   345,   346,   255,
     348,   349,   350,   335,   336,     3,     4,     5,     6,     7,
       8,     9,   449,    11,   319,    -1,    -1,   365,    -1,   351,
      -1,    -1,    20,   371,    22,    23,    -1,    25,    -1,    27,
      -1,    -1,     8,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,   405,    56,   407,
      -1,    -1,    60,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    71,    -1,   423,    -1,    53,    -1,    77,
      56,    57,    58,   415,    -1,    83,    62,   435,    -1,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,   443,    -1,    -1,    -1,   463,    -1,   465,   466,    -1,
      -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,   489,    -1,    -1,    -1,    -1,   494,   479,    19,    20,
      -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,     3,    25,    -1,    27,    -1,     8,     9,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    23,    -1,    25,    -1,    -1,    49,    50,
      -1,    -1,    53,    33,    -1,    56,    57,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    -1,     3,    68,    69,    -1,
      71,     8,     9,    -1,    75,    -1,    77,    78,    79,    -1,
      81,    -1,    -1,    20,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,     3,    -1,    32,    33,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    23,    -1,    25,    53,    -1,    -1,    56,
      57,    58,    -1,    33,    -1,    62,    -1,    -1,    65,    -1,
      -1,    68,    69,    -1,     3,    72,    73,    -1,    75,     8,
       9,    78,    79,    53,    81,    -1,    56,    57,    58,    -1,
      -1,    20,    62,    -1,    23,    65,    25,    -1,    68,    69,
      -1,     3,    -1,    32,    33,    75,     8,     9,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    23,    -1,    25,    53,    -1,    -1,    56,    57,    58,
      -1,    33,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,
      69,    -1,     3,    -1,    -1,    -1,    75,     8,     9,    78,
      79,    53,    81,    -1,    56,    57,    58,    -1,    -1,    20,
      62,    -1,    23,    65,    25,    -1,    68,    69,    -1,    -1,
      -1,    32,    33,    75,    -1,    -1,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      81,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      22,    23,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    33,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    49,    50,    19,
      20,    53,    22,    23,    56,    25,    -1,    27,    60,    -1,
      62,    -1,    64,    33,    -1,    -1,    68,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,
      60,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    77,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,     8,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,     8,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    53,    -1,    71,    56,    57,    58,
      -1,    -1,    77,    62,    -1,    -1,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      79,    53,    81,    -1,    56,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    20,    23,    25,    33,    53,    56,
      57,    58,    62,    65,    68,    69,    75,    78,    79,    80,
      81,    85,    86,    93,    95,    96,    97,    98,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   151,
     152,   153,   155,   156,   164,   169,   170,   171,   186,    20,
      33,    85,    98,   151,   154,   155,     8,    85,    95,    98,
     146,    33,   188,    70,    33,     0,    23,    85,    96,   146,
     139,    32,   142,   149,   150,   151,    12,   182,   200,    18,
      20,   151,    19,    33,    86,    98,    98,   143,   161,   162,
     163,     8,    33,    98,   156,    31,   154,    23,   146,    98,
      52,    98,   154,    13,    32,    10,    20,   166,   195,   200,
      33,    85,    86,    98,   183,   184,   185,    19,   130,   165,
       4,     5,     6,     7,     9,    11,    20,    22,    23,    25,
      27,    33,    49,    50,    53,    56,    60,    62,    64,    68,
      71,    77,    87,    88,    89,    90,    91,    92,    94,    95,
      99,   101,   102,   103,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   126,   196,
     161,    32,    72,    73,    97,   143,   151,   164,   172,   173,
     174,   175,   181,   202,    86,    98,    12,   178,    86,    20,
     151,   153,   159,   160,   197,   199,    31,    13,    20,    98,
      20,   154,    86,    32,   150,   151,    19,   121,   122,   123,
     167,   100,   123,   165,    85,    98,    85,    13,    20,    53,
      54,    56,    59,    61,    62,    66,    67,    68,    74,    76,
      82,    86,    98,   123,   125,   127,   128,   129,   130,   131,
     132,   134,   136,   137,   140,   143,   192,   193,   110,   125,
     144,   157,   158,   110,    60,    71,   110,   110,    20,    20,
     110,    20,    20,    20,   104,   189,    15,    18,    20,    49,
      50,    51,   110,    14,    23,    24,    22,    27,    39,    40,
      17,    21,    45,    46,    43,    44,     9,    16,    26,    47,
      28,    48,    29,    31,    32,    32,   151,   174,    10,   176,
     177,    32,   203,   202,    13,    32,    12,    30,    86,    33,
      85,    98,   179,   180,   178,   159,    10,   197,    10,    18,
      20,   163,   161,   161,    30,   167,   168,    10,    34,    35,
      36,    37,    38,    41,    42,   124,    13,    31,    85,   183,
     100,   187,    32,    12,   127,    20,    20,   192,    20,    20,
      12,    13,   127,    32,    30,    31,   158,   198,    31,    20,
      33,    98,   153,   197,   110,   189,   187,   187,   187,   187,
     100,    20,   105,   158,    95,   125,   187,    95,   111,   111,
     111,   112,   112,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   117,   118,   119,   125,   120,   154,    32,    83,
     126,   151,   175,   202,    85,    98,    85,    13,    31,   123,
     123,   196,   161,    31,    31,    13,   201,   123,   123,    31,
     127,    82,   129,   135,   141,   125,   133,   158,    32,   133,
     133,   127,   123,   110,    98,    20,   105,    31,    31,    31,
      31,    31,   157,    20,   108,   190,    18,   106,   107,   153,
     191,    29,    31,    12,    85,   180,    29,    31,   167,    30,
      20,   133,   194,    31,   151,    31,    31,   157,   190,    31,
     187,   125,    18,   191,   123,   154,   125,    32,   127,    10,
     127,   127,    31,   190,    31,    29,   126,    31,   192,    63,
     123,   190,    29,    32,    31,   127,   127
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    87,    87,    87,    87,    87,    88,
      89,    90,    91,    92,    92,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   103,   104,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   112,   112,   112,
     112,   113,   113,   113,   114,   114,   114,   115,   115,   115,
     115,   115,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   129,
     130,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   147,   147,   147,   148,   149,   149,   150,
     151,   151,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   155,
     156,   156,   156,   156,   157,   158,   159,   159,   160,   160,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   163,
     164,   164,   165,   166,   166,   167,   167,   167,   168,   168,
     169,   170,   170,   170,   170,   171,   172,   172,   173,   173,
     173,   173,   173,   173,   174,   174,   175,   175,   175,   176,
     177,   178,   179,   179,   180,   180,   180,   180,   181,   181,
     182,   183,   183,   184,   185,   185,   185,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     2,     2,     3,     2,     1,     4,     4,     4,
       4,     4,     4,     3,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     4,     5,     6,     7,     3,     2,     2,     1,     3,
       4,     3,     2,     3,     1,     4,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3,     1,     2,     5,     7,     5,     1,     4,     5,     7,
       8,     1,     1,     2,     3,     1,     1,     2,     1,     1,
       1,     1,     3,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     4,     1,     3,     2,
       1,     2,     1,     5,     4,     4,     6,     6,     4,     3,
       1,     2,     1,     2,     3,     3,     4,     1,     2,     1,
       1,     2,     3,     2,     2,     2,     2,     1,     5,     4,
       4,     3,     1,     0,     1,     3,     2,     4,     2,     4,
       3,     4,     1,     2,     3,     1,     4,     2,     1,     3,
       4,     2,     3,     3,     4,     1,     2,     3,     3,     2,
       2,     1,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     2,     1,     3,     3,     2,     2,     1,     1,     1,
       2,     1,     3,     4,     3,     2,     2,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 147 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(class_name, 1, (yyvsp[0]. treenode )); }
#line 1901 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 155 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(identifier, 1, (yyvsp[0]. treenode )); }
#line 1907 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 159 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1913 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 160 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1919 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1925 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 162 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1931 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 163 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1937 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 167 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(integer_literal, 1, (yyvsp[0]. treenode )); }
#line 1943 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 171 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(character_literal, 1, (yyvsp[0]. treenode )); }
#line 1949 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 175 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(floating_literal, 1, (yyvsp[0]. treenode )); }
#line 1955 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 179 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(string_literal, 1, (yyvsp[0]. treenode )); }
#line 1961 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 183 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(boolean_literal, 1, (yyvsp[0]. treenode )); }
#line 1967 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 184 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(boolean_literal, 1, (yyvsp[0]. treenode )); }
#line 1973 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "120gram.y" /* yacc.c:1646  */
    {  root = tree_node(translation_unit, 1, (yyvsp[0]. treenode )); (yyval. treenode ) = root; }
#line 1979 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 1, (yyvsp[0]. treenode )); }
#line 1985 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 201 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 1991 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 1, (yyvsp[0]. treenode )); }
#line 1997 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(id_expression, 1, (yyvsp[0]. treenode )); }
#line 2003 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 207 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(id_expression, 1, (yyvsp[0]. treenode )); }
#line 2009 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 211 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(unqualified_id, 1, (yyvsp[0]. treenode )); }
#line 2015 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 212 "120gram.y" /* yacc.c:1646  */
    { yyerror("C++ destructors not supported"); (yyval. treenode ) = NULL; }
#line 2021 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(qualified_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2027 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 220 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(nested_name_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2033 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 221 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(nested_name_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2039 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 225 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 1, (yyvsp[0]. treenode )); }
#line 2045 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 226 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2051 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 227 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2057 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 228 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2063 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2069 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 230 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2075 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 231 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2081 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 232 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2087 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 233 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2093 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 234 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2099 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 235 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2105 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 239 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(expression_list, 1, (yyvsp[0]. treenode )); }
#line 2111 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 240 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(expression_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2117 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 244 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2123 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 245 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2129 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 246 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2135 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 247 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2141 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 248 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2147 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 249 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2153 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 250 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2159 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2165 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2171 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 256 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2177 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 257 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2183 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 258 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2189 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 262 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2195 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 263 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(new_expression, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2201 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 264 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2207 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 265 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2213 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 269 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_placement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2219 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 273 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_type_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2225 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 277 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2231 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 278 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(new_declarator, 1, (yyvsp[0]. treenode )); }
#line 2237 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 282 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(direct_new_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2243 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 283 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_new_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2249 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 287 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_initializer, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2255 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 291 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(delete_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2261 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 292 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(delete_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2267 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 296 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(cast_expression, 1, (yyvsp[0]. treenode )); }
#line 2273 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 297 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(cast_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2279 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 301 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(pm_expression, 1, (yyvsp[0]. treenode )); }
#line 2285 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 305 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(multiplicative_expression, 1, (yyvsp[0]. treenode )); }
#line 2291 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 306 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2297 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 307 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2303 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 308 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2309 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 312 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(additive_expression, 1, (yyvsp[0]. treenode )); }
#line 2315 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 313 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(additive_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2321 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 314 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(additive_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2327 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 318 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(shift_expression, 1, (yyvsp[0]. treenode )); }
#line 2333 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 319 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(shift_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2339 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 320 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(shift_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2345 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 324 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(relational_expression, 1, (yyvsp[0]. treenode )); }
#line 2351 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 325 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2357 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 326 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2363 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 327 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2369 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 328 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2375 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 332 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(equality_expression, 1, (yyvsp[0]. treenode )); }
#line 2381 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 333 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(equality_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2387 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 334 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(equality_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2393 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 338 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(and_expression, 1, (yyvsp[0]. treenode )); }
#line 2399 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 339 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(and_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2405 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 343 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(exclusive_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2411 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 344 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(exclusive_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2417 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 348 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(inclusive_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2423 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 349 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(inclusive_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2429 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 353 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(logical_and_expression, 1, (yyvsp[0]. treenode )); }
#line 2435 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 354 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(logical_and_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2441 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 358 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(logical_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2447 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 359 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(logical_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2453 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 364 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(conditional_expression, 1, (yyvsp[0]. treenode )); }
#line 2459 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 365 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(conditional_expression, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2465 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 370 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_expression, 1, (yyvsp[0]. treenode )); }
#line 2471 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 371 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(assignment_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2477 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 375 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2483 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 376 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2489 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 377 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2495 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 378 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2501 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 379 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2507 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 380 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2513 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 381 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2519 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 382 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2525 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 386 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression, 1, (yyvsp[0]. treenode )); }
#line 2531 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 387 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2537 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 392 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(constant_expression, 1, (yyvsp[0]. treenode )); }
#line 2543 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 401 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2549 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 402 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2555 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 403 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2561 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 404 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2567 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 405 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2573 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 406 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2579 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 407 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2585 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 411 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(labeled_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2591 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 412 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(labeled_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2597 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 416 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_statement, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2603 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 420 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(compound_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2609 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 424 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement_seq, 1, (yyvsp[0]. treenode )); }
#line 2615 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 425 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(statement_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2621 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 429 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(selection_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2627 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 430 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(selection_statement, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2633 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 431 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(selection_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2639 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 435 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(condition, 1, (yyvsp[0]. treenode )); }
#line 2645 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 436 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(condition, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2651 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 440 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2657 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 441 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2663 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 442 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 8, (yyvsp[-7]. treenode ), (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2669 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 446 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(for_init_statement, 1, (yyvsp[0]. treenode )); }
#line 2675 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 447 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(for_init_statement, 1, (yyvsp[0]. treenode )); }
#line 2681 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 451 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(jump_statement, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2687 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 452 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(jump_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2693 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 456 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(declaration_statement, 1, (yyvsp[0]. treenode )); }
#line 2699 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 464 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration_seq, 1, (yyvsp[0]. treenode )); }
#line 2705 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 465 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declaration_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2711 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 469 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration, 1, (yyvsp[0]. treenode )); }
#line 2717 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 470 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration, 1, (yyvsp[0]. treenode )); }
#line 2723 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 474 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(block_declaration, 1, (yyvsp[0]. treenode )); }
#line 2729 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 475 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(block_declaration, 1, (yyvsp[0]. treenode )); }
#line 2735 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 479 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(simple_declaration, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2741 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 480 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(simple_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2747 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 484 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(decl_specifier, 1, (yyvsp[0]. treenode )); }
#line 2753 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 488 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(decl_specifier_seq, 1, (yyvsp[0]. treenode )); }
#line 2759 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 489 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(decl_specifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2765 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 493 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2771 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 494 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2777 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 495 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2783 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 496 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2789 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 500 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2795 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 501 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(simple_type_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2801 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 502 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2807 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 503 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2813 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 504 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2819 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 505 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2825 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 506 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2831 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 507 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2837 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 508 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2843 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 509 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2849 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 510 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2855 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 514 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_name, 1, (yyvsp[0]. treenode )); }
#line 2861 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 518 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2867 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 519 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2873 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 520 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2879 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 524 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(using_directive, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2885 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 532 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator_list, 1, (yyvsp[0]. treenode )); }
#line 2891 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 533 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2897 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 537 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2903 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 541 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator, 1, (yyvsp[0]. treenode )); }
#line 2909 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 542 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2915 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 546 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(direct_declarator, 1, (yyvsp[0]. treenode )); }
#line 2921 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 547 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2927 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 548 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2933 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 549 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2939 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 550 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2945 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 551 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2951 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 552 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2957 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 553 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2963 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 557 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 1, (yyvsp[0]. treenode )); }
#line 2969 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 558 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2975 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 559 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 1, (yyvsp[0]. treenode )); }
#line 2981 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 560 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2987 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 561 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2993 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 562 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2999 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 563 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3005 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 567 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier_seq, 1, (yyvsp[0]. treenode )); }
#line 3011 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 568 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3017 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 572 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier, 1, (yyvsp[0]. treenode )); }
#line 3023 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 576 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 1, (yyvsp[0]. treenode )); }
#line 3029 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 577 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3035 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 578 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3041 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 579 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3047 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 583 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3053 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 587 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_specifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3059 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 591 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3065 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 592 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 1, (yyvsp[0]. treenode )); }
#line 3071 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 596 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3077 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 597 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3083 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 598 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3089 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 599 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3095 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 603 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_clause, 1, (yyvsp[0]. treenode )); }
#line 3101 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 604 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3107 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 608 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_list, 1, (yyvsp[0]. treenode )); }
#line 3113 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 609 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3119 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 613 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3125 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 614 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3131 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 615 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3137 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 616 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3143 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 620 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_definition, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3149 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 621 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_definition, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3155 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 625 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_body, 1, (yyvsp[0]. treenode )); }
#line 3161 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 629 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3167 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 630 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3173 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 634 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 1, (yyvsp[0]. treenode )); }
#line 3179 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 635 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3185 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 636 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3191 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 640 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_list, 1, (yyvsp[0]. treenode )); }
#line 3197 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 641 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3203 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 649 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3209 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 653 "120gram.y" /* yacc.c:1646  */
    { typenametable_insert((yyvsp[0]. treenode )->kids[0]->leaf->text, CLASS_NAME); (yyval. treenode ) = tree_node(class_head, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3215 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 654 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3221 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 655 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3227 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 656 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3233 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 660 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_key, 1, (yyvsp[0]. treenode )); }
#line 3239 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 664 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3245 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 665 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3251 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 669 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3257 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 670 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3263 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 671 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3269 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 672 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 1, (yyvsp[0]. treenode )); }
#line 3275 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 673 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3281 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 674 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3287 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 683 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 1, (yyvsp[0]. treenode )); }
#line 3293 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 684 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3299 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 685 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3305 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 699 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(constant_initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3311 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 708 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_clause, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3317 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 712 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier_list, 1, (yyvsp[0]. treenode )); }
#line 3323 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 713 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3329 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 717 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3335 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 718 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3341 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 719 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3347 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 720 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 1, (yyvsp[0]. treenode )); }
#line 3353 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 724 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(access_specifier, 1, (yyvsp[0]. treenode )); }
#line 3359 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 725 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(access_specifier, 1, (yyvsp[0]. treenode )); }
#line 3365 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 733 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ctor_initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3371 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 737 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_list, 1, (yyvsp[0]. treenode )); }
#line 3377 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 738 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3383 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 742 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3389 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 746 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3395 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 747 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3401 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 748 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3407 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 749 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 1, (yyvsp[0]. treenode )); }
#line 3413 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 750 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 1, (yyvsp[0]. treenode )); }
#line 3419 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 776 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3425 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 777 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declaration_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3431 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 781 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3437 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 782 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_list_opt, 1, (yyvsp[0]. treenode )); }
#line 3443 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 786 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3449 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 787 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(COLONCOLON_opt, 1, (yyvsp[0]. treenode )); }
#line 3455 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 791 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3461 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 792 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_placement_opt, 1, (yyvsp[0]. treenode )); }
#line 3467 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 796 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3473 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 797 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3479 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 801 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3485 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 802 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3491 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 806 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3497 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 807 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_opt, 1, (yyvsp[0]. treenode )); }
#line 3503 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 811 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3509 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 812 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(statement_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3515 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 816 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3521 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 817 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(condition_opt, 1, (yyvsp[0]. treenode )); }
#line 3527 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 821 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3533 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 822 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3539 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 827 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3545 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 828 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(constant_expression_opt, 1, (yyvsp[0]. treenode )); }
#line 3551 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 833 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3557 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 834 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3563 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 838 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3569 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 839 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_specifier_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3575 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 843 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3581 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 844 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_abstract_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3587 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 848 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3593 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 849 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ctor_initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3599 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 853 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3605 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 854 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(COMMA_opt, 1, (yyvsp[0]. treenode )); }
#line 3611 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 858 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3617 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 859 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification_opt, 1, (yyvsp[0]. treenode )); }
#line 3623 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 863 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3629 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 864 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(SEMICOLON_opt, 1, (yyvsp[0]. treenode )); }
#line 3635 "120gram.tab.c" /* yacc.c:1646  */
    break;


#line 3639 "120gram.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 867 "120gram.y" /* yacc.c:1906  */


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
