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


int yylex();
void yyerror(char *s);
struct tree *tree_node(int rule, int k, ...);



#line 89 "120gram.tab.c" /* yacc.c:339  */

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
    BOOL = 307,
    BREAK = 308,
    CASE = 309,
    CHAR = 310,
    CLASS = 311,
    CONST = 312,
    DEFAULT = 313,
    DELETE = 314,
    DO = 315,
    DOUBLE = 316,
    ELSE = 317,
    FALSE = 318,
    FLOAT = 319,
    FOR = 320,
    IF = 321,
    INT = 322,
    LONG = 323,
    NEW = 324,
    PRIVATE = 325,
    PUBLIC = 326,
    RETURN = 327,
    SHORT = 328,
    SWITCH = 329,
    TRUE = 330,
    TYPENAME = 331,
    UNSIGNED = 332,
    VOID = 333,
    WHILE = 334,
    USING = 335,
    NAMESPACE = 336,
    STD = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 67 "120gram.y" /* yacc.c:355  */

  struct tree* treenode;

#line 216 "120gram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "120gram.tab.c" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  495

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
       0,   148,   148,   156,   160,   161,   162,   163,   164,   168,
     172,   176,   180,   184,   185,   193,   201,   202,   203,   207,
     208,   212,   213,   217,   221,   222,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   240,   241,   245,
     246,   247,   248,   249,   250,   251,   252,   256,   257,   258,
     259,   263,   264,   265,   266,   270,   274,   278,   279,   283,
     284,   288,   292,   293,   297,   298,   302,   306,   307,   308,
     309,   313,   314,   315,   319,   320,   321,   325,   326,   327,
     328,   329,   333,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   359,   360,   365,   366,   371,   372,   376,
     377,   378,   379,   380,   381,   382,   383,   387,   388,   393,
     402,   403,   404,   405,   406,   407,   408,   412,   413,   417,
     421,   425,   426,   430,   431,   432,   436,   437,   441,   442,
     443,   447,   448,   452,   453,   457,   465,   466,   470,   471,
     475,   476,   480,   481,   485,   489,   490,   494,   495,   496,
     497,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   515,   519,   520,   521,   525,   533,   534,   538,
     542,   543,   547,   548,   549,   550,   551,   552,   553,   554,
     558,   559,   560,   561,   562,   563,   564,   568,   569,   573,
     577,   578,   579,   580,   584,   588,   592,   593,   597,   598,
     599,   600,   604,   605,   609,   610,   614,   615,   616,   617,
     621,   622,   626,   630,   631,   635,   636,   637,   641,   642,
     650,   654,   655,   656,   657,   661,   665,   666,   670,   671,
     672,   673,   674,   678,   679,   683,   684,   685,   694,   699,
     708,   712,   713,   717,   718,   719,   720,   724,   725,   733,
     737,   738,   742,   746,   747,   748,   749,   750,   776,   777,
     781,   782,   786,   787,   791,   792,   796,   797,   801,   802,
     806,   807,   811,   812,   816,   817,   821,   822,   827,   828,
     833,   834,   838,   839,   843,   844,   848,   849,   853,   854,
     858,   859,   863,   864
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
  "MINUSMINUS", "ARROW", "BOOL", "BREAK", "CASE", "CHAR", "CLASS", "CONST",
  "DEFAULT", "DELETE", "DO", "DOUBLE", "ELSE", "FALSE", "FLOAT", "FOR",
  "IF", "INT", "LONG", "NEW", "PRIVATE", "PUBLIC", "RETURN", "SHORT",
  "SWITCH", "TRUE", "TYPENAME", "UNSIGNED", "VOID", "WHILE", "USING",
  "NAMESPACE", "STD", "'0'", "$accept", "class_name", "identifier",
  "literal", "integer_literal", "character_literal", "floating_literal",
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

#define YYPACT_NINF -411

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-411)))

#define YYTABLE_NINF -287

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     882,  -411,   113,  -411,   470,    49,    71,    79,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,    94,  -411,  -411,
      55,    23,  -411,   165,  -411,  -411,  -411,    70,   882,  -411,
    -411,  -411,  -411,  1088,  -411,  -411,  -411,  -411,  -411,   171,
     194,   470,  -411,  -411,  -411,  -411,   175,    22,  -411,  1440,
     118,    23,   206,   207,  -411,    49,  -411,  -411,  -411,    77,
    -411,  -411,    71,   120,    71,    79,  -411,  -411,    49,  -411,
    -411,  -411,  -411,  -411,    56,  -411,   268,    43,  -411,   237,
    1392,  1440,  -411,  1022,   178,   230,   254,   266,   230,    71,
    1150,   240,   264,  -411,   269,    79,   271,  -411,  -411,    49,
    -411,   266,   261,  -411,  -411,   470,  -411,  1361,  1392,  -411,
    -411,   237,    71,   230,  -411,    71,  -411,   273,   276,   648,
    -411,  -411,  -411,  -411,  -411,  -411,  1392,  -411,   960,  -411,
    1392,    71,  -411,   -16,  1392,  1392,   282,   284,  1392,   286,
    -411,   289,   292,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,    48,  -411,  1392,  -411,  -411,  -411,  -411,   161,
     142,   122,   108,   179,   306,   311,   309,   285,    66,  -411,
    -411,   322,   321,  -411,  -411,  -411,  1212,   196,   308,  -411,
    1022,   103,  -411,   342,   326,  -411,   266,    28,  -411,   254,
     657,   351,   411,  -411,   212,   352,   224,  -411,  1440,  1440,
      71,  1440,  -411,  -411,  -411,  -411,   185,  1288,   476,  -411,
    -411,  -411,    78,  -411,  -411,   230,    71,  -411,    43,  1392,
     282,   332,   284,   354,   804,   286,   347,   350,   289,  1392,
     353,   356,   360,  -411,   361,  -411,  -411,  -411,  -411,   726,
    -411,  -411,  -411,  -411,  -411,  1088,   345,   348,  -411,   110,
    1440,   357,   521,  -411,  1392,   292,  -411,  -411,  1392,  1392,
    -411,  1392,  1392,  1392,  -411,   547,    79,  1392,  1392,  -411,
    -411,    79,  -411,  1392,  1392,  1392,  1392,  1392,  1392,  1392,
    1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,  1392,
    1392,  1392,  -411,    49,  -411,   196,   105,   567,  -411,  -411,
    -411,  -411,  -411,   470,  -411,  1022,  -411,  -411,    71,   230,
      71,   366,  -411,  -411,   359,  1392,  -411,  1392,  1392,  1440,
    -411,   364,   365,  -411,  -411,   371,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  1392,  1392,  -411,  -411,  -411,   372,
     367,  -411,   804,   318,   960,   960,   355,   960,   960,   804,
    1392,  -411,  -411,  -411,  -411,  -411,  -411,  1392,   274,    71,
     521,  -411,  -411,  1413,   369,   375,   376,   381,   117,  1440,
     382,   313,  -411,   126,   386,  -411,  -411,  -411,  -411,   161,
     161,   142,   142,   122,   122,   122,   122,   108,   108,   179,
     306,   311,   309,   272,   285,  -411,  -411,  -411,  -411,   403,
    -411,  -411,   230,    71,  -411,    28,  -411,  -411,  -411,   389,
     393,  -411,  -411,  1361,   396,  -411,  -411,  -411,  -411,   407,
    -411,   960,  -411,   361,   397,   470,  -411,   399,   401,  -411,
    -411,  -411,   412,  1440,   382,  -411,  -411,  -411,  -411,  -411,
     406,  1392,  -411,  -411,  1392,  -411,   420,   313,  -411,  -411,
    -411,  1392,  -411,  -411,  -411,    49,  -411,  -411,  1392,  -411,
     408,   804,   429,   804,   804,   414,  -411,   382,   415,   131,
    1392,  -411,  -411,  -411,   119,  1392,   387,  1392,  -411,  -411,
     382,  -411,  -411,  -411,   419,   424,   427,   804,  -411,  -411,
    -411,  -411,   804,  -411,  -411
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     258,     3,     2,   182,     0,   180,     0,     0,   154,   153,
     225,   189,   160,   159,   156,   157,   155,   262,   158,   161,
       0,   162,    21,     0,   190,    19,    20,     0,   259,   136,
     138,   140,   145,     0,   144,   147,   151,   149,   141,   286,
     170,     0,   150,   172,   139,   148,     0,     0,    15,   203,
       0,     0,     0,     0,   181,   187,     2,    22,   191,     0,
     193,   263,     0,     0,    25,     0,    23,     1,   183,   162,
     152,   137,   143,   146,     0,   167,   276,     0,   287,     0,
     278,   203,   171,   290,     0,     0,   221,     0,   162,     0,
     280,     0,   202,   204,     2,     0,     0,   179,   188,   185,
     192,     0,     0,    24,   184,     0,   142,     0,     0,   277,
     169,     0,     0,   256,   257,     0,   249,   250,     0,   270,
     212,   210,     9,    11,    10,    12,     0,    49,     0,    48,
       0,    50,    47,     0,     0,     0,     0,     0,     0,     0,
      14,     0,   264,    13,    16,     4,     5,     6,     7,     8,
      26,    18,    39,    64,     0,    45,    46,    66,    67,    71,
      74,    77,    82,    85,    87,    89,    91,    93,    95,   109,
     279,     0,     0,   231,   247,   248,     0,   235,   292,   291,
     290,     0,   233,     0,     0,   164,     0,     0,   222,   223,
     284,   206,   280,   281,   197,   208,     0,   175,     0,   203,
       0,   203,   186,   165,   166,   168,   276,     0,    95,    97,
     215,   213,     0,    37,   211,   254,     0,   255,     0,   260,
     154,     0,   153,     0,   270,   160,     0,     0,   156,   270,
       0,     0,    21,   107,   271,   121,   110,   111,   112,   270,
     113,   114,   115,   116,   135,     0,     0,     0,    43,     0,
     282,     0,   280,    42,     0,   264,    40,    41,   260,   260,
      62,   260,   260,     0,   265,     0,     0,     0,   260,    35,
      36,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,   174,   229,   235,     0,     0,   236,   237,
     293,   232,   226,     0,   230,   290,   220,   163,     0,   246,
       0,   240,   241,   224,     0,     0,   196,     0,   278,   203,
     205,     0,     0,   217,   218,   288,    99,   103,   104,   100,
     101,   102,   105,   106,     0,     0,   214,   253,   251,   261,
       0,   133,   270,     0,   270,     0,     0,     0,     0,   270,
       0,   122,   119,   120,    17,   283,   195,     0,   284,     0,
     280,   194,    63,     0,     0,     0,     0,     0,     0,     0,
     266,   268,    33,     0,     0,    34,    69,    68,    70,    73,
      72,    75,    76,    79,    78,    80,    81,    83,    84,    86,
      88,    90,    92,     0,    94,   173,   228,   238,   239,   235,
     234,   227,   244,     0,   245,     0,   201,   207,   209,     0,
       0,   177,   176,   289,     0,    98,    38,   252,   118,     0,
     131,   274,   132,   126,     0,     0,   134,     0,     0,   117,
     108,    65,     0,     0,   266,    32,    31,    29,    30,    55,
       0,   260,   267,    51,     0,   269,    58,   268,    56,    27,
      28,     0,   243,   242,   200,   199,   219,   216,     0,   275,
       0,   270,     0,   270,   270,     0,    52,   266,     0,     0,
       0,    57,    96,   198,     0,   270,   123,     0,   125,   128,
     266,    53,    61,    59,     0,     0,     0,   270,   127,    54,
      60,   129,   270,   124,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -411,     0,    33,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,   138,  -411,  -411,   163,  -411,   -95,  -411,  -411,  -411,
    -411,    96,  -411,  -411,  -411,  -411,   203,   -14,    40,    45,
     -46,    41,   176,   180,   181,   183,   184,   -77,   -48,   192,
    -411,    44,  -296,    74,  -411,   130,   -37,  -411,  -411,  -329,
    -411,  -411,  -411,  -411,  -411,   442,    39,   132,   -19,    75,
     136,  -411,    13,  -411,  -411,  -411,   377,    17,  -411,   -79,
     -45,    -3,   430,  -347,   -68,  -181,  -411,   -52,  -411,   279,
      73,   374,  -411,  -202,  -411,  -411,  -411,  -411,  -411,  -411,
     315,   186,  -411,  -411,   312,  -411,    93,  -411,  -411,   288,
    -411,  -411,  -411,  -224,  -411,   245,  -410,    61,  -221,  -411,
    -411,  -411,   197,   -74,  -411,  -411,   -64,  -411,  -165,  -411
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,    22,   144,   145,   146,   147,   148,   149,    23,
     150,   151,    25,    26,    89,   152,   339,   153,   154,   155,
     264,   370,   445,   446,   442,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   208,   209,   233,
     334,   234,   170,   235,   236,   237,   238,   239,   240,   424,
     241,   421,   242,   243,    28,    29,   244,    31,    32,   245,
      34,    35,    36,    37,    38,    74,    75,   177,    40,    41,
      54,    42,    43,   251,   425,   193,   194,    91,    92,    93,
     178,   121,   109,   211,   325,    45,    46,    47,   179,   180,
     181,   182,   298,   299,   188,   311,   312,   183,    78,   116,
     117,   118,    48,   340,    62,   265,   443,   448,   246,   247,
     460,   110,   171,   316,   356,   196,    79,   414,   184,   301
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   398,    55,   168,    51,   324,    57,    21,   346,   314,
      98,   192,   111,   212,    73,   302,   195,    39,   427,   428,
      60,    53,   440,   104,   466,     1,     1,    69,    21,   172,
      56,    56,   169,    21,   364,   365,    56,   366,   367,    30,
      70,    51,   120,   254,   374,    39,     1,    85,     6,    88,
      76,    56,    55,   255,   202,    84,    64,   481,    82,    69,
     252,   308,    85,   266,    85,    55,   267,    30,   268,   105,
     489,    73,   100,    44,   120,    33,   112,   113,    56,    56,
      86,    88,     1,    21,    85,    56,   465,    56,   106,    69,
      21,   335,   459,    68,   290,    21,    55,   269,   270,   271,
      99,    44,    70,    33,     6,    51,    11,   191,    60,   336,
     114,   192,   215,   192,   291,   217,   303,   185,   303,    21,
     189,     1,   206,   350,    90,   280,    94,    61,    21,   281,
     335,    57,   350,    49,   203,   304,    63,   396,    24,   350,
     401,   354,    24,     6,   350,    58,    50,   321,   439,   322,
     485,    95,   232,   282,   283,   449,    90,    73,   176,    66,
     483,   278,   279,    27,   276,    67,    24,    52,   368,   277,
      59,    24,   249,   360,   484,   273,    21,   314,   361,    24,
      21,     1,   355,    77,   274,   275,    56,   309,    24,    66,
      51,    27,    51,   295,    83,   107,    27,   371,    88,    88,
      69,    88,   102,    66,    52,   108,   297,    53,    77,    82,
      87,   456,    80,   100,    81,  -286,   337,   468,   113,   307,
     168,    24,   284,   285,    21,   101,    73,   103,    24,    68,
    -285,   111,  -285,    58,   383,   384,   385,   386,    97,    21,
     115,   168,   318,    24,   319,    21,    27,   186,   395,   169,
      88,   114,    85,    27,   486,   176,   119,   232,   200,   376,
     377,   378,   206,    64,   250,    88,   187,   410,    52,     1,
     169,   197,   232,    90,    90,   216,    90,   198,   107,   360,
      77,   360,    56,     3,   451,   350,   218,  -286,   108,   199,
      55,   201,   447,   204,   358,   371,   219,     5,   343,   210,
     213,   252,   258,    51,   259,    21,   261,   359,   402,   262,
     404,   373,   263,   351,    24,   286,   379,   380,    24,    88,
     399,    56,     3,   381,   382,   387,   388,   287,    24,   248,
      24,   444,   289,   253,   393,   288,     5,   256,   257,    27,
     300,   260,    21,    27,    21,    21,   359,    21,    21,    21,
     310,   292,   293,    52,   305,    52,   306,   272,    85,    85,
      85,   315,   317,    88,   341,   252,   342,   344,   447,    88,
     345,    85,   349,   347,   350,   232,   348,   352,   353,   405,
     176,   115,   232,    24,   413,   335,   250,   426,   357,   423,
     406,   423,   423,   168,    90,   411,   412,   419,   417,   210,
     435,   250,   441,   452,   372,   309,   436,   437,    27,   375,
     473,   213,   438,   297,     1,    52,   418,   450,   454,     2,
       3,    21,   169,   429,   455,    51,   457,   458,   461,  -284,
     463,   190,   464,    88,     5,    99,     6,   467,   470,   477,
     475,    24,   462,    24,     7,   480,   482,    85,   490,   487,
     213,   213,    55,   213,   213,   213,   491,   362,   492,   434,
     213,    21,   389,    21,    21,   423,    52,   390,    27,   391,
      71,   403,   392,     1,   420,   394,   422,   320,     2,     3,
      96,   250,   205,   250,   250,   214,   326,    21,   469,   400,
       4,   296,    21,     5,   232,     6,   232,   232,   453,   250,
     363,   313,   474,     7,   290,   250,   338,   407,   471,   408,
     327,   328,   329,   330,   331,   409,     0,   332,   333,     0,
     232,    52,   432,    52,   291,   232,   415,   416,     0,    56,
       3,     0,     0,     0,    52,   476,     0,   478,   479,  -284,
       0,   358,   430,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   359,    56,     0,   250,     0,     0,
     431,   493,     0,    24,     0,     0,   494,   369,   310,   250,
       1,   122,   123,   124,   125,    56,   126,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,   128,    52,   129,
     130,     0,   131,     0,   132,     0,     0,     0,     0,     8,
     133,     0,     9,    10,    11,   210,     0,     0,    12,     0,
      52,    13,     0,     0,    14,    15,   134,   135,     0,   136,
      16,     0,   137,    17,    18,    19,   138,     0,   139,     0,
     140,     0,     0,   213,   141,     0,   142,     0,     0,     0,
       0,     0,   143,   472,     0,     0,     0,     0,     0,     0,
     397,     1,   122,   123,   124,   125,    56,   126,     0,   127,
       1,     0,     0,     0,     0,     2,     3,   119,   128,   488,
     129,   130,     0,   131,     0,   132,     0,   190,  -272,     0,
       5,   133,     6,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,   134,   135,     0,
     220,   221,     0,   222,    10,    11,   223,   138,   224,   225,
       0,   140,    13,   226,   227,   228,    15,   142,     0,     0,
     229,    16,   230,   143,    17,    18,    19,   231,    20,     1,
     122,   123,   124,   125,    56,   126,     0,   127,     0,     0,
       0,     0,     0,     0,     0,   119,   128,     0,   129,   130,
       0,   131,     0,   132,     0,     0,  -273,     0,     0,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,     0,   220,   221,
       0,   222,    10,    11,   223,   138,   224,   225,     0,   140,
      13,   226,   227,   228,    15,   142,     0,     0,   229,    16,
     230,   143,    17,    18,    19,   231,    20,     1,   122,   123,
     124,   125,    56,   126,     0,   127,     0,     0,     0,     0,
       0,     0,     0,   119,   128,     0,   129,   130,     0,   131,
       0,   132,     0,     0,     0,     0,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,     0,   220,   221,     0,   222,
      10,    11,   223,   138,   224,   225,     0,   140,    13,   226,
     227,   228,    15,   142,     0,     0,   229,    16,   230,   143,
      17,    18,    19,   231,    20,     1,     0,     0,     0,     0,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,    11,
       0,     0,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,     0,     0,     0,    16,     0,     0,    17,    18,
      19,     0,    20,     1,   122,   123,   124,   125,    56,   126,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     128,     0,   129,   130,     0,   131,     0,   132,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   220,     0,     0,   222,    10,    11,     0,   138,
       0,   225,     0,   140,    13,     1,     0,   228,    15,   142,
       2,     3,     0,    16,     0,   143,    17,    18,    19,     0,
       0,     0,     4,     0,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,   173,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,    11,
       0,     0,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     1,   174,   175,     0,    16,     2,     3,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
      72,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     9,    10,    11,     0,     0,     0,    12,
       0,     0,    13,     1,     0,    14,    15,     0,     2,     3,
       0,    16,     0,     0,    17,    18,    19,     0,  -284,     0,
     190,     0,     0,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     9,    10,    11,     0,     0,
       0,    12,     0,     0,    13,     1,     0,    14,    15,     0,
       2,     3,     0,    16,     0,     0,    17,    18,    19,     0,
       0,     0,     4,     0,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,   294,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     9,    10,    11,
       0,     0,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,     0,     0,     0,    16,     0,     0,    17,    18,
      19,     1,   122,   123,   124,   125,    56,   126,     0,   127,
       0,     0,     0,     0,     0,     0,     0,   207,   128,     0,
     129,   130,     0,   131,     0,   132,     0,     0,   323,     0,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
     136,     0,     0,   137,     0,     0,     0,   138,     0,   139,
       0,   140,     0,     0,     0,   141,     0,   142,     0,     0,
       0,     0,     0,   143,     1,   122,   123,   124,   125,    56,
     126,     0,   127,     0,     0,     0,     0,     0,     0,     0,
     207,   128,     0,   129,   130,     0,   131,     0,   132,     0,
       0,     0,     0,     0,   133,     1,   122,   123,   124,   125,
      56,   126,     0,   127,     0,     0,     0,     0,     0,     0,
     134,   135,   128,   136,   129,   130,   137,   131,     0,   132,
     138,    56,   139,     0,   140,   133,     0,     0,   141,     0,
     142,     0,     0,   433,     0,     0,   143,     0,     0,     0,
       0,   134,   135,     0,   136,     0,     0,   137,    56,     0,
       0,   138,     0,   139,     0,   140,     0,     0,     0,   141,
       0,   142,     0,     0,     0,     8,     0,   143,     9,    10,
      11,     0,     0,     0,    12,     0,     0,    13,     0,     0,
      14,    15,     0,     0,     0,     0,    16,     0,     0,    17,
      18,    19,     8,     0,     0,     9,    10,    11,     0,     0,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
       0,     0,     0,    16,     0,     0,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,   297,     5,    80,     4,   207,     6,     7,   229,   190,
      55,    90,    76,   108,    33,   180,    90,     0,   347,   348,
       7,     4,   369,    68,   434,     3,     3,    27,    28,    81,
       8,     8,    80,    33,   258,   259,     8,   261,   262,     0,
      27,    41,    79,    59,   268,    28,     3,    47,    25,    49,
      33,     8,    55,    69,    99,    33,    33,   467,    41,    59,
     128,    33,    62,    15,    64,    68,    18,    28,    20,    13,
     480,    90,    59,     0,   111,     0,    33,    77,     8,     8,
      47,    81,     3,    83,    84,     8,   433,     8,    32,    89,
      90,    13,   421,    23,    28,    95,    99,    49,    50,    51,
      23,    28,    89,    28,    25,   105,    57,    90,    95,    31,
      77,   190,   112,   192,    48,   115,    13,    84,    13,   119,
      87,     3,   105,    13,    49,    17,     8,    33,   128,    21,
      13,   131,    13,    20,   101,    32,    81,    32,     0,    13,
     305,    31,     4,    25,    13,     7,    33,   199,    31,   201,
      31,    33,   119,    45,    46,    29,    81,   176,    83,    21,
      29,    39,    40,     0,    22,     0,    28,     4,   263,    27,
       7,    33,   128,   252,   470,    14,   176,   358,   252,    41,
     180,     3,   250,    12,    23,    24,     8,   187,    50,    51,
     190,    28,   192,   176,    19,    10,    33,   265,   198,   199,
     200,   201,    82,    65,    41,    20,    10,   190,    12,   192,
      47,   413,    18,   200,    20,    19,   216,   441,   218,   186,
     297,    83,    43,    44,   224,    62,   245,    64,    90,    23,
      18,   295,    20,    95,   280,   281,   282,   283,    31,   239,
      77,   318,    18,   105,    20,   245,    83,    84,   293,   297,
     250,   218,   252,    90,   475,   180,    19,   224,    95,   273,
     274,   275,   245,    33,   128,   265,    12,   319,   105,     3,
     318,    31,   239,   198,   199,   112,   201,    13,    10,   358,
      12,   360,     8,     9,    12,    13,    13,    19,    20,    20,
     293,    20,   371,    32,    20,   363,    20,    23,   224,   107,
     108,   369,    20,   303,    20,   305,    20,    33,   308,    20,
     310,   267,    20,   239,   176,     9,   276,   277,   180,   319,
     303,     8,     9,   278,   279,   284,   285,    16,   190,   126,
     192,    18,    47,   130,   290,    26,    23,   134,   135,   176,
      32,   138,   342,   180,   344,   345,    33,   347,   348,   349,
     187,    29,    31,   190,    12,   192,    30,   154,   358,   359,
     360,    10,    10,   363,    32,   433,    12,    20,   447,   369,
      20,   371,    12,    20,    13,   342,    20,    32,    30,    13,
     305,   218,   349,   245,    13,    13,   250,    32,    31,   345,
      31,   347,   348,   470,   319,    31,    31,    79,    31,   207,
      31,   265,    20,   403,   266,   405,    31,    31,   245,   271,
     455,   219,    31,    10,     3,   252,   342,    31,    29,     8,
       9,   421,   470,   349,    31,   425,    30,    20,    31,    18,
      31,    20,    31,   433,    23,    23,    25,    31,    18,    10,
      32,   303,   425,   305,    33,    31,    31,   447,    29,    62,
     258,   259,   455,   261,   262,   263,    32,   254,    31,   363,
     268,   461,   286,   463,   464,   421,   303,   287,   305,   288,
      28,   308,   289,     3,   344,   291,   344,   198,     8,     9,
      50,   345,   105,   347,   348,   111,    10,   487,   444,   303,
      20,   176,   492,    23,   461,    25,   463,   464,   405,   363,
     255,   189,   458,    33,    28,   369,   218,   315,   447,   317,
      34,    35,    36,    37,    38,   318,    -1,    41,    42,    -1,
     487,   358,   359,   360,    48,   492,   334,   335,    -1,     8,
       9,    -1,    -1,    -1,   371,   461,    -1,   463,   464,    18,
      -1,    20,   350,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,     8,    -1,   421,    -1,    -1,
     357,   487,    -1,   425,    -1,    -1,   492,    20,   405,   433,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,   425,    22,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    52,
      33,    -1,    55,    56,    57,   413,    -1,    -1,    61,    -1,
     447,    64,    -1,    -1,    67,    68,    49,    50,    -1,    52,
      73,    -1,    55,    76,    77,    78,    59,    -1,    61,    -1,
      63,    -1,    -1,   441,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    75,   451,    -1,    -1,    -1,    -1,    -1,    -1,
      83,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
       3,    -1,    -1,    -1,    -1,     8,     9,    19,    20,   477,
      22,    23,    -1,    25,    -1,    27,    -1,    20,    30,    -1,
      23,    33,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,    23,
      -1,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    22,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    -1,    80,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    59,
      -1,    61,    -1,    63,    64,     3,    -1,    67,    68,    69,
       8,     9,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    67,
      68,     3,    70,    71,    -1,    73,     8,     9,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    64,     3,    -1,    67,    68,    -1,     8,     9,
      -1,    73,    -1,    -1,    76,    77,    78,    -1,    18,    -1,
      20,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    64,     3,    -1,    67,    68,    -1,
       8,     9,    -1,    73,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      22,    23,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    75,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    22,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    20,    52,    22,    23,    55,    25,    -1,    27,
      59,     8,    61,    -1,    63,    33,    -1,    -1,    67,    -1,
      69,    -1,    -1,    20,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    55,     8,    -1,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    -1,    52,    -1,    75,    55,    56,
      57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,
      77,    78,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    20,    23,    25,    33,    52,    55,
      56,    57,    61,    64,    67,    68,    73,    76,    77,    78,
      80,    85,    86,    93,    95,    96,    97,    98,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   151,
     152,   153,   155,   156,   164,   169,   170,   171,   186,    20,
      33,    85,    98,   151,   154,   155,     8,    85,    95,    98,
     146,    33,   188,    81,    33,    85,    95,     0,    23,    85,
     146,   139,    32,   142,   149,   150,   151,    12,   182,   200,
      18,    20,   151,    19,    33,    85,    86,    98,    85,    98,
     143,   161,   162,   163,     8,    33,   156,    31,   154,    23,
     146,    98,    82,    98,   154,    13,    32,    10,    20,   166,
     195,   200,    33,    85,    86,    98,   183,   184,   185,    19,
     130,   165,     4,     5,     6,     7,     9,    11,    20,    22,
      23,    25,    27,    33,    49,    50,    52,    55,    59,    61,
      63,    67,    69,    75,    87,    88,    89,    90,    91,    92,
      94,    95,    99,   101,   102,   103,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     126,   196,   161,    32,    70,    71,   143,   151,   164,   172,
     173,   174,   175,   181,   202,    86,    98,    12,   178,    86,
      20,   151,   153,   159,   160,   197,   199,    31,    13,    20,
      98,    20,   154,    86,    32,   150,   151,    19,   121,   122,
     123,   167,   100,   123,   165,    85,    98,    85,    13,    20,
      52,    53,    55,    58,    60,    61,    65,    66,    67,    72,
      74,    79,    86,   123,   125,   127,   128,   129,   130,   131,
     132,   134,   136,   137,   140,   143,   192,   193,   110,   125,
     144,   157,   158,   110,    59,    69,   110,   110,    20,    20,
     110,    20,    20,    20,   104,   189,    15,    18,    20,    49,
      50,    51,   110,    14,    23,    24,    22,    27,    39,    40,
      17,    21,    45,    46,    43,    44,     9,    16,    26,    47,
      28,    48,    29,    31,    32,   151,   174,    10,   176,   177,
      32,   203,   202,    13,    32,    12,    30,    86,    33,    85,
      98,   179,   180,   178,   159,    10,   197,    10,    18,    20,
     163,   161,   161,    30,   167,   168,    10,    34,    35,    36,
      37,    38,    41,    42,   124,    13,    31,    85,   183,   100,
     187,    32,    12,   127,    20,    20,   192,    20,    20,    12,
      13,   127,    32,    30,    31,   158,   198,    31,    20,    33,
     153,   197,   110,   189,   187,   187,   187,   187,   100,    20,
     105,   158,    95,   125,   187,    95,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   115,   115,   116,
     117,   118,   119,   125,   120,   154,    32,    83,   126,   151,
     175,   202,    85,    98,    85,    13,    31,   123,   123,   196,
     161,    31,    31,    13,   201,   123,   123,    31,   127,    79,
     129,   135,   141,   125,   133,   158,    32,   133,   133,   127,
     123,   110,    98,    20,   105,    31,    31,    31,    31,    31,
     157,    20,   108,   190,    18,   106,   107,   153,   191,    29,
      31,    12,    85,   180,    29,    31,   167,    30,    20,   133,
     194,    31,   151,    31,    31,   157,   190,    31,   187,   125,
      18,   191,   123,   154,   125,    32,   127,    10,   127,   127,
      31,   190,    31,    29,   126,    31,   192,    62,   123,   190,
      29,    32,    31,   127,   127
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
     173,   173,   173,   174,   174,   175,   175,   175,   176,   177,
     178,   179,   179,   180,   180,   180,   180,   181,   181,   182,
     183,   183,   184,   185,   185,   185,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   203,   203
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
       2,     1,     2,     1,     3,     1,     2,     2,     2,     2,
       2,     1,     3,     3,     2,     2,     1,     1,     1,     2,
       1,     3,     4,     3,     2,     2,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1
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
#line 148 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(class_name, 1, (yyvsp[0]. treenode )); }
#line 1920 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 156 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(identifier, 1, (yyvsp[0]. treenode )); }
#line 1926 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 160 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1932 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 161 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1938 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 162 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1944 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 163 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1950 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 164 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(literal, 1, (yyvsp[0]. treenode )); }
#line 1956 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(integer_literal, 1, (yyvsp[0]. treenode )); }
#line 1962 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 172 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(character_literal, 1, (yyvsp[0]. treenode )); }
#line 1968 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 176 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(floating_literal, 1, (yyvsp[0]. treenode )); }
#line 1974 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 180 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(string_literal, 1, (yyvsp[0]. treenode )); }
#line 1980 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 184 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(boolean_literal, 1, (yyvsp[0]. treenode )); }
#line 1986 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 185 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(boolean_literal, 1, (yyvsp[0]. treenode )); }
#line 1992 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 193 "120gram.y" /* yacc.c:1646  */
    {  root = tree_node(translation_unit, 1, (yyvsp[0]. treenode )); (yyval. treenode ) = root; }
#line 1998 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 201 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 1, (yyvsp[0]. treenode )); }
#line 2004 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 202 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2010 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 203 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(primary_expression, 1, (yyvsp[0]. treenode )); }
#line 2016 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 207 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(id_expression, 1, (yyvsp[0]. treenode )); }
#line 2022 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(id_expression, 1, (yyvsp[0]. treenode )); }
#line 2028 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 212 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(unqualified_id, 1, (yyvsp[0]. treenode )); }
#line 2034 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 213 "120gram.y" /* yacc.c:1646  */
    { yyerror("C++ destructors not supported"); (yyval. treenode ) = NULL; }
#line 2040 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(qualified_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2046 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 221 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(nested_name_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2052 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(nested_name_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2058 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 226 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 1, (yyvsp[0]. treenode )); }
#line 2064 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2070 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2076 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 229 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2082 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 230 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2088 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 231 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2094 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 232 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2100 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 233 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2106 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 234 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2112 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 235 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2118 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 236 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(postfix_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2124 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 240 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(expression_list, 1, (yyvsp[0]. treenode )); }
#line 2130 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 241 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(expression_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2136 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 245 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2142 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 246 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2148 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 247 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2154 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 248 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2160 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 249 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2166 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 250 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(unary_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2172 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 251 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2178 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 252 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_expression, 1, (yyvsp[0]. treenode )); }
#line 2184 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2190 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 257 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2196 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2202 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 259 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(unary_operator, 1, (yyvsp[0]. treenode )); }
#line 2208 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 263 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2214 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 264 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(new_expression, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2220 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 265 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2226 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 266 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_expression, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2232 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 270 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_placement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2238 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 274 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_type_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2244 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 278 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2250 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 279 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(new_declarator, 1, (yyvsp[0]. treenode )); }
#line 2256 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 283 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(direct_new_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2262 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 284 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_new_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2268 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 288 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(new_initializer, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2274 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 292 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(delete_expression, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2280 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 293 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(delete_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2286 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 297 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(cast_expression, 1, (yyvsp[0]. treenode )); }
#line 2292 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 298 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(cast_expression, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2298 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 302 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(pm_expression, 1, (yyvsp[0]. treenode )); }
#line 2304 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 306 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(multiplicative_expression, 1, (yyvsp[0]. treenode )); }
#line 2310 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 307 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2316 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 308 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2322 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 309 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(multiplicative_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2328 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 313 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(additive_expression, 1, (yyvsp[0]. treenode )); }
#line 2334 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 314 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(additive_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2340 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 315 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(additive_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2346 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(shift_expression, 1, (yyvsp[0]. treenode )); }
#line 2352 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 320 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(shift_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2358 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 321 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(shift_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2364 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 325 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(relational_expression, 1, (yyvsp[0]. treenode )); }
#line 2370 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 326 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2376 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 327 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2382 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 328 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2388 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 329 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(relational_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2394 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 333 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(equality_expression, 1, (yyvsp[0]. treenode )); }
#line 2400 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 334 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(equality_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2406 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 335 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(equality_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2412 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 339 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(and_expression, 1, (yyvsp[0]. treenode )); }
#line 2418 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 340 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(and_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2424 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 344 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(exclusive_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2430 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 345 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(exclusive_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2436 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 349 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(inclusive_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2442 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 350 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(inclusive_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2448 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 354 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(logical_and_expression, 1, (yyvsp[0]. treenode )); }
#line 2454 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 355 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(logical_and_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2460 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 359 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(logical_or_expression, 1, (yyvsp[0]. treenode )); }
#line 2466 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 360 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(logical_or_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2472 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 365 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(conditional_expression, 1, (yyvsp[0]. treenode )); }
#line 2478 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 366 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(conditional_expression, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2484 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 371 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_expression, 1, (yyvsp[0]. treenode )); }
#line 2490 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 372 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(assignment_expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2496 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 376 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2502 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 377 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2508 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 378 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2514 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 379 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2520 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 380 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2526 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 381 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2532 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 382 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2538 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 383 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(assignment_operator, 1, (yyvsp[0]. treenode )); }
#line 2544 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 387 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression, 1, (yyvsp[0]. treenode )); }
#line 2550 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 388 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2556 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 393 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(constant_expression, 1, (yyvsp[0]. treenode )); }
#line 2562 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 402 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2568 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 403 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2574 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 404 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2580 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 405 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2586 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 406 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2592 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 407 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2598 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 408 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement, 1, (yyvsp[0]. treenode )); }
#line 2604 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 412 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(labeled_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2610 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 413 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(labeled_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2616 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 417 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_statement, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2622 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 421 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(compound_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2628 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 425 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(statement_seq, 1, (yyvsp[0]. treenode )); }
#line 2634 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 426 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(statement_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2640 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 430 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(selection_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2646 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 431 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(selection_statement, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2652 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 432 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(selection_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2658 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 436 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(condition, 1, (yyvsp[0]. treenode )); }
#line 2664 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 437 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(condition, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2670 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 441 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2676 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 442 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 7, (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2682 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 443 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(iteration_statement, 8, (yyvsp[-7]. treenode ), (yyvsp[-6]. treenode ), (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2688 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 447 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(for_init_statement, 1, (yyvsp[0]. treenode )); }
#line 2694 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 448 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(for_init_statement, 1, (yyvsp[0]. treenode )); }
#line 2700 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 452 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(jump_statement, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2706 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 453 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(jump_statement, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2712 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 457 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(declaration_statement, 1, (yyvsp[0]. treenode )); }
#line 2718 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 465 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration_seq, 1, (yyvsp[0]. treenode )); }
#line 2724 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 466 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declaration_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2730 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 470 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration, 1, (yyvsp[0]. treenode )); }
#line 2736 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 471 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(declaration, 1, (yyvsp[0]. treenode )); }
#line 2742 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 475 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(block_declaration, 1, (yyvsp[0]. treenode )); }
#line 2748 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 476 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(block_declaration, 1, (yyvsp[0]. treenode )); }
#line 2754 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 480 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(simple_declaration, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2760 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 481 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(simple_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2766 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 485 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(decl_specifier, 1, (yyvsp[0]. treenode )); }
#line 2772 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 489 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(decl_specifier_seq, 1, (yyvsp[0]. treenode )); }
#line 2778 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 490 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(decl_specifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2784 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 494 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2790 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 495 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2796 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 496 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2802 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 497 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2808 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 501 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2814 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 502 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(simple_type_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2820 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 503 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2826 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 504 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2832 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 505 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2838 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 506 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2844 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 507 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2850 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 508 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2856 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 509 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2862 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 510 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2868 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 511 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(simple_type_specifier, 1, (yyvsp[0]. treenode )); }
#line 2874 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 515 "120gram.y" /* yacc.c:1646  */
    {   (yyval. treenode ) = tree_node(type_name, 1, (yyvsp[0]. treenode )); }
#line 2880 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 519 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2886 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 520 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2892 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 521 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(elaborated_type_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2898 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 525 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(using_directive, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2904 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 533 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator_list, 1, (yyvsp[0]. treenode )); }
#line 2910 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 534 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2916 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 538 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(init_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2922 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 542 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator, 1, (yyvsp[0]. treenode )); }
#line 2928 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 543 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2934 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 547 "120gram.y" /* yacc.c:1646  */
    {  (yyval. treenode ) = tree_node(direct_declarator, 1, (yyvsp[0]. treenode )); }
#line 2940 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 548 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2946 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 549 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2952 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 550 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2958 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 551 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2964 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 552 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 6, (yyvsp[-5]. treenode ), (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2970 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 553 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2976 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 554 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2982 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 558 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 1, (yyvsp[0]. treenode )); }
#line 2988 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 559 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 2994 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 560 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 1, (yyvsp[0]. treenode )); }
#line 3000 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 561 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3006 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 562 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3012 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 563 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3018 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 564 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ptr_operator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3024 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 568 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier_seq, 1, (yyvsp[0]. treenode )); }
#line 3030 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 569 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3036 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 573 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(cv_qualifier, 1, (yyvsp[0]. treenode )); }
#line 3042 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 577 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 1, (yyvsp[0]. treenode )); }
#line 3048 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 578 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3054 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 579 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3060 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 580 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declarator_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3066 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 584 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3072 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 588 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_specifier_seq, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3078 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 592 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3084 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 593 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 1, (yyvsp[0]. treenode )); }
#line 3090 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 597 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 5, (yyvsp[-4]. treenode ), (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3096 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 598 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3102 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 599 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3108 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 600 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3114 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 604 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_clause, 1, (yyvsp[0]. treenode )); }
#line 3120 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 605 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3126 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 609 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_list, 1, (yyvsp[0]. treenode )); }
#line 3132 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 610 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3138 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 614 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3144 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 615 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3150 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 616 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3156 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 617 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(parameter_declaration, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3162 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 621 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_definition, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3168 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 622 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_definition, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3174 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 626 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(function_body, 1, (yyvsp[0]. treenode )); }
#line 3180 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 630 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3186 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 631 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3192 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 635 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 1, (yyvsp[0]. treenode )); }
#line 3198 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 636 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3204 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 637 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_clause, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3210 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 641 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_list, 1, (yyvsp[0]. treenode )); }
#line 3216 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 642 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3222 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 650 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_specifier, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3228 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 654 "120gram.y" /* yacc.c:1646  */
    { typenametable_insert((yyvsp[0]. treenode )->kids[0]->leaf->text, CLASS_NAME); (yyval. treenode ) = tree_node(class_head, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3234 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 655 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3240 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 656 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3246 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 657 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_head, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3252 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 661 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(class_key, 1, (yyvsp[0]. treenode )); }
#line 3258 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 665 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3264 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 666 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3270 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 670 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3276 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 671 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3282 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 672 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3288 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 673 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 1, (yyvsp[0]. treenode )); }
#line 3294 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 674 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declaration, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3300 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 683 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 1, (yyvsp[0]. treenode )); }
#line 3306 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 684 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3312 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 685 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_declarator, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3318 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 699 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(constant_initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3324 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 708 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_clause, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3330 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 712 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier_list, 1, (yyvsp[0]. treenode )); }
#line 3336 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 713 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3342 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 717 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3348 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 718 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3354 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 719 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3360 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 720 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(base_specifier, 1, (yyvsp[0]. treenode )); }
#line 3366 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 724 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(access_specifier, 1, (yyvsp[0]. treenode )); }
#line 3372 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 725 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(access_specifier, 1, (yyvsp[0]. treenode )); }
#line 3378 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 733 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ctor_initializer, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3384 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 737 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_list, 1, (yyvsp[0]. treenode )); }
#line 3390 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 738 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_list, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3396 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 742 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer, 4, (yyvsp[-3]. treenode ), (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3402 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 746 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 3, (yyvsp[-2]. treenode ), (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3408 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 747 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3414 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 748 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 2, (yyvsp[-1]. treenode ), (yyvsp[0]. treenode )); }
#line 3420 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 749 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 1, (yyvsp[0]. treenode )); }
#line 3426 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 750 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(mem_initializer_id, 1, (yyvsp[0]. treenode )); }
#line 3432 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 776 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3438 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 777 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(declaration_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3444 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 781 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3450 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 782 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_list_opt, 1, (yyvsp[0]. treenode )); }
#line 3456 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 786 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3462 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 787 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(COLONCOLON_opt, 1, (yyvsp[0]. treenode )); }
#line 3468 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 791 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3474 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 792 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_placement_opt, 1, (yyvsp[0]. treenode )); }
#line 3480 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 796 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3486 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 797 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3492 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 801 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3498 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 802 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(new_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3504 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 806 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3510 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 807 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(expression_opt, 1, (yyvsp[0]. treenode )); }
#line 3516 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 811 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3522 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 812 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(statement_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3528 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 816 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3534 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 817 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(condition_opt, 1, (yyvsp[0]. treenode )); }
#line 3540 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 821 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3546 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 822 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3552 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 827 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3558 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 828 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(constant_expression_opt, 1, (yyvsp[0]. treenode )); }
#line 3564 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 833 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3570 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 834 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(abstract_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3576 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 838 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3582 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 839 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(type_specifier_seq_opt, 1, (yyvsp[0]. treenode )); }
#line 3588 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 843 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3594 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 844 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(direct_abstract_declarator_opt, 1, (yyvsp[0]. treenode )); }
#line 3600 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 848 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3606 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 849 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(ctor_initializer_opt, 1, (yyvsp[0]. treenode )); }
#line 3612 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 853 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3618 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 854 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(COMMA_opt, 1, (yyvsp[0]. treenode )); }
#line 3624 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 858 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3630 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 859 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(member_specification_opt, 1, (yyvsp[0]. treenode )); }
#line 3636 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 863 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = NULL; }
#line 3642 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 864 "120gram.y" /* yacc.c:1646  */
    { (yyval. treenode ) = tree_node(SEMICOLON_opt, 1, (yyvsp[0]. treenode )); }
#line 3648 "120gram.tab.c" /* yacc.c:1646  */
    break;


#line 3652 "120gram.tab.c" /* yacc.c:1646  */
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
