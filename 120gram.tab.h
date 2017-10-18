/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 66 "120gram.y" /* yacc.c:1909  */

  struct tree* treenode;

#line 141 "120gram.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */
