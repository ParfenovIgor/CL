/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         syntax_parse
#define yylex           syntax_lex
#define yyerror         syntax_error
#define yydebug         syntax_debug
#define yynerrs         syntax_nerrs

/* First part of user prologue.  */
#line 20 "syntax.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE syntax__scan_string(const char *str, yyscan_t scanner);
extern void syntax__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void syntax_lex_destroy(yyscan_t scanner);
extern char* syntax_get_text(yyscan_t scanner);

extern yyscan_t syntax__initialize_lexer(FILE * inp);

/* End C preamble code */

#line 105 "Parser.C"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Bison.H"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__SYMB_1 = 4,                    /* _SYMB_1  */
  YYSYMBOL__PERCENT = 5,                   /* _PERCENT  */
  YYSYMBOL__LPAREN = 6,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 7,                    /* _RPAREN  */
  YYSYMBOL__STAR = 8,                      /* _STAR  */
  YYSYMBOL__COMMA = 9,                     /* _COMMA  */
  YYSYMBOL__RARROW = 10,                   /* _RARROW  */
  YYSYMBOL__DOT = 11,                      /* _DOT  */
  YYSYMBOL__COLON = 12,                    /* _COLON  */
  YYSYMBOL__SEMI = 13,                     /* _SEMI  */
  YYSYMBOL__LT = 14,                       /* _LT  */
  YYSYMBOL__LARROW = 15,                   /* _LARROW  */
  YYSYMBOL__EQ = 16,                       /* _EQ  */
  YYSYMBOL__RDARROW = 17,                  /* _RDARROW  */
  YYSYMBOL__GT = 18,                       /* _GT  */
  YYSYMBOL__KW_Bool = 19,                  /* _KW_Bool  */
  YYSYMBOL__KW_Int = 20,                   /* _KW_Int  */
  YYSYMBOL__KW_Nat = 21,                   /* _KW_Nat  */
  YYSYMBOL__KW_Real = 22,                  /* _KW_Real  */
  YYSYMBOL__KW_Ref = 23,                   /* _KW_Ref  */
  YYSYMBOL__LBRACK = 24,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 25,                   /* _RBRACK  */
  YYSYMBOL__UNDERSCORE = 26,               /* _UNDERSCORE  */
  YYSYMBOL__KW_as = 27,                    /* _KW_as  */
  YYSYMBOL__KW_break = 28,                 /* _KW_break  */
  YYSYMBOL__KW_case = 29,                  /* _KW_case  */
  YYSYMBOL__KW_continue = 30,              /* _KW_continue  */
  YYSYMBOL__KW_def = 31,                   /* _KW_def  */
  YYSYMBOL__KW_else = 32,                  /* _KW_else  */
  YYSYMBOL__KW_eval = 33,                  /* _KW_eval  */
  YYSYMBOL__KW_false = 34,                 /* _KW_false  */
  YYSYMBOL__KW_fix = 35,                   /* _KW_fix  */
  YYSYMBOL__KW_fun = 36,                   /* _KW_fun  */
  YYSYMBOL__KW_get = 37,                   /* _KW_get  */
  YYSYMBOL__SYMB_16 = 38,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_14 = 39,                  /* _SYMB_14  */
  YYSYMBOL__SYMB_15 = 40,                  /* _SYMB_15  */
  YYSYMBOL__SYMB_17 = 41,                  /* _SYMB_17  */
  YYSYMBOL__SYMB_19 = 42,                  /* _SYMB_19  */
  YYSYMBOL__SYMB_18 = 43,                  /* _SYMB_18  */
  YYSYMBOL__KW_if = 44,                    /* _KW_if  */
  YYSYMBOL__KW_import = 45,                /* _KW_import  */
  YYSYMBOL__KW_iszero = 46,                /* _KW_iszero  */
  YYSYMBOL__KW_len = 47,                   /* _KW_len  */
  YYSYMBOL__KW_loop = 48,                  /* _KW_loop  */
  YYSYMBOL__KW_of = 49,                    /* _KW_of  */
  YYSYMBOL__KW_pop = 50,                   /* _KW_pop  */
  YYSYMBOL__KW_pred = 51,                  /* _KW_pred  */
  YYSYMBOL__KW_push = 52,                  /* _KW_push  */
  YYSYMBOL__SYMB_22 = 53,                  /* _SYMB_22  */
  YYSYMBOL__SYMB_20 = 54,                  /* _SYMB_20  */
  YYSYMBOL__SYMB_21 = 55,                  /* _SYMB_21  */
  YYSYMBOL__SYMB_23 = 56,                  /* _SYMB_23  */
  YYSYMBOL__SYMB_25 = 57,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_24 = 58,                  /* _SYMB_24  */
  YYSYMBOL__KW_readInt = 59,               /* _KW_readInt  */
  YYSYMBOL__KW_readReal = 60,              /* _KW_readReal  */
  YYSYMBOL__KW_ref = 61,                   /* _KW_ref  */
  YYSYMBOL__KW_ret = 62,                   /* _KW_ret  */
  YYSYMBOL__KW_return = 63,                /* _KW_return  */
  YYSYMBOL__KW_succ = 64,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 65,                  /* _KW_then  */
  YYSYMBOL__KW_toInt = 66,                 /* _KW_toInt  */
  YYSYMBOL__KW_toReal = 67,                /* _KW_toReal  */
  YYSYMBOL__KW_true = 68,                  /* _KW_true  */
  YYSYMBOL__KW_typedef = 69,               /* _KW_typedef  */
  YYSYMBOL__KW_uni = 70,                   /* _KW_uni  */
  YYSYMBOL__KW_where = 71,                 /* _KW_where  */
  YYSYMBOL__KW_writeInt = 72,              /* _KW_writeInt  */
  YYSYMBOL__KW_writeReal = 73,             /* _KW_writeReal  */
  YYSYMBOL__LBRACE = 74,                   /* _LBRACE  */
  YYSYMBOL__BAR = 75,                      /* _BAR  */
  YYSYMBOL__RBRACE = 76,                   /* _RBRACE  */
  YYSYMBOL__SYMB_6 = 77,                   /* _SYMB_6  */
  YYSYMBOL__STRING_ = 78,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 79,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 80,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 81,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_Program = 83,                   /* Program  */
  YYSYMBOL_ListExpr = 84,                  /* ListExpr  */
  YYSYMBOL_Expr8 = 85,                     /* Expr8  */
  YYSYMBOL_Expr3 = 86,                     /* Expr3  */
  YYSYMBOL_Expr1 = 87,                     /* Expr1  */
  YYSYMBOL_Expr2 = 88,                     /* Expr2  */
  YYSYMBOL_Expr = 89,                      /* Expr  */
  YYSYMBOL_Expr7 = 90,                     /* Expr7  */
  YYSYMBOL_Expr5 = 91,                     /* Expr5  */
  YYSYMBOL_Expr6 = 92,                     /* Expr6  */
  YYSYMBOL_Expr4 = 93,                     /* Expr4  */
  YYSYMBOL_ListAbstractionField_ = 94,     /* ListAbstractionField_  */
  YYSYMBOL_AbstractionField_ = 95,         /* AbstractionField_  */
  YYSYMBOL_ListWhereField_ = 96,           /* ListWhereField_  */
  YYSYMBOL_WhereField_ = 97,               /* WhereField_  */
  YYSYMBOL_ListRecordField_ = 98,          /* ListRecordField_  */
  YYSYMBOL_RecordField_ = 99,              /* RecordField_  */
  YYSYMBOL_ListVariantField_ = 100,        /* ListVariantField_  */
  YYSYMBOL_VariantField_ = 101,            /* VariantField_  */
  YYSYMBOL_Statement = 102,                /* Statement  */
  YYSYMBOL_ListStatement = 103,            /* ListStatement  */
  YYSYMBOL_ListType = 104,                 /* ListType  */
  YYSYMBOL_Type = 105,                     /* Type  */
  YYSYMBOL_ListRecordTypeField_ = 106,     /* ListRecordTypeField_  */
  YYSYMBOL_RecordTypeField_ = 107,         /* RecordTypeField_  */
  YYSYMBOL_ListVariantTypeField_ = 108,    /* ListVariantTypeField_  */
  YYSYMBOL_VariantTypeField_ = 109         /* VariantTypeField_  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 76 "syntax.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, syntax_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 260 "Parser.C"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   867

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   336


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   200,   200,   202,   203,   204,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   225,   226,   227,   228,   229,   230,
     231,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     243,   244,   245,   247,   248,   249,   251,   252,   253,   255,
     256,   257,   258,   259,   261,   262,   263,   264,   265,   267,
     268,   269,   270,   271,   273,   274,   275,   277,   279,   280,
     281,   283,   285,   286,   287,   289,   291,   292,   293,   295,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   309,   310,   311,   313,   314,   315,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   332,   333,   334,   336,   338,   339,   340,   342
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_SYMB_1",
  "_PERCENT", "_LPAREN", "_RPAREN", "_STAR", "_COMMA", "_RARROW", "_DOT",
  "_COLON", "_SEMI", "_LT", "_LARROW", "_EQ", "_RDARROW", "_GT",
  "_KW_Bool", "_KW_Int", "_KW_Nat", "_KW_Real", "_KW_Ref", "_LBRACK",
  "_RBRACK", "_UNDERSCORE", "_KW_as", "_KW_break", "_KW_case",
  "_KW_continue", "_KW_def", "_KW_else", "_KW_eval", "_KW_false",
  "_KW_fix", "_KW_fun", "_KW_get", "_SYMB_16", "_SYMB_14", "_SYMB_15",
  "_SYMB_17", "_SYMB_19", "_SYMB_18", "_KW_if", "_KW_import", "_KW_iszero",
  "_KW_len", "_KW_loop", "_KW_of", "_KW_pop", "_KW_pred", "_KW_push",
  "_SYMB_22", "_SYMB_20", "_SYMB_21", "_SYMB_23", "_SYMB_25", "_SYMB_24",
  "_KW_readInt", "_KW_readReal", "_KW_ref", "_KW_ret", "_KW_return",
  "_KW_succ", "_KW_then", "_KW_toInt", "_KW_toReal", "_KW_true",
  "_KW_typedef", "_KW_uni", "_KW_where", "_KW_writeInt", "_KW_writeReal",
  "_LBRACE", "_BAR", "_RBRACE", "_SYMB_6", "_STRING_", "_INTEGER_",
  "_DOUBLE_", "_IDENT_", "$accept", "Program", "ListExpr", "Expr8",
  "Expr3", "Expr1", "Expr2", "Expr", "Expr7", "Expr5", "Expr6", "Expr4",
  "ListAbstractionField_", "AbstractionField_", "ListWhereField_",
  "WhereField_", "ListRecordField_", "RecordField_", "ListVariantField_",
  "VariantField_", "Statement", "ListStatement", "ListType", "Type",
  "ListRecordTypeField_", "RecordTypeField_", "ListVariantTypeField_",
  "VariantTypeField_", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     235,   -73,   469,   136,   547,   469,   -73,   469,   -73,    14,
     469,   -73,   469,    24,    25,   625,   -19,   703,    71,    10,
      92,   703,    94,   -73,   -73,   136,   -73,   703,    95,    96,
     -73,    42,    50,   469,   469,    55,   -73,   -73,   -73,   137,
     130,   -73,    74,   752,    -4,   -73,   127,    66,   151,   139,
     -73,   469,     5,   -73,   145,   146,    39,   138,   -25,    87,
      14,   786,   -73,   -73,   -73,   -73,    14,    14,   -73,    88,
     -73,     0,   100,   -73,    14,   469,   469,   -14,   -73,   -73,
     469,   235,   469,   -73,   469,   -73,   -73,   469,   469,   156,
      98,   -73,   -73,   160,   102,   171,   -73,    68,    14,   313,
     -73,   469,   110,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   235,   -73,   469,   -73,   469,
     -73,   173,   178,    56,   186,   172,    62,   181,   191,   193,
       7,   189,   129,   197,    14,   195,   200,   203,     6,    45,
      19,   469,    20,   142,    32,    47,    34,    35,    14,   469,
     469,   -73,    55,   -73,   -73,     8,   313,   391,   313,   132,
     204,    40,   100,    14,    66,    66,    66,    66,   -73,   -73,
     -73,   -73,   127,   127,   127,   127,   -73,    -3,   -73,   140,
     -73,   144,    14,   -73,    14,   -73,    14,   -73,   141,   -73,
      14,   -73,    88,   193,   469,   149,    14,   213,   469,   150,
     -18,   -73,   -73,   -73,   469,   -73,   -73,   193,   -73,   100,
     -73,   209,    48,    67,   -73,   152,   217,    11,   202,   211,
     173,   193,   193,   -73,   186,   -73,   193,   -73,   100,   235,
     -73,    15,   157,    37,   235,   469,    38,   469,   -73,    14,
     214,    14,   159,   -73,   170,   -73,   235,   -73,   161,   100,
     -73,   100,   -73,   469,   193,   220,   469,   180,   212,   100,
     228,   -24,   469,   174,   469,   -73,    -1,   235,   100,   -73,
     176,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      91,     8,     0,     0,     3,     3,    87,     0,    88,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,    89,     0,     0,     0,
       6,     0,     0,     0,     0,    72,    21,    22,     9,     0,
      48,    42,    45,    39,     0,    58,    63,    53,    30,    92,
       2,     0,     0,    47,     9,     0,     4,     0,     0,     0,
       0,    94,    98,   108,    99,   109,     0,     0,    97,   111,
     101,     0,    90,    34,    64,     0,     0,     0,    80,    27,
       0,    91,     0,    26,     0,    46,    25,     0,     0,     0,
       0,    37,    38,     0,     0,    73,     1,     0,     0,     3,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    23,     0,    10,     3,
      16,    76,     0,     0,   101,     0,    95,     0,   116,   100,
       0,     0,     0,   112,     0,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    72,    11,    13,     0,     0,     3,     3,    72,
       9,     0,    83,    68,    49,    50,    51,    52,    54,    55,
      56,    57,    60,    59,    62,    61,    93,     0,     5,     0,
      15,    77,     0,   110,     0,   104,    94,   106,   115,   107,
       0,   105,   111,   103,     0,     0,    64,    67,     0,    23,
       0,    20,    86,    19,     0,    28,    29,    82,    33,    75,
      74,     0,     9,     0,    41,     0,    69,     0,     0,     0,
      76,   102,   118,    96,     0,   117,   114,   113,    81,    91,
      66,     0,     0,     0,    91,     0,     0,     0,    44,    68,
       0,     0,     0,    78,     0,    67,    91,    17,     0,    24,
      18,    43,    70,     0,    14,     0,     0,     0,    84,    71,
       0,     0,     0,     0,     0,    32,     0,    91,    79,    31,
       0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,     2,   -73,   103,   -11,   -73,    -2,     4,    21,
      22,   -73,    51,   -73,    16,   -73,   101,   -73,    26,   -73,
     -73,   -72,    64,    -5,    65,   -73,    70,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    39,    57,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   136,   137,   215,   216,    94,    95,   180,   181,
      49,    50,   125,   126,   132,   133,   127,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    73,    56,    56,    71,    58,    55,    53,    72,   143,
     134,   101,   116,    77,   235,   218,   134,   134,   134,    59,
      60,   134,    91,    92,   121,   134,   199,   201,    61,    85,
      74,    75,   189,    62,    63,    64,    65,    66,    67,   203,
      68,   205,   206,   176,   247,   250,   102,   102,   119,    77,
     134,   141,   265,   102,   198,   123,   204,   102,  -101,    78,
     184,   129,   130,   183,   117,   214,   134,   102,   102,   138,
     102,   186,   134,   139,   140,   269,   102,    80,   142,   190,
     144,   135,   145,   150,    81,   146,   147,   197,    69,   211,
     102,   102,   240,   155,   161,    70,   245,    56,    82,   162,
      84,    87,    88,   102,   107,   102,   102,   108,   102,   102,
     102,   168,   169,   170,   171,   177,   102,    56,   102,   109,
      79,   178,   110,    89,    83,   164,   165,   166,   167,   193,
      86,    90,   172,   173,   174,   175,    93,    96,   208,   200,
       1,    97,     2,   207,     3,    98,   100,   153,   209,   154,
       4,   123,   115,   130,    52,    56,    56,   244,   217,    55,
       5,   117,   248,   120,   118,     7,   103,   104,   122,   131,
      11,   102,   148,    14,   257,   149,   150,   221,   151,   222,
     152,   105,   106,    18,   163,   226,    20,   179,    22,   182,
     185,   231,   228,   111,   112,   270,   233,    25,   184,   187,
     188,   190,   236,   134,    30,   191,   192,   195,   113,   114,
      35,   194,   196,   213,  -101,    36,    37,    38,   202,   220,
     232,   219,   224,   229,   234,   237,   239,   242,   238,   241,
     253,   246,   256,   249,   217,   251,   254,   258,   260,     1,
     255,     2,   262,     3,   263,   264,   243,   230,   267,     4,
     223,   259,   271,   210,   261,   252,     0,   227,   225,     5,
     266,     0,   268,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,     0,     0,     0,     0,     0,     0,    15,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,    23,    24,    25,     0,    26,    27,
       0,    28,    29,    30,    31,    32,     0,    33,    34,    35,
       0,     0,     0,     0,    36,    37,    38,     1,    59,   156,
       0,     3,     0,     0,     0,     0,     0,   157,     0,     0,
       0,     0,    62,    63,    64,    65,    66,   158,     0,    68,
       0,     0,     7,     0,     0,     0,     0,    11,    12,    13,
      14,     0,     0,     0,     0,     0,     0,    51,     0,    17,
      18,     0,     0,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    23,    24,    25,     0,     0,    27,     0,    28,
      29,    30,     0,    32,     0,    33,    34,   159,     0,     0,
       0,     0,    36,    37,   160,     1,    59,   156,     0,     3,
       0,     0,     0,     0,     0,   157,     0,     0,     0,     0,
      62,    63,    64,    65,    66,   158,     0,    68,     0,     0,
       7,     0,     0,     0,     0,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,    51,     0,    17,    18,     0,
       0,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      23,    24,    25,     0,     0,    27,     0,    28,    29,    30,
       0,    32,     0,    33,    34,   159,     0,     0,     0,     0,
      36,    37,   212,     1,     0,     2,     0,     3,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     7,     0,
       0,     0,     0,    11,    12,    13,    14,     0,     0,     0,
       0,     0,     0,    51,     0,    17,    18,     0,     0,    20,
      21,    22,     0,     0,     0,     0,     0,     0,    23,    24,
      25,     0,     0,    27,     0,    28,    29,    30,     0,    32,
       0,    33,    34,    35,     0,     0,     0,     0,    36,    37,
      38,     1,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     7,     0,     0,     0,
       0,    11,    12,    13,    14,     0,     0,     0,     0,     0,
       0,    51,     0,    17,    18,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,    23,    24,    25,     0,
       0,    27,     0,    28,    29,    30,     0,    32,     0,    33,
      34,    35,     0,     0,     0,     0,    36,    37,    54,     1,
       0,    76,     0,     3,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     7,     0,     0,     0,     0,    11,
      12,    13,    14,     0,     0,     0,     0,     0,     0,    51,
       0,    17,    18,     0,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,    23,    24,    25,     0,     0,    27,
       0,    28,    29,    30,     0,    32,     0,    33,    34,    35,
       0,     0,     0,     0,    36,    37,    38,     1,     0,     2,
       0,     3,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     7,     0,     0,     0,     0,    11,     0,     0,
      14,     0,     0,     0,     0,     0,     0,    51,     0,    17,
      18,     0,     0,    20,    21,    22,     1,     0,     2,     0,
       3,     0,     0,     0,    25,     0,     4,    27,     0,    28,
      29,    30,     0,     0,     0,     0,    99,    35,     0,     0,
       0,     7,    36,    37,    38,     0,    11,     0,     0,    14,
       0,    59,    60,     0,     0,     0,    51,     0,    17,    18,
      61,     0,    20,    21,    22,    62,    63,    64,    65,    66,
      67,     0,    68,    25,     0,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,     0,     0,     0,   124
};

static const yytype_int16 yycheck[] =
{
       2,    12,     4,     5,     9,     7,     4,     3,    10,    81,
      10,    15,     7,    15,    32,    18,    10,    10,    10,     5,
       6,    10,    33,    34,    49,    10,     7,     7,    14,    25,
       6,     6,    25,    19,    20,    21,    22,    23,    24,     7,
      26,     7,     7,   115,     7,     7,    71,    71,     9,    51,
      10,    65,    76,    71,     9,    60,     9,    71,    10,    78,
      12,    66,    67,     7,    16,    25,    10,    71,    71,    74,
      71,     9,    10,    75,    76,    76,    71,     6,    80,    12,
      82,    81,    84,    16,    74,    87,    88,    81,    74,    81,
      71,    71,    81,    98,    99,    81,    81,    99,     6,   101,
       6,     6,     6,    71,    38,    71,    71,    41,    71,    71,
      71,   107,   108,   109,   110,   117,    71,   119,    71,    53,
      17,   119,    56,    81,    21,   103,   104,   105,   106,   134,
      27,    81,   111,   112,   113,   114,    81,     0,   149,   141,
       4,    11,     6,   148,     8,    71,    43,    79,   150,    81,
      14,   156,    13,   158,   156,   157,   158,   229,   163,   157,
      24,    16,   234,    25,    18,    29,    39,    40,    81,    81,
      34,    71,    16,    37,   246,    77,    16,   182,    76,   184,
       9,    54,    55,    47,    74,   190,    50,    14,    52,    11,
      18,   196,   194,    42,    43,   267,   198,    61,    12,    18,
       9,    12,   204,    10,    68,    76,     9,     7,    57,    58,
      74,    16,     9,    81,    10,    79,    80,    81,    76,    75,
       7,    81,    81,    74,    74,    16,     9,    16,    76,    27,
      16,    74,    62,   235,   239,   237,   241,    76,    18,     4,
      81,     6,    62,     8,    32,    17,   220,   196,    74,    14,
     186,   253,    76,   152,   256,   239,    -1,   192,   188,    24,
     262,    -1,   264,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,
      -1,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    80,    81,     4,     5,     6,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    64,    -1,    66,
      67,    68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    79,    80,    81,     4,     5,     6,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,    -1,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    -1,    64,    -1,    66,    67,    68,
      -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      79,    80,    81,     4,    -1,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    64,    -1,    66,    67,    68,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    79,    80,
      81,     4,    -1,     6,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      -1,    64,    -1,    66,    67,    68,    -1,    70,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    79,    80,    81,     4,
      -1,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    64,
      -1,    66,    67,    68,    -1,    70,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    80,    81,     4,    -1,     6,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    -1,    50,    51,    52,     4,    -1,     6,    -1,
       8,    -1,    -1,    -1,    61,    -1,    14,    64,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,    24,    74,    -1,    -1,
      -1,    29,    79,    80,    81,    -1,    34,    -1,    -1,    37,
      -1,     5,     6,    -1,    -1,    -1,    44,    -1,    46,    47,
      14,    -1,    50,    51,    52,    19,    20,    21,    22,    23,
      24,    -1,    26,    61,    -1,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,     8,    14,    24,    28,    29,    30,    31,
      33,    34,    35,    36,    37,    44,    45,    46,    47,    48,
      50,    51,    52,    59,    60,    61,    63,    64,    66,    67,
      68,    69,    70,    72,    73,    74,    79,    80,    81,    83,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   102,
     103,    44,    89,    90,    81,    84,    89,    84,    89,     5,
       6,    14,    19,    20,    21,    22,    23,    24,    26,    74,
      81,   105,    89,    87,     6,     6,     6,    89,    78,    86,
       6,    74,     6,    86,     6,    90,    86,     6,     6,    81,
      81,    87,    87,    81,    98,    99,     0,    11,    71,    24,
      86,    15,    71,    39,    40,    54,    55,    38,    41,    53,
      56,    42,    43,    57,    58,    13,     7,    16,    18,     9,
      25,    49,    81,   105,    81,   104,   105,   108,   109,   105,
     105,    81,   106,   107,    10,    81,    94,    95,   105,    89,
      89,    65,    89,   103,    89,    89,    89,    89,    16,    77,
      16,    76,     9,    79,    81,   105,     6,    14,    24,    74,
      81,   105,    89,    74,    92,    92,    92,    92,    90,    90,
      90,    90,    91,    91,    91,    91,   103,    89,    84,    14,
     100,   101,    11,     7,    12,    18,     9,    18,     9,    25,
      12,    76,     9,   105,    16,     7,     9,    81,     9,     7,
      89,     7,    76,     7,     9,     7,     7,   105,    87,    89,
      98,    81,    81,    81,    25,    96,    97,   105,    18,    81,
      75,   105,   105,   104,    81,   108,   105,   106,    89,    74,
      94,   105,     7,    89,    74,    32,    89,    16,    76,     9,
      81,    27,    16,   100,   103,    81,    74,     7,   103,    89,
       7,    89,    96,    16,   105,    81,    62,   103,    76,    89,
      18,    89,    62,    32,    17,    76,    89,    74,    89,    76,
     103,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    94,    94,    94,    95,    96,    96,
      96,    97,    98,    98,    98,    99,   100,   100,   100,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   108,   108,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     3,     1,     1,     1,     1,
       3,     3,     3,     3,     7,     4,     3,     6,     6,     4,
       4,     1,     1,     3,     6,     2,     2,     2,     4,     4,
       1,    10,     9,     4,     2,     1,     1,     2,     2,     1,
       2,     4,     1,     6,     5,     1,     2,     2,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     0,     1,     3,     2,     0,     1,
       3,     4,     0,     1,     3,     3,     0,     1,     3,     7,
       2,     5,     4,     3,     7,    11,     4,     1,     1,     1,
       2,     0,     1,     3,     0,     1,     3,     1,     1,     1,
       2,     1,     4,     3,     3,     3,     3,     3,     1,     1,
       3,     0,     1,     3,     3,     0,     1,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ListStatement  */
#line 200 "syntax.y"
                        { std::reverse((yyvsp[0].liststatement_)->begin(),(yyvsp[0].liststatement_)->end()) ;(yyval.program_) = new ProgramRoot((yyvsp[0].liststatement_)); result->program_ = (yyval.program_); }
#line 1643 "Parser.C"
    break;

  case 3: /* ListExpr: %empty  */
#line 202 "syntax.y"
                       { (yyval.listexpr_) = new ListExpr(); result->listexpr_ = (yyval.listexpr_); }
#line 1649 "Parser.C"
    break;

  case 4: /* ListExpr: Expr  */
#line 203 "syntax.y"
         { (yyval.listexpr_) = new ListExpr(); (yyval.listexpr_)->push_back((yyvsp[0].expr_)); result->listexpr_ = (yyval.listexpr_); }
#line 1655 "Parser.C"
    break;

  case 5: /* ListExpr: Expr _COMMA ListExpr  */
#line 204 "syntax.y"
                         { (yyvsp[0].listexpr_)->push_back((yyvsp[-2].expr_)); (yyval.listexpr_) = (yyvsp[0].listexpr_); result->listexpr_ = (yyval.listexpr_); }
#line 1661 "Parser.C"
    break;

  case 6: /* Expr8: _KW_true  */
#line 206 "syntax.y"
                 { (yyval.expr_) = new ConstTrue(); result->expr_ = (yyval.expr_); }
#line 1667 "Parser.C"
    break;

  case 7: /* Expr8: _KW_false  */
#line 207 "syntax.y"
              { (yyval.expr_) = new ConstFalse(); result->expr_ = (yyval.expr_); }
#line 1673 "Parser.C"
    break;

  case 8: /* Expr8: _SYMB_1  */
#line 208 "syntax.y"
            { (yyval.expr_) = new ConstZero(); result->expr_ = (yyval.expr_); }
#line 1679 "Parser.C"
    break;

  case 9: /* Expr8: _IDENT_  */
#line 209 "syntax.y"
            { (yyval.expr_) = new Var((yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 1685 "Parser.C"
    break;

  case 10: /* Expr8: _LT ListExpr _GT  */
#line 210 "syntax.y"
                     { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Tuple((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 1691 "Parser.C"
    break;

  case 11: /* Expr8: Expr8 _DOT _INTEGER_  */
#line 211 "syntax.y"
                         { (yyval.expr_) = new TupleGet((yyvsp[-2].expr_), (yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 1697 "Parser.C"
    break;

  case 12: /* Expr8: _LBRACE ListRecordField_ _RBRACE  */
#line 212 "syntax.y"
                                     { std::reverse((yyvsp[-1].listrecordfield__)->begin(),(yyvsp[-1].listrecordfield__)->end()) ;(yyval.expr_) = new Record((yyvsp[-1].listrecordfield__)); result->expr_ = (yyval.expr_); }
#line 1703 "Parser.C"
    break;

  case 13: /* Expr8: Expr8 _DOT _IDENT_  */
#line 213 "syntax.y"
                       { (yyval.expr_) = new RecordGet((yyvsp[-2].expr_), (yyvsp[0]._string)); result->expr_ = (yyval.expr_); }
#line 1709 "Parser.C"
    break;

  case 14: /* Expr8: _LT _IDENT_ _EQ Expr _GT _KW_as Type  */
#line 214 "syntax.y"
                                         { (yyval.expr_) = new Variant((yyvsp[-5]._string), (yyvsp[-3].expr_), (yyvsp[0].type_)); result->expr_ = (yyval.expr_); }
#line 1715 "Parser.C"
    break;

  case 15: /* Expr8: _KW_case Expr _KW_of ListVariantField_  */
#line 215 "syntax.y"
                                           { std::reverse((yyvsp[0].listvariantfield__)->begin(),(yyvsp[0].listvariantfield__)->end()) ;(yyval.expr_) = new VariantCase((yyvsp[-2].expr_), (yyvsp[0].listvariantfield__)); result->expr_ = (yyval.expr_); }
#line 1721 "Parser.C"
    break;

  case 16: /* Expr8: _LBRACK ListExpr _RBRACK  */
#line 216 "syntax.y"
                             { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Array((yyvsp[-1].listexpr_)); result->expr_ = (yyval.expr_); }
#line 1727 "Parser.C"
    break;

  case 17: /* Expr8: _KW_get _LPAREN Expr _COMMA Expr _RPAREN  */
#line 217 "syntax.y"
                                             { (yyval.expr_) = new ArrayGet((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1733 "Parser.C"
    break;

  case 18: /* Expr8: _KW_push _LPAREN Expr _COMMA Expr _RPAREN  */
#line 218 "syntax.y"
                                              { (yyval.expr_) = new ArrayPush((yyvsp[-3].expr_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1739 "Parser.C"
    break;

  case 19: /* Expr8: _KW_pop _LPAREN Expr _RPAREN  */
#line 219 "syntax.y"
                                 { (yyval.expr_) = new ArrayPop((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1745 "Parser.C"
    break;

  case 20: /* Expr8: _KW_len _LPAREN Expr _RPAREN  */
#line 220 "syntax.y"
                                 { (yyval.expr_) = new ArrayLen((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1751 "Parser.C"
    break;

  case 21: /* Expr8: _INTEGER_  */
#line 221 "syntax.y"
              { (yyval.expr_) = new ConstInt((yyvsp[0]._int)); result->expr_ = (yyval.expr_); }
#line 1757 "Parser.C"
    break;

  case 22: /* Expr8: _DOUBLE_  */
#line 222 "syntax.y"
             { (yyval.expr_) = new ConstReal((yyvsp[0]._double)); result->expr_ = (yyval.expr_); }
#line 1763 "Parser.C"
    break;

  case 23: /* Expr8: _LPAREN Expr _RPAREN  */
#line 223 "syntax.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); result->expr_ = (yyval.expr_); }
#line 1769 "Parser.C"
    break;

  case 24: /* Expr3: _KW_if Expr _KW_then Expr _KW_else Expr  */
#line 225 "syntax.y"
                                                { (yyval.expr_) = new If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1775 "Parser.C"
    break;

  case 25: /* Expr3: _KW_succ Expr3  */
#line 226 "syntax.y"
                   { (yyval.expr_) = new Succ((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1781 "Parser.C"
    break;

  case 26: /* Expr3: _KW_pred Expr3  */
#line 227 "syntax.y"
                   { (yyval.expr_) = new Pred((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1787 "Parser.C"
    break;

  case 27: /* Expr3: _KW_iszero Expr3  */
#line 228 "syntax.y"
                     { (yyval.expr_) = new IsZero((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1793 "Parser.C"
    break;

  case 28: /* Expr3: _KW_toInt _LPAREN Expr _RPAREN  */
#line 229 "syntax.y"
                                   { (yyval.expr_) = new ToInt((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1799 "Parser.C"
    break;

  case 29: /* Expr3: _KW_toReal _LPAREN Expr _RPAREN  */
#line 230 "syntax.y"
                                    { (yyval.expr_) = new ToReal((yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1805 "Parser.C"
    break;

  case 30: /* Expr3: Expr4  */
#line 231 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1811 "Parser.C"
    break;

  case 31: /* Expr1: _KW_fun _LPAREN Type _IDENT_ _RPAREN _LBRACE ListStatement _KW_ret Expr _RBRACE  */
#line 233 "syntax.y"
                                                                                        { std::reverse((yyvsp[-3].liststatement_)->begin(),(yyvsp[-3].liststatement_)->end()) ;(yyval.expr_) = new Abstraction((yyvsp[-7].type_), (yyvsp[-6]._string), (yyvsp[-3].liststatement_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1817 "Parser.C"
    break;

  case 32: /* Expr1: _KW_fun _LPAREN ListAbstractionField_ _RPAREN _LBRACE ListStatement _KW_ret Expr _RBRACE  */
#line 234 "syntax.y"
                                                                                             { std::reverse((yyvsp[-6].listabstractionfield__)->begin(),(yyvsp[-6].listabstractionfield__)->end()) ; std::reverse((yyvsp[-3].liststatement_)->begin(),(yyvsp[-3].liststatement_)->end()) ;(yyval.expr_) = new MultiAbstraction((yyvsp[-6].listabstractionfield__), (yyvsp[-3].liststatement_), (yyvsp[-1].expr_)); result->expr_ = (yyval.expr_); }
#line 1823 "Parser.C"
    break;

  case 33: /* Expr1: _KW_uni _IDENT_ _SYMB_6 Expr1  */
#line 235 "syntax.y"
                                  { (yyval.expr_) = new TypeAbstraction((yyvsp[-2]._string), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1829 "Parser.C"
    break;

  case 34: /* Expr1: _KW_fix Expr1  */
#line 236 "syntax.y"
                  { (yyval.expr_) = new Fix((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1835 "Parser.C"
    break;

  case 35: /* Expr1: _KW_readInt  */
#line 237 "syntax.y"
                { (yyval.expr_) = new ReadInt(); result->expr_ = (yyval.expr_); }
#line 1841 "Parser.C"
    break;

  case 36: /* Expr1: _KW_readReal  */
#line 238 "syntax.y"
                 { (yyval.expr_) = new ReadReal(); result->expr_ = (yyval.expr_); }
#line 1847 "Parser.C"
    break;

  case 37: /* Expr1: _KW_writeInt Expr1  */
#line 239 "syntax.y"
                       { (yyval.expr_) = new WriteInt((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1853 "Parser.C"
    break;

  case 38: /* Expr1: _KW_writeReal Expr1  */
#line 240 "syntax.y"
                        { (yyval.expr_) = new WriteReal((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1859 "Parser.C"
    break;

  case 39: /* Expr1: Expr2  */
#line 241 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1865 "Parser.C"
    break;

  case 40: /* Expr2: Expr2 Expr3  */
#line 243 "syntax.y"
                    { (yyval.expr_) = new Application((yyvsp[-1].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1871 "Parser.C"
    break;

  case 41: /* Expr2: Expr2 _LBRACK Type _RBRACK  */
#line 244 "syntax.y"
                               { (yyval.expr_) = new TypeApplication((yyvsp[-3].expr_), (yyvsp[-1].type_)); result->expr_ = (yyval.expr_); }
#line 1877 "Parser.C"
    break;

  case 42: /* Expr2: Expr3  */
#line 245 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1883 "Parser.C"
    break;

  case 43: /* Expr: Expr1 _KW_where Type _IDENT_ _EQ Expr  */
#line 247 "syntax.y"
                                             { (yyval.expr_) = new Where((yyvsp[-5].expr_), (yyvsp[-3].type_), (yyvsp[-2]._string), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1889 "Parser.C"
    break;

  case 44: /* Expr: Expr _KW_where _LBRACE ListWhereField_ _RBRACE  */
#line 248 "syntax.y"
                                                   { std::reverse((yyvsp[-1].listwherefield__)->begin(),(yyvsp[-1].listwherefield__)->end()) ;(yyval.expr_) = new MultiWhere((yyvsp[-4].expr_), (yyvsp[-1].listwherefield__)); result->expr_ = (yyval.expr_); }
#line 1895 "Parser.C"
    break;

  case 45: /* Expr: Expr1  */
#line 249 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1901 "Parser.C"
    break;

  case 46: /* Expr7: _KW_ref Expr7  */
#line 251 "syntax.y"
                      { (yyval.expr_) = new Reference((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1907 "Parser.C"
    break;

  case 47: /* Expr7: _STAR Expr7  */
#line 252 "syntax.y"
                { (yyval.expr_) = new Dereference((yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1913 "Parser.C"
    break;

  case 48: /* Expr7: Expr8  */
#line 253 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1919 "Parser.C"
    break;

  case 49: /* Expr5: Expr5 _SYMB_14 Expr6  */
#line 255 "syntax.y"
                             { (yyval.expr_) = new AddInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1925 "Parser.C"
    break;

  case 50: /* Expr5: Expr5 _SYMB_15 Expr6  */
#line 256 "syntax.y"
                         { (yyval.expr_) = new SubInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1931 "Parser.C"
    break;

  case 51: /* Expr5: Expr5 _SYMB_20 Expr6  */
#line 257 "syntax.y"
                         { (yyval.expr_) = new AddReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1937 "Parser.C"
    break;

  case 52: /* Expr5: Expr5 _SYMB_21 Expr6  */
#line 258 "syntax.y"
                         { (yyval.expr_) = new SubReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1943 "Parser.C"
    break;

  case 53: /* Expr5: Expr6  */
#line 259 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1949 "Parser.C"
    break;

  case 54: /* Expr6: Expr6 _SYMB_16 Expr7  */
#line 261 "syntax.y"
                             { (yyval.expr_) = new MulInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1955 "Parser.C"
    break;

  case 55: /* Expr6: Expr6 _SYMB_17 Expr7  */
#line 262 "syntax.y"
                         { (yyval.expr_) = new DivInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1961 "Parser.C"
    break;

  case 56: /* Expr6: Expr6 _SYMB_22 Expr7  */
#line 263 "syntax.y"
                         { (yyval.expr_) = new MulReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1967 "Parser.C"
    break;

  case 57: /* Expr6: Expr6 _SYMB_23 Expr7  */
#line 264 "syntax.y"
                         { (yyval.expr_) = new DivReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1973 "Parser.C"
    break;

  case 58: /* Expr6: Expr7  */
#line 265 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 1979 "Parser.C"
    break;

  case 59: /* Expr4: Expr4 _SYMB_18 Expr5  */
#line 267 "syntax.y"
                             { (yyval.expr_) = new EquInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1985 "Parser.C"
    break;

  case 60: /* Expr4: Expr4 _SYMB_19 Expr5  */
#line 268 "syntax.y"
                         { (yyval.expr_) = new LesInt((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1991 "Parser.C"
    break;

  case 61: /* Expr4: Expr4 _SYMB_24 Expr5  */
#line 269 "syntax.y"
                         { (yyval.expr_) = new EquReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 1997 "Parser.C"
    break;

  case 62: /* Expr4: Expr4 _SYMB_25 Expr5  */
#line 270 "syntax.y"
                         { (yyval.expr_) = new LesReal((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->expr_ = (yyval.expr_); }
#line 2003 "Parser.C"
    break;

  case 63: /* Expr4: Expr5  */
#line 271 "syntax.y"
          { (yyval.expr_) = (yyvsp[0].expr_); result->expr_ = (yyval.expr_); }
#line 2009 "Parser.C"
    break;

  case 64: /* ListAbstractionField_: %empty  */
#line 273 "syntax.y"
                                    { (yyval.listabstractionfield__) = new ListAbstractionField_(); result->listabstractionfield__ = (yyval.listabstractionfield__); }
#line 2015 "Parser.C"
    break;

  case 65: /* ListAbstractionField_: AbstractionField_  */
#line 274 "syntax.y"
                      { (yyval.listabstractionfield__) = new ListAbstractionField_(); (yyval.listabstractionfield__)->push_back((yyvsp[0].abstractionfield__)); result->listabstractionfield__ = (yyval.listabstractionfield__); }
#line 2021 "Parser.C"
    break;

  case 66: /* ListAbstractionField_: AbstractionField_ _COMMA ListAbstractionField_  */
#line 275 "syntax.y"
                                                   { (yyvsp[0].listabstractionfield__)->push_back((yyvsp[-2].abstractionfield__)); (yyval.listabstractionfield__) = (yyvsp[0].listabstractionfield__); result->listabstractionfield__ = (yyval.listabstractionfield__); }
#line 2027 "Parser.C"
    break;

  case 67: /* AbstractionField_: Type _IDENT_  */
#line 277 "syntax.y"
                                 { (yyval.abstractionfield__) = new AbstractionField((yyvsp[-1].type_), (yyvsp[0]._string)); result->abstractionfield__ = (yyval.abstractionfield__); }
#line 2033 "Parser.C"
    break;

  case 68: /* ListWhereField_: %empty  */
#line 279 "syntax.y"
                              { (yyval.listwherefield__) = new ListWhereField_(); result->listwherefield__ = (yyval.listwherefield__); }
#line 2039 "Parser.C"
    break;

  case 69: /* ListWhereField_: WhereField_  */
#line 280 "syntax.y"
                { (yyval.listwherefield__) = new ListWhereField_(); (yyval.listwherefield__)->push_back((yyvsp[0].wherefield__)); result->listwherefield__ = (yyval.listwherefield__); }
#line 2045 "Parser.C"
    break;

  case 70: /* ListWhereField_: WhereField_ _COMMA ListWhereField_  */
#line 281 "syntax.y"
                                       { (yyvsp[0].listwherefield__)->push_back((yyvsp[-2].wherefield__)); (yyval.listwherefield__) = (yyvsp[0].listwherefield__); result->listwherefield__ = (yyval.listwherefield__); }
#line 2051 "Parser.C"
    break;

  case 71: /* WhereField_: Type _IDENT_ _EQ Expr  */
#line 283 "syntax.y"
                                    { (yyval.wherefield__) = new WhereField((yyvsp[-3].type_), (yyvsp[-2]._string), (yyvsp[0].expr_)); result->wherefield__ = (yyval.wherefield__); }
#line 2057 "Parser.C"
    break;

  case 72: /* ListRecordField_: %empty  */
#line 285 "syntax.y"
                               { (yyval.listrecordfield__) = new ListRecordField_(); result->listrecordfield__ = (yyval.listrecordfield__); }
#line 2063 "Parser.C"
    break;

  case 73: /* ListRecordField_: RecordField_  */
#line 286 "syntax.y"
                 { (yyval.listrecordfield__) = new ListRecordField_(); (yyval.listrecordfield__)->push_back((yyvsp[0].recordfield__)); result->listrecordfield__ = (yyval.listrecordfield__); }
#line 2069 "Parser.C"
    break;

  case 74: /* ListRecordField_: RecordField_ _COMMA ListRecordField_  */
#line 287 "syntax.y"
                                         { (yyvsp[0].listrecordfield__)->push_back((yyvsp[-2].recordfield__)); (yyval.listrecordfield__) = (yyvsp[0].listrecordfield__); result->listrecordfield__ = (yyval.listrecordfield__); }
#line 2075 "Parser.C"
    break;

  case 75: /* RecordField_: _IDENT_ _EQ Expr  */
#line 289 "syntax.y"
                                { (yyval.recordfield__) = new RecordField((yyvsp[-2]._string), (yyvsp[0].expr_)); result->recordfield__ = (yyval.recordfield__); }
#line 2081 "Parser.C"
    break;

  case 76: /* ListVariantField_: %empty  */
#line 291 "syntax.y"
                                { (yyval.listvariantfield__) = new ListVariantField_(); result->listvariantfield__ = (yyval.listvariantfield__); }
#line 2087 "Parser.C"
    break;

  case 77: /* ListVariantField_: VariantField_  */
#line 292 "syntax.y"
                  { (yyval.listvariantfield__) = new ListVariantField_(); (yyval.listvariantfield__)->push_back((yyvsp[0].variantfield__)); result->listvariantfield__ = (yyval.listvariantfield__); }
#line 2093 "Parser.C"
    break;

  case 78: /* ListVariantField_: VariantField_ _BAR ListVariantField_  */
#line 293 "syntax.y"
                                         { (yyvsp[0].listvariantfield__)->push_back((yyvsp[-2].variantfield__)); (yyval.listvariantfield__) = (yyvsp[0].listvariantfield__); result->listvariantfield__ = (yyval.listvariantfield__); }
#line 2099 "Parser.C"
    break;

  case 79: /* VariantField_: _LT _IDENT_ _EQ _IDENT_ _GT _RDARROW Expr  */
#line 295 "syntax.y"
                                                          { (yyval.variantfield__) = new VariantField((yyvsp[-5]._string), (yyvsp[-3]._string), (yyvsp[0].expr_)); result->variantfield__ = (yyval.variantfield__); }
#line 2105 "Parser.C"
    break;

  case 80: /* Statement: _KW_import _STRING_  */
#line 297 "syntax.y"
                                { (yyval.statement_) = new Import((yyvsp[0]._string)); result->statement_ = (yyval.statement_); }
#line 2111 "Parser.C"
    break;

  case 81: /* Statement: _KW_def Type _IDENT_ _EQ Expr  */
#line 298 "syntax.y"
                                  { (yyval.statement_) = new Definition((yyvsp[-3].type_), (yyvsp[-2]._string), (yyvsp[0].expr_)); result->statement_ = (yyval.statement_); }
#line 2117 "Parser.C"
    break;

  case 82: /* Statement: _KW_typedef _IDENT_ _EQ Type  */
#line 299 "syntax.y"
                                 { (yyval.statement_) = new TypeDefinition((yyvsp[-2]._string), (yyvsp[0].type_)); result->statement_ = (yyval.statement_); }
#line 2123 "Parser.C"
    break;

  case 83: /* Statement: Expr _LARROW Expr  */
#line 300 "syntax.y"
                      { (yyval.statement_) = new Assignment((yyvsp[-2].expr_), (yyvsp[0].expr_)); result->statement_ = (yyval.statement_); }
#line 2129 "Parser.C"
    break;

  case 84: /* Statement: _KW_if _LPAREN Expr _RPAREN _LBRACE ListStatement _RBRACE  */
#line 301 "syntax.y"
                                                              { std::reverse((yyvsp[-1].liststatement_)->begin(),(yyvsp[-1].liststatement_)->end()) ;(yyval.statement_) = new IfStatement((yyvsp[-4].expr_), (yyvsp[-1].liststatement_)); result->statement_ = (yyval.statement_); }
#line 2135 "Parser.C"
    break;

  case 85: /* Statement: _KW_if _LPAREN Expr _RPAREN _LBRACE ListStatement _RBRACE _KW_else _LBRACE ListStatement _RBRACE  */
#line 302 "syntax.y"
                                                                                                     { std::reverse((yyvsp[-5].liststatement_)->begin(),(yyvsp[-5].liststatement_)->end()) ; std::reverse((yyvsp[-1].liststatement_)->begin(),(yyvsp[-1].liststatement_)->end()) ;(yyval.statement_) = new IfElseStatement((yyvsp[-8].expr_), (yyvsp[-5].liststatement_), (yyvsp[-1].liststatement_)); result->statement_ = (yyval.statement_); }
#line 2141 "Parser.C"
    break;

  case 86: /* Statement: _KW_loop _LBRACE ListStatement _RBRACE  */
#line 303 "syntax.y"
                                           { std::reverse((yyvsp[-1].liststatement_)->begin(),(yyvsp[-1].liststatement_)->end()) ;(yyval.statement_) = new Loop((yyvsp[-1].liststatement_)); result->statement_ = (yyval.statement_); }
#line 2147 "Parser.C"
    break;

  case 87: /* Statement: _KW_break  */
#line 304 "syntax.y"
              { (yyval.statement_) = new Break(); result->statement_ = (yyval.statement_); }
#line 2153 "Parser.C"
    break;

  case 88: /* Statement: _KW_continue  */
#line 305 "syntax.y"
                 { (yyval.statement_) = new Continue(); result->statement_ = (yyval.statement_); }
#line 2159 "Parser.C"
    break;

  case 89: /* Statement: _KW_return  */
#line 306 "syntax.y"
               { (yyval.statement_) = new Return(); result->statement_ = (yyval.statement_); }
#line 2165 "Parser.C"
    break;

  case 90: /* Statement: _KW_eval Expr  */
#line 307 "syntax.y"
                  { (yyval.statement_) = new Eval((yyvsp[0].expr_)); result->statement_ = (yyval.statement_); }
#line 2171 "Parser.C"
    break;

  case 91: /* ListStatement: %empty  */
#line 309 "syntax.y"
                            { (yyval.liststatement_) = new ListStatement(); result->liststatement_ = (yyval.liststatement_); }
#line 2177 "Parser.C"
    break;

  case 92: /* ListStatement: Statement  */
#line 310 "syntax.y"
              { (yyval.liststatement_) = new ListStatement(); (yyval.liststatement_)->push_back((yyvsp[0].statement_)); result->liststatement_ = (yyval.liststatement_); }
#line 2183 "Parser.C"
    break;

  case 93: /* ListStatement: Statement _SEMI ListStatement  */
#line 311 "syntax.y"
                                  { (yyvsp[0].liststatement_)->push_back((yyvsp[-2].statement_)); (yyval.liststatement_) = (yyvsp[0].liststatement_); result->liststatement_ = (yyval.liststatement_); }
#line 2189 "Parser.C"
    break;

  case 94: /* ListType: %empty  */
#line 313 "syntax.y"
                       { (yyval.listtype_) = new ListType(); result->listtype_ = (yyval.listtype_); }
#line 2195 "Parser.C"
    break;

  case 95: /* ListType: Type  */
#line 314 "syntax.y"
         { (yyval.listtype_) = new ListType(); (yyval.listtype_)->push_back((yyvsp[0].type_)); result->listtype_ = (yyval.listtype_); }
#line 2201 "Parser.C"
    break;

  case 96: /* ListType: Type _COMMA ListType  */
#line 315 "syntax.y"
                         { (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)); (yyval.listtype_) = (yyvsp[0].listtype_); result->listtype_ = (yyval.listtype_); }
#line 2207 "Parser.C"
    break;

  case 97: /* Type: _UNDERSCORE  */
#line 317 "syntax.y"
                   { (yyval.type_) = new AutoType(); result->type_ = (yyval.type_); }
#line 2213 "Parser.C"
    break;

  case 98: /* Type: _KW_Bool  */
#line 318 "syntax.y"
             { (yyval.type_) = new BoolType(); result->type_ = (yyval.type_); }
#line 2219 "Parser.C"
    break;

  case 99: /* Type: _KW_Nat  */
#line 319 "syntax.y"
            { (yyval.type_) = new NatType(); result->type_ = (yyval.type_); }
#line 2225 "Parser.C"
    break;

  case 100: /* Type: _KW_Ref Type  */
#line 320 "syntax.y"
                 { (yyval.type_) = new RefType((yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2231 "Parser.C"
    break;

  case 101: /* Type: _IDENT_  */
#line 321 "syntax.y"
            { (yyval.type_) = new VarType((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 2237 "Parser.C"
    break;

  case 102: /* Type: _PERCENT _IDENT_ _DOT Type  */
#line 322 "syntax.y"
                               { (yyval.type_) = new UniType((yyvsp[-2]._string), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2243 "Parser.C"
    break;

  case 103: /* Type: Type _RARROW Type  */
#line 323 "syntax.y"
                      { (yyval.type_) = new FunType((yyvsp[-2].type_), (yyvsp[0].type_)); result->type_ = (yyval.type_); }
#line 2249 "Parser.C"
    break;

  case 104: /* Type: _LT ListType _GT  */
#line 324 "syntax.y"
                     { std::reverse((yyvsp[-1].listtype_)->begin(),(yyvsp[-1].listtype_)->end()) ;(yyval.type_) = new TupleType((yyvsp[-1].listtype_)); result->type_ = (yyval.type_); }
#line 2255 "Parser.C"
    break;

  case 105: /* Type: _LBRACE ListRecordTypeField_ _RBRACE  */
#line 325 "syntax.y"
                                         { std::reverse((yyvsp[-1].listrecordtypefield__)->begin(),(yyvsp[-1].listrecordtypefield__)->end()) ;(yyval.type_) = new RecordType((yyvsp[-1].listrecordtypefield__)); result->type_ = (yyval.type_); }
#line 2261 "Parser.C"
    break;

  case 106: /* Type: _LT ListVariantTypeField_ _GT  */
#line 326 "syntax.y"
                                  { std::reverse((yyvsp[-1].listvarianttypefield__)->begin(),(yyvsp[-1].listvarianttypefield__)->end()) ;(yyval.type_) = new VariantType((yyvsp[-1].listvarianttypefield__)); result->type_ = (yyval.type_); }
#line 2267 "Parser.C"
    break;

  case 107: /* Type: _LBRACK Type _RBRACK  */
#line 327 "syntax.y"
                         { (yyval.type_) = new ArrayType((yyvsp[-1].type_)); result->type_ = (yyval.type_); }
#line 2273 "Parser.C"
    break;

  case 108: /* Type: _KW_Int  */
#line 328 "syntax.y"
            { (yyval.type_) = new IntType(); result->type_ = (yyval.type_); }
#line 2279 "Parser.C"
    break;

  case 109: /* Type: _KW_Real  */
#line 329 "syntax.y"
             { (yyval.type_) = new RealType(); result->type_ = (yyval.type_); }
#line 2285 "Parser.C"
    break;

  case 110: /* Type: _LPAREN Type _RPAREN  */
#line 330 "syntax.y"
                         { (yyval.type_) = (yyvsp[-1].type_); result->type_ = (yyval.type_); }
#line 2291 "Parser.C"
    break;

  case 111: /* ListRecordTypeField_: %empty  */
#line 332 "syntax.y"
                                   { (yyval.listrecordtypefield__) = new ListRecordTypeField_(); result->listrecordtypefield__ = (yyval.listrecordtypefield__); }
#line 2297 "Parser.C"
    break;

  case 112: /* ListRecordTypeField_: RecordTypeField_  */
#line 333 "syntax.y"
                     { (yyval.listrecordtypefield__) = new ListRecordTypeField_(); (yyval.listrecordtypefield__)->push_back((yyvsp[0].recordtypefield__)); result->listrecordtypefield__ = (yyval.listrecordtypefield__); }
#line 2303 "Parser.C"
    break;

  case 113: /* ListRecordTypeField_: RecordTypeField_ _COMMA ListRecordTypeField_  */
#line 334 "syntax.y"
                                                 { (yyvsp[0].listrecordtypefield__)->push_back((yyvsp[-2].recordtypefield__)); (yyval.listrecordtypefield__) = (yyvsp[0].listrecordtypefield__); result->listrecordtypefield__ = (yyval.listrecordtypefield__); }
#line 2309 "Parser.C"
    break;

  case 114: /* RecordTypeField_: _IDENT_ _COLON Type  */
#line 336 "syntax.y"
                                       { (yyval.recordtypefield__) = new RecordTypeField((yyvsp[-2]._string), (yyvsp[0].type_)); result->recordtypefield__ = (yyval.recordtypefield__); }
#line 2315 "Parser.C"
    break;

  case 115: /* ListVariantTypeField_: %empty  */
#line 338 "syntax.y"
                                    { (yyval.listvarianttypefield__) = new ListVariantTypeField_(); result->listvarianttypefield__ = (yyval.listvarianttypefield__); }
#line 2321 "Parser.C"
    break;

  case 116: /* ListVariantTypeField_: VariantTypeField_  */
#line 339 "syntax.y"
                      { (yyval.listvarianttypefield__) = new ListVariantTypeField_(); (yyval.listvarianttypefield__)->push_back((yyvsp[0].varianttypefield__)); result->listvarianttypefield__ = (yyval.listvarianttypefield__); }
#line 2327 "Parser.C"
    break;

  case 117: /* ListVariantTypeField_: VariantTypeField_ _COMMA ListVariantTypeField_  */
#line 340 "syntax.y"
                                                   { (yyvsp[0].listvarianttypefield__)->push_back((yyvsp[-2].varianttypefield__)); (yyval.listvarianttypefield__) = (yyvsp[0].listvarianttypefield__); result->listvarianttypefield__ = (yyval.listvarianttypefield__); }
#line 2333 "Parser.C"
    break;

  case 118: /* VariantTypeField_: _IDENT_ _COLON Type  */
#line 342 "syntax.y"
                                        { (yyval.varianttypefield__) = new VariantTypeField((yyvsp[-2]._string), (yyvsp[0].type_)); result->varianttypefield__ = (yyval.varianttypefield__); }
#line 2339 "Parser.C"
    break;


#line 2343 "Parser.C"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, result);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 345 "syntax.y"



/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program* from string. */
Program* psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse ListExpr* from file. */
ListExpr* pListExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr* from string. */
ListExpr* psListExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr8(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr8(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListAbstractionField_* from file. */
ListAbstractionField_* pListAbstractionField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listabstractionfield__->begin(), result.listabstractionfield__->end());
    return result.listabstractionfield__;
  }
}

/* Entrypoint: parse ListAbstractionField_* from string. */
ListAbstractionField_* psListAbstractionField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listabstractionfield__->begin(), result.listabstractionfield__->end());
    return result.listabstractionfield__;
  }
}

/* Entrypoint: parse AbstractionField_* from file. */
AbstractionField_* pAbstractionField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.abstractionfield__;
  }
}

/* Entrypoint: parse AbstractionField_* from string. */
AbstractionField_* psAbstractionField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.abstractionfield__;
  }
}

/* Entrypoint: parse ListWhereField_* from file. */
ListWhereField_* pListWhereField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listwherefield__->begin(), result.listwherefield__->end());
    return result.listwherefield__;
  }
}

/* Entrypoint: parse ListWhereField_* from string. */
ListWhereField_* psListWhereField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listwherefield__->begin(), result.listwherefield__->end());
    return result.listwherefield__;
  }
}

/* Entrypoint: parse WhereField_* from file. */
WhereField_* pWhereField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.wherefield__;
  }
}

/* Entrypoint: parse WhereField_* from string. */
WhereField_* psWhereField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.wherefield__;
  }
}

/* Entrypoint: parse ListRecordField_* from file. */
ListRecordField_* pListRecordField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfield__->begin(), result.listrecordfield__->end());
    return result.listrecordfield__;
  }
}

/* Entrypoint: parse ListRecordField_* from string. */
ListRecordField_* psListRecordField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfield__->begin(), result.listrecordfield__->end());
    return result.listrecordfield__;
  }
}

/* Entrypoint: parse RecordField_* from file. */
RecordField_* pRecordField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfield__;
  }
}

/* Entrypoint: parse RecordField_* from string. */
RecordField_* psRecordField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfield__;
  }
}

/* Entrypoint: parse ListVariantField_* from file. */
ListVariantField_* pListVariantField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvariantfield__->begin(), result.listvariantfield__->end());
    return result.listvariantfield__;
  }
}

/* Entrypoint: parse ListVariantField_* from string. */
ListVariantField_* psListVariantField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvariantfield__->begin(), result.listvariantfield__->end());
    return result.listvariantfield__;
  }
}

/* Entrypoint: parse VariantField_* from file. */
VariantField_* pVariantField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfield__;
  }
}

/* Entrypoint: parse VariantField_* from string. */
VariantField_* psVariantField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfield__;
  }
}

/* Entrypoint: parse Statement* from file. */
Statement* pStatement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statement_;
  }
}

/* Entrypoint: parse Statement* from string. */
Statement* psStatement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statement_;
  }
}

/* Entrypoint: parse ListStatement* from file. */
ListStatement* pListStatement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststatement_->begin(), result.liststatement_->end());
    return result.liststatement_;
  }
}

/* Entrypoint: parse ListStatement* from string. */
ListStatement* psListStatement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststatement_->begin(), result.liststatement_->end());
    return result.liststatement_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListRecordTypeField_* from file. */
ListRecordTypeField_* pListRecordTypeField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordtypefield__->begin(), result.listrecordtypefield__->end());
    return result.listrecordtypefield__;
  }
}

/* Entrypoint: parse ListRecordTypeField_* from string. */
ListRecordTypeField_* psListRecordTypeField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordtypefield__->begin(), result.listrecordtypefield__->end());
    return result.listrecordtypefield__;
  }
}

/* Entrypoint: parse RecordTypeField_* from file. */
RecordTypeField_* pRecordTypeField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordtypefield__;
  }
}

/* Entrypoint: parse RecordTypeField_* from string. */
RecordTypeField_* psRecordTypeField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordtypefield__;
  }
}

/* Entrypoint: parse ListVariantTypeField_* from file. */
ListVariantTypeField_* pListVariantTypeField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvarianttypefield__->begin(), result.listvarianttypefield__->end());
    return result.listvarianttypefield__;
  }
}

/* Entrypoint: parse ListVariantTypeField_* from string. */
ListVariantTypeField_* psListVariantTypeField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvarianttypefield__->begin(), result.listvarianttypefield__->end());
    return result.listvarianttypefield__;
  }
}

/* Entrypoint: parse VariantTypeField_* from file. */
VariantTypeField_* pVariantTypeField_(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varianttypefield__;
  }
}

/* Entrypoint: parse VariantTypeField_* from string. */
VariantTypeField_* psVariantTypeField_(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = syntax__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = syntax__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  syntax__delete_buffer(buf, scanner);
  syntax_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varianttypefield__;
  }
}



