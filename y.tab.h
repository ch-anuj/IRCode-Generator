/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,
    O_BRAC = 259,
    C_BRAC = 260,
    OPEN_BRAC = 261,
    CLOSE_BRAC = 262,
    MAIN = 263,
    THEN = 264,
    PERCENT = 265,
    ENDIF = 266,
    NUM = 267,
    CHARACTER = 268,
    SEMICOLON = 269,
    COLON = 270,
    DOT = 271,
    AMPERSAN = 272,
    PRECENT = 273,
    BACKSLASH = 274,
    ELSE = 275,
    SCAN = 276,
    PRINT = 277,
    INT = 278,
    CHAR = 279,
    FLOAT = 280,
    WHILE = 281,
    GOTO = 282,
    SWITCH = 283,
    VOID = 284,
    BREAK = 285,
    CASE = 286,
    CONTINUE = 287,
    RETURN = 288,
    COMMA = 289,
    LETTER = 290,
    NUMBER = 291,
    INTEGER = 292,
    FLOATING_INT = 293,
    IDENTIFIER = 294,
    Obrac = 295,
    Cbrac = 296,
    EQUALS = 297,
    NOT = 298,
    DO = 299,
    FOR = 300,
    OR = 301,
    EQEQ = 302,
    NEQ = 303,
    G_THAN = 304,
    L_THAN = 305,
    G_EQ = 306,
    L_EQ = 307,
    AND = 308,
    PLUS = 309,
    MINUS = 310,
    MULTIPLY = 311,
    DIVIDE = 312
  };
#endif
/* Tokens.  */
#define IF 258
#define O_BRAC 259
#define C_BRAC 260
#define OPEN_BRAC 261
#define CLOSE_BRAC 262
#define MAIN 263
#define THEN 264
#define PERCENT 265
#define ENDIF 266
#define NUM 267
#define CHARACTER 268
#define SEMICOLON 269
#define COLON 270
#define DOT 271
#define AMPERSAN 272
#define PRECENT 273
#define BACKSLASH 274
#define ELSE 275
#define SCAN 276
#define PRINT 277
#define INT 278
#define CHAR 279
#define FLOAT 280
#define WHILE 281
#define GOTO 282
#define SWITCH 283
#define VOID 284
#define BREAK 285
#define CASE 286
#define CONTINUE 287
#define RETURN 288
#define COMMA 289
#define LETTER 290
#define NUMBER 291
#define INTEGER 292
#define FLOATING_INT 293
#define IDENTIFIER 294
#define Obrac 295
#define Cbrac 296
#define EQUALS 297
#define NOT 298
#define DO 299
#define FOR 300
#define OR 301
#define EQEQ 302
#define NEQ 303
#define G_THAN 304
#define L_THAN 305
#define G_EQ 306
#define L_EQ 307
#define AND 308
#define PLUS 309
#define MINUS 310
#define MULTIPLY 311
#define DIVIDE 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 432 "parser_temp.y" /* yacc.c:1906  */

  struct{
  char val[25];
  int nodeId;
  char ircode[10000];
  }value;

#line 179 "y.tab.h" /* yacc.c:1906  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
