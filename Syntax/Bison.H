/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_SYNTAX_BISON_H_INCLUDED
# define YY_SYNTAX_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int syntax_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _SYMB_1 = 259,                 /* _SYMB_1  */
    _PERCENT = 260,                /* _PERCENT  */
    _LPAREN = 261,                 /* _LPAREN  */
    _RPAREN = 262,                 /* _RPAREN  */
    _STAR = 263,                   /* _STAR  */
    _COMMA = 264,                  /* _COMMA  */
    _RARROW = 265,                 /* _RARROW  */
    _DOT = 266,                    /* _DOT  */
    _COLON = 267,                  /* _COLON  */
    _SEMI = 268,                   /* _SEMI  */
    _LT = 269,                     /* _LT  */
    _LARROW = 270,                 /* _LARROW  */
    _EQ = 271,                     /* _EQ  */
    _RDARROW = 272,                /* _RDARROW  */
    _GT = 273,                     /* _GT  */
    _KW_Bool = 274,                /* _KW_Bool  */
    _KW_Int = 275,                 /* _KW_Int  */
    _KW_Nat = 276,                 /* _KW_Nat  */
    _KW_Real = 277,                /* _KW_Real  */
    _KW_Ref = 278,                 /* _KW_Ref  */
    _LBRACK = 279,                 /* _LBRACK  */
    _RBRACK = 280,                 /* _RBRACK  */
    _UNDERSCORE = 281,             /* _UNDERSCORE  */
    _KW_as = 282,                  /* _KW_as  */
    _KW_break = 283,               /* _KW_break  */
    _KW_case = 284,                /* _KW_case  */
    _KW_continue = 285,            /* _KW_continue  */
    _KW_def = 286,                 /* _KW_def  */
    _KW_else = 287,                /* _KW_else  */
    _KW_eval = 288,                /* _KW_eval  */
    _KW_false = 289,               /* _KW_false  */
    _KW_fix = 290,                 /* _KW_fix  */
    _KW_fun = 291,                 /* _KW_fun  */
    _KW_get = 292,                 /* _KW_get  */
    _SYMB_16 = 293,                /* _SYMB_16  */
    _SYMB_14 = 294,                /* _SYMB_14  */
    _SYMB_15 = 295,                /* _SYMB_15  */
    _SYMB_17 = 296,                /* _SYMB_17  */
    _SYMB_19 = 297,                /* _SYMB_19  */
    _SYMB_18 = 298,                /* _SYMB_18  */
    _KW_if = 299,                  /* _KW_if  */
    _KW_import = 300,              /* _KW_import  */
    _KW_iszero = 301,              /* _KW_iszero  */
    _KW_len = 302,                 /* _KW_len  */
    _KW_loop = 303,                /* _KW_loop  */
    _KW_of = 304,                  /* _KW_of  */
    _KW_pop = 305,                 /* _KW_pop  */
    _KW_pred = 306,                /* _KW_pred  */
    _KW_push = 307,                /* _KW_push  */
    _SYMB_22 = 308,                /* _SYMB_22  */
    _SYMB_20 = 309,                /* _SYMB_20  */
    _SYMB_21 = 310,                /* _SYMB_21  */
    _SYMB_23 = 311,                /* _SYMB_23  */
    _SYMB_25 = 312,                /* _SYMB_25  */
    _SYMB_24 = 313,                /* _SYMB_24  */
    _KW_readInt = 314,             /* _KW_readInt  */
    _KW_readReal = 315,            /* _KW_readReal  */
    _KW_ref = 316,                 /* _KW_ref  */
    _KW_ret = 317,                 /* _KW_ret  */
    _KW_return = 318,              /* _KW_return  */
    _KW_succ = 319,                /* _KW_succ  */
    _KW_then = 320,                /* _KW_then  */
    _KW_toInt = 321,               /* _KW_toInt  */
    _KW_toReal = 322,              /* _KW_toReal  */
    _KW_true = 323,                /* _KW_true  */
    _KW_typedef = 324,             /* _KW_typedef  */
    _KW_uni = 325,                 /* _KW_uni  */
    _KW_where = 326,               /* _KW_where  */
    _KW_writeInt = 327,            /* _KW_writeInt  */
    _KW_writeReal = 328,           /* _KW_writeReal  */
    _LBRACE = 329,                 /* _LBRACE  */
    _BAR = 330,                    /* _BAR  */
    _RBRACE = 331,                 /* _RBRACE  */
    _SYMB_6 = 332,                 /* _SYMB_6  */
    _STRING_ = 333,                /* _STRING_  */
    _INTEGER_ = 334,               /* _INTEGER_  */
    _DOUBLE_ = 335,                /* _DOUBLE_  */
    _IDENT_ = 336                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "syntax.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Program* program_;
  ListExpr* listexpr_;
  Expr* expr_;
  ListAbstractionField_* listabstractionfield__;
  AbstractionField_* abstractionfield__;
  ListWhereField_* listwherefield__;
  WhereField_* wherefield__;
  ListRecordField_* listrecordfield__;
  RecordField_* recordfield__;
  ListVariantField_* listvariantfield__;
  VariantField_* variantfield__;
  Statement* statement_;
  ListStatement* liststatement_;
  ListType* listtype_;
  Type* type_;
  ListRecordTypeField_* listrecordtypefield__;
  RecordTypeField_* recordtypefield__;
  ListVariantTypeField_* listvarianttypefield__;
  VariantTypeField_* varianttypefield__;

#line 171 "Bison.H"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int syntax_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_SYNTAX_BISON_H_INCLUDED  */
