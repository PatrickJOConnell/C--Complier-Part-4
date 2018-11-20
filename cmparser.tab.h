/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_ELSE = 258,
     TOK_IF = 259,
     TOK_RETURN = 260,
     TOK_VOID = 261,
     TOK_INT = 262,
     TOK_WHILE = 263,
     TOK_PLUS = 264,
     TOK_MINUS = 265,
     TOK_MULT = 266,
     TOK_DIV = 267,
     TOK_LT = 268,
     TOK_LE = 269,
     TOK_GT = 270,
     TOK_GE = 271,
     TOK_EQ = 272,
     TOK_NE = 273,
     TOK_ASSIGN = 274,
     TOK_SEMI = 275,
     TOK_COMMA = 276,
     TOK_LPAREN = 277,
     TOK_RPAREN = 278,
     TOK_LSQ = 279,
     TOK_RSQ = 280,
     TOK_LBRACE = 281,
     TOK_RBRACE = 282,
     TOK_ERROR = 283,
     TOK_ID = 284,
     TOK_NUM = 285,
     TOK_SUB = 286
   };
#endif
/* Tokens.  */
#define TOK_ELSE 258
#define TOK_IF 259
#define TOK_RETURN 260
#define TOK_VOID 261
#define TOK_INT 262
#define TOK_WHILE 263
#define TOK_PLUS 264
#define TOK_MINUS 265
#define TOK_MULT 266
#define TOK_DIV 267
#define TOK_LT 268
#define TOK_LE 269
#define TOK_GT 270
#define TOK_GE 271
#define TOK_EQ 272
#define TOK_NE 273
#define TOK_ASSIGN 274
#define TOK_SEMI 275
#define TOK_COMMA 276
#define TOK_LPAREN 277
#define TOK_RPAREN 278
#define TOK_LSQ 279
#define TOK_RSQ 280
#define TOK_LBRACE 281
#define TOK_RBRACE 282
#define TOK_ERROR 283
#define TOK_ID 284
#define TOK_NUM 285
#define TOK_SUB 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "cmparser.y"
{
	AstNodePtr nodePtr;
	int        iVal;
	char      *cVal;
	Type      *type;
}
/* Line 1529 of yacc.c.  */
#line 118 "cmparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

