/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lexer.y"

#include <stdio.h>
#include <string.h>

extern FILE *yyin;  // 声明 yyin，指向输入文件
extern char* yytext;     // 引入 Flex 的当前词法单元文本

int yylex(void);
void yyerror(char *);

int count = 10000;
int indent_level = 0; // 用于控制缩进
extern int line_number;

void print_indent() {
    for (int i = 0; i < indent_level; i++) {
        printf(" ");
    }
}



#line 94 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    INTCONST = 258,                /* INTCONST  */
    FLOATCONST = 259,              /* FLOATCONST  */
    INT = 260,                     /* INT  */
    VOID = 261,                    /* VOID  */
    FLOAT = 262,                   /* FLOAT  */
    IDENT = 263,                   /* IDENT  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    ASSIGN = 266,                  /* ASSIGN  */
    MUL = 267,                     /* MUL  */
    UNARYOP = 268,                 /* UNARYOP  */
    CONST = 269,                   /* CONST  */
    COMMA = 270,                   /* COMMA  */
    EQUAL = 271,                   /* EQUAL  */
    OR = 272,                      /* OR  */
    AND = 273,                     /* AND  */
    WEIGHT = 274,                  /* WEIGHT  */
    IF = 275,                      /* IF  */
    ELSE = 276,                    /* ELSE  */
    WHILE = 277,                   /* WHILE  */
    BREAK = 278,                   /* BREAK  */
    CONTINUE = 279,                /* CONTINUE  */
    RETURN = 280,                  /* RETURN  */
    LPARENT = 281,                 /* LPARENT  */
    RPARENT = 282,                 /* RPARENT  */
    LBRACKET = 283,                /* LBRACKET  */
    RBRACKET = 284,                /* RBRACKET  */
    LBRACE = 285,                  /* LBRACE  */
    RBRACE = 286,                  /* RBRACE  */
    END = 287                      /* END  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTCONST 258
#define FLOATCONST 259
#define INT 260
#define VOID 261
#define FLOAT 262
#define IDENT 263
#define PLUS 264
#define MINUS 265
#define ASSIGN 266
#define MUL 267
#define UNARYOP 268
#define CONST 269
#define COMMA 270
#define EQUAL 271
#define OR 272
#define AND 273
#define WEIGHT 274
#define IF 275
#define ELSE 276
#define WHILE 277
#define BREAK 278
#define CONTINUE 279
#define RETURN 280
#define LPARENT 281
#define RPARENT 282
#define LBRACKET 283
#define RBRACKET 284
#define LBRACE 285
#define RBRACE 286
#define END 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "lexer.y"

    int ival;      // 用于存储整数
    float fval;    // 用于存储浮点数
    char *strval;  // 用于存储字符串

#line 217 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTCONST = 3,                   /* INTCONST  */
  YYSYMBOL_FLOATCONST = 4,                 /* FLOATCONST  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_IDENT = 8,                      /* IDENT  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_MUL = 12,                       /* MUL  */
  YYSYMBOL_UNARYOP = 13,                   /* UNARYOP  */
  YYSYMBOL_CONST = 14,                     /* CONST  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_EQUAL = 16,                     /* EQUAL  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_WEIGHT = 19,                    /* WEIGHT  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 24,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_LPARENT = 26,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 27,                   /* RPARENT  */
  YYSYMBOL_LBRACKET = 28,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 29,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 30,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 31,                    /* RBRACE  */
  YYSYMBOL_END = 32,                       /* END  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_line_list = 34,                 /* line_list  */
  YYSYMBOL_line = 35,                      /* line  */
  YYSYMBOL_CompUnit = 36,                  /* CompUnit  */
  YYSYMBOL_37_1 = 37,                      /* $@1  */
  YYSYMBOL_38_2 = 38,                      /* $@2  */
  YYSYMBOL_CompUnitOpt = 39,               /* CompUnitOpt  */
  YYSYMBOL_Decl = 40,                      /* Decl  */
  YYSYMBOL_41_3 = 41,                      /* $@3  */
  YYSYMBOL_42_4 = 42,                      /* $@4  */
  YYSYMBOL_ConstDecl = 43,                 /* ConstDecl  */
  YYSYMBOL_44_5 = 44,                      /* $@5  */
  YYSYMBOL_ConstDef = 45,                  /* ConstDef  */
  YYSYMBOL_46_6 = 46,                      /* $@6  */
  YYSYMBOL_47_7 = 47,                      /* $@7  */
  YYSYMBOL_ConstExp = 48,                  /* ConstExp  */
  YYSYMBOL_ConstExpTail = 49,              /* ConstExpTail  */
  YYSYMBOL_50_8 = 50,                      /* $@8  */
  YYSYMBOL_51_9 = 51,                      /* $@9  */
  YYSYMBOL_ConstInitVal = 52,              /* ConstInitVal  */
  YYSYMBOL_53_10 = 53,                     /* $@10  */
  YYSYMBOL_ConstInitValOpt = 54,           /* ConstInitValOpt  */
  YYSYMBOL_ConstInitValTail = 55,          /* ConstInitValTail  */
  YYSYMBOL_56_11 = 56,                     /* $@11  */
  YYSYMBOL_ConstDefTail = 57,              /* ConstDefTail  */
  YYSYMBOL_58_12 = 58,                     /* $@12  */
  YYSYMBOL_VarDecl = 59,                   /* VarDecl  */
  YYSYMBOL_60_13 = 60,                     /* $@13  */
  YYSYMBOL_VarDeclTail = 61,               /* VarDeclTail  */
  YYSYMBOL_62_14 = 62,                     /* $@14  */
  YYSYMBOL_VarDef = 63,                    /* VarDef  */
  YYSYMBOL_64_15 = 64,                     /* $@15  */
  YYSYMBOL_65_16 = 65,                     /* $@16  */
  YYSYMBOL_66_17 = 66,                     /* $@17  */
  YYSYMBOL_InitVal = 67,                   /* InitVal  */
  YYSYMBOL_68_18 = 68,                     /* $@18  */
  YYSYMBOL_InitValOpt = 69,                /* InitValOpt  */
  YYSYMBOL_InitValTail = 70,               /* InitValTail  */
  YYSYMBOL_71_19 = 71,                     /* $@19  */
  YYSYMBOL_FuncDef = 72,                   /* FuncDef  */
  YYSYMBOL_73_20 = 73,                     /* $@20  */
  YYSYMBOL_74_21 = 74,                     /* $@21  */
  YYSYMBOL_75_22 = 75,                     /* $@22  */
  YYSYMBOL_FuncType = 76,                  /* FuncType  */
  YYSYMBOL_77_23 = 77,                     /* $@23  */
  YYSYMBOL_78_24 = 78,                     /* $@24  */
  YYSYMBOL_79_25 = 79,                     /* $@25  */
  YYSYMBOL_BType = 80,                     /* BType  */
  YYSYMBOL_81_26 = 81,                     /* $@26  */
  YYSYMBOL_82_27 = 82,                     /* $@27  */
  YYSYMBOL_FuncFParams = 83,               /* FuncFParams  */
  YYSYMBOL_84_28 = 84,                     /* $@28  */
  YYSYMBOL_FuncFParam = 85,                /* FuncFParam  */
  YYSYMBOL_86_29 = 86,                     /* $@29  */
  YYSYMBOL_87_30 = 87,                     /* $@30  */
  YYSYMBOL_ExpOPT = 88,                    /* ExpOPT  */
  YYSYMBOL_89_31 = 89,                     /* $@31  */
  YYSYMBOL_ExpTail = 90,                   /* ExpTail  */
  YYSYMBOL_91_32 = 91,                     /* $@32  */
  YYSYMBOL_92_33 = 92,                     /* $@33  */
  YYSYMBOL_FuncFParamTail = 93,            /* FuncFParamTail  */
  YYSYMBOL_94_34 = 94,                     /* $@34  */
  YYSYMBOL_FuncFParamsOpt = 95,            /* FuncFParamsOpt  */
  YYSYMBOL_Stmt = 96,                      /* Stmt  */
  YYSYMBOL_97_35 = 97,                     /* $@35  */
  YYSYMBOL_98_36 = 98,                     /* $@36  */
  YYSYMBOL_99_37 = 99,                     /* $@37  */
  YYSYMBOL_100_38 = 100,                   /* $@38  */
  YYSYMBOL_101_39 = 101,                   /* $@39  */
  YYSYMBOL_102_40 = 102,                   /* $@40  */
  YYSYMBOL_103_41 = 103,                   /* $@41  */
  YYSYMBOL_104_42 = 104,                   /* $@42  */
  YYSYMBOL_105_43 = 105,                   /* $@43  */
  YYSYMBOL_106_44 = 106,                   /* $@44  */
  YYSYMBOL_107_45 = 107,                   /* $@45  */
  YYSYMBOL_108_46 = 108,                   /* $@46  */
  YYSYMBOL_109_47 = 109,                   /* $@47  */
  YYSYMBOL_110_48 = 110,                   /* $@48  */
  YYSYMBOL_StmtOpt = 111,                  /* StmtOpt  */
  YYSYMBOL_112_49 = 112,                   /* $@49  */
  YYSYMBOL_Block = 113,                    /* Block  */
  YYSYMBOL_114_50 = 114,                   /* $@50  */
  YYSYMBOL_115_51 = 115,                   /* $@51  */
  YYSYMBOL_BlockItem = 116,                /* BlockItem  */
  YYSYMBOL_117_52 = 117,                   /* $@52  */
  YYSYMBOL_118_53 = 118,                   /* $@53  */
  YYSYMBOL_BlockItemTail = 119,            /* BlockItemTail  */
  YYSYMBOL_PrimaryExp = 120,               /* PrimaryExp  */
  YYSYMBOL_121_54 = 121,                   /* $@54  */
  YYSYMBOL_122_55 = 122,                   /* $@55  */
  YYSYMBOL_123_56 = 123,                   /* $@56  */
  YYSYMBOL_124_57 = 124,                   /* $@57  */
  YYSYMBOL_Exp = 125,                      /* Exp  */
  YYSYMBOL_126_58 = 126,                   /* $@58  */
  YYSYMBOL_ExpOpt = 127,                   /* ExpOpt  */
  YYSYMBOL_Cond = 128,                     /* Cond  */
  YYSYMBOL_129_59 = 129,                   /* $@59  */
  YYSYMBOL_AddExp = 130,                   /* AddExp  */
  YYSYMBOL_131_60 = 131,                   /* $@60  */
  YYSYMBOL_AddExpTail = 132,               /* AddExpTail  */
  YYSYMBOL_133_61 = 133,                   /* $@61  */
  YYSYMBOL_134_62 = 134,                   /* $@62  */
  YYSYMBOL_MulExp = 135,                   /* MulExp  */
  YYSYMBOL_136_63 = 136,                   /* $@63  */
  YYSYMBOL_MulExpTail = 137,               /* MulExpTail  */
  YYSYMBOL_138_64 = 138,                   /* $@64  */
  YYSYMBOL_UnaryExp = 139,                 /* UnaryExp  */
  YYSYMBOL_140_65 = 140,                   /* $@65  */
  YYSYMBOL_141_66 = 141,                   /* $@66  */
  YYSYMBOL_142_67 = 142,                   /* $@67  */
  YYSYMBOL_143_68 = 143,                   /* $@68  */
  YYSYMBOL_FuncRParamsOpt = 144,           /* FuncRParamsOpt  */
  YYSYMBOL_FuncRParams = 145,              /* FuncRParams  */
  YYSYMBOL_146_69 = 146,                   /* $@69  */
  YYSYMBOL_LVal = 147,                     /* LVal  */
  YYSYMBOL_148_70 = 148,                   /* $@70  */
  YYSYMBOL_LValTail = 149,                 /* LValTail  */
  YYSYMBOL_150_71 = 150,                   /* $@71  */
  YYSYMBOL_151_72 = 151,                   /* $@72  */
  YYSYMBOL_RelExp = 152,                   /* RelExp  */
  YYSYMBOL_153_73 = 153,                   /* $@73  */
  YYSYMBOL_RelExpTail = 154,               /* RelExpTail  */
  YYSYMBOL_155_74 = 155,                   /* $@74  */
  YYSYMBOL_EqExp = 156,                    /* EqExp  */
  YYSYMBOL_157_75 = 157,                   /* $@75  */
  YYSYMBOL_EqExpTail = 158,                /* EqExpTail  */
  YYSYMBOL_159_76 = 159,                   /* $@76  */
  YYSYMBOL_LAndExp = 160,                  /* LAndExp  */
  YYSYMBOL_161_77 = 161,                   /* $@77  */
  YYSYMBOL_LAndExpTail = 162,              /* LAndExpTail  */
  YYSYMBOL_163_78 = 163,                   /* $@78  */
  YYSYMBOL_LOrExp = 164,                   /* LOrExp  */
  YYSYMBOL_165_79 = 165,                   /* $@79  */
  YYSYMBOL_LOrExpTail = 166,               /* LOrExpTail  */
  YYSYMBOL_167_80 = 167                    /* $@80  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    40,    43,    51,    51,    58,    58,    67,
      68,    72,    72,    78,    78,    86,    86,   101,   110,   101,
     118,   121,   126,   121,   131,   134,   135,   135,   146,   147,
     150,   150,   155,   159,   159,   164,   168,   168,   182,   182,
     187,   191,   191,   200,   209,   200,   216,   217,   217,   228,
     229,   232,   232,   237,   241,   247,   253,   241,   262,   262,
     272,   272,   282,   282,   295,   295,   305,   305,   317,   317,
     325,   331,   325,   339,   339,   346,   349,   354,   349,   359,
     363,   363,   368,   373,   374,   379,   385,   379,   394,   394,
     405,   405,   411,   416,   423,   411,   428,   433,   440,   428,
     445,   445,   456,   456,   467,   472,   467,   483,   483,   487,
     491,   496,   491,   507,   507,   515,   515,   525,   526,   530,
     535,   530,   544,   545,   545,   558,   558,   574,   574,   582,
     583,   586,   586,   594,   594,   602,   602,   608,   608,   614,
     617,   617,   625,   625,   631,   634,   634,   640,   645,   640,
     657,   657,   665,   666,   670,   671,   671,   679,   679,   690,
     695,   690,   700,   705,   705,   712,   712,   718,   723,   723,
     730,   730,   734,   738,   738,   746,   746,   751,   755,   755,
     763,   763,   768
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
  "\"end of file\"", "error", "\"invalid token\"", "INTCONST",
  "FLOATCONST", "INT", "VOID", "FLOAT", "IDENT", "PLUS", "MINUS", "ASSIGN",
  "MUL", "UNARYOP", "CONST", "COMMA", "EQUAL", "OR", "AND", "WEIGHT", "IF",
  "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", "LPARENT", "RPARENT",
  "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "END", "$accept",
  "line_list", "line", "CompUnit", "$@1", "$@2", "CompUnitOpt", "Decl",
  "$@3", "$@4", "ConstDecl", "$@5", "ConstDef", "$@6", "$@7", "ConstExp",
  "ConstExpTail", "$@8", "$@9", "ConstInitVal", "$@10", "ConstInitValOpt",
  "ConstInitValTail", "$@11", "ConstDefTail", "$@12", "VarDecl", "$@13",
  "VarDeclTail", "$@14", "VarDef", "$@15", "$@16", "$@17", "InitVal",
  "$@18", "InitValOpt", "InitValTail", "$@19", "FuncDef", "$@20", "$@21",
  "$@22", "FuncType", "$@23", "$@24", "$@25", "BType", "$@26", "$@27",
  "FuncFParams", "$@28", "FuncFParam", "$@29", "$@30", "ExpOPT", "$@31",
  "ExpTail", "$@32", "$@33", "FuncFParamTail", "$@34", "FuncFParamsOpt",
  "Stmt", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "StmtOpt", "$@49",
  "Block", "$@50", "$@51", "BlockItem", "$@52", "$@53", "BlockItemTail",
  "PrimaryExp", "$@54", "$@55", "$@56", "$@57", "Exp", "$@58", "ExpOpt",
  "Cond", "$@59", "AddExp", "$@60", "AddExpTail", "$@61", "$@62", "MulExp",
  "$@63", "MulExpTail", "$@64", "UnaryExp", "$@65", "$@66", "$@67", "$@68",
  "FuncRParamsOpt", "FuncRParams", "$@69", "LVal", "$@70", "LValTail",
  "$@71", "$@72", "RelExp", "$@73", "RelExpTail", "$@74", "EqExp", "$@75",
  "EqExpTail", "$@76", "LAndExp", "$@77", "LAndExpTail", "$@78", "LOrExp",
  "$@79", "LOrExpTail", "$@80", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-153)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -211,     9,  -211,  -211,    10,  -211,  -211,  -211,    17,  -211,
       7,  -211,    26,  -211,    13,    38,    42,    44,  -211,  -211,
    -211,    45,    28,  -211,  -211,  -211,    45,    47,    48,    51,
    -211,    52,    50,    49,  -211,  -211,    32,  -211,    53,    35,
      35,  -211,    33,  -211,  -211,    40,    35,  -211,    37,  -211,
    -211,    59,    47,  -211,    57,    45,  -211,    62,    52,  -211,
    -211,  -211,    49,  -211,  -211,    66,  -211,  -211,    53,    46,
    -211,  -211,    54,  -211,  -211,  -211,  -211,    55,    56,  -211,
    -211,    27,    63,  -211,  -211,  -211,  -211,    57,    60,  -211,
    -211,  -211,  -211,    35,  -211,  -211,  -211,  -211,    65,    14,
      70,     8,  -211,  -211,    58,  -211,     1,    12,  -211,  -211,
    -211,    63,  -211,  -211,  -211,  -211,    64,    76,    77,  -211,
      67,    68,    61,  -211,     1,    17,     3,    69,    74,    71,
      27,    27,  -211,    63,    73,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,    75,  -211,  -211,  -211,    72,    78,  -211,    79,
      82,    83,    81,    84,  -211,  -211,  -211,  -211,  -211,  -211,
      65,  -211,  -211,  -211,    80,    54,  -211,  -211,    85,  -211,
      86,  -211,    87,    88,    89,    90,  -211,    56,  -211,  -211,
      92,    93,    96,  -211,    68,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,    78,    74,    91,  -211,  -211,  -211,  -211,    95,
    -211,  -211,  -211,    94,  -211,  -211,  -211,  -211,    97,    98,
    -211,   100,  -211,    73,  -211,    75,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,     3,    99,  -211,     3,   107,  -211,  -211,
     112,  -211,  -211,  -211,  -211,  -211,  -211,  -211,   101,  -211,
       3,    99,  -211,  -211,  -211,   113,  -211,  -211,   112,  -211,
    -211,  -211,  -211,   101,  -211,  -211,   113,  -211
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,    10,     2,     4,     5,     1,     3,    54,    13,     6,
      58,     8,     0,    36,     0,     0,     0,     0,    15,    12,
      14,    64,     0,    59,    61,    63,    64,     0,     0,     0,
      55,     0,    41,    40,    65,    67,    68,    17,    35,    24,
      24,    38,     0,    83,    70,     0,    24,    33,     0,    21,
      42,     0,     0,    37,    82,    64,    56,     0,     0,    16,
     133,    44,    40,    80,    69,     0,   110,    18,    35,     0,
      20,   140,   127,    39,    70,    71,    57,     0,   133,    34,
      22,   139,   145,    47,    45,    46,   133,    82,    75,   111,
      26,    25,    19,    24,   135,   137,   134,   150,   144,   119,
       0,   127,   128,    81,     0,    72,   115,   133,    23,   140,
     140,   145,   142,   141,   157,   146,     0,     0,     0,   122,
       0,    53,     0,    73,   115,    13,    88,     0,    32,     0,
     139,   139,   151,   145,   162,   120,   124,   126,   148,    51,
      49,    48,    79,   117,   114,   116,     0,   127,   110,     0,
       0,     0,     0,     0,   112,    30,    28,    27,   136,   138,
     144,   159,   158,   127,   127,   127,    76,    74,     0,   129,
       0,    91,     0,     0,     0,     0,   105,   133,   143,   127,
       0,   154,     0,   153,    53,   127,    86,    89,    93,    97,
     101,   103,   127,    32,     0,   121,   155,   149,    52,     0,
     127,   131,   131,     0,    31,   160,   127,    77,     0,     0,
     178,     0,   106,   162,   156,    79,    87,    94,   132,   173,
      98,   161,    78,    88,   182,   168,    88,   109,   180,   179,
     177,   163,    99,   107,    95,   173,   175,   174,   172,   133,
      88,   182,   168,   170,   169,   167,   108,   181,   177,   163,
     165,   164,   176,   172,   133,   171,   167,   166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,   110,  -211,  -211,  -211,  -211,   -43,  -211,  -211,
    -211,  -211,    36,  -211,  -211,    31,   -36,  -211,  -211,  -106,
    -211,  -211,   -98,  -211,    29,  -211,  -211,  -211,   102,  -211,
     103,  -211,  -211,  -211,   -99,  -211,  -211,   -72,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,   -21,  -211,  -211,
    -211,  -211,    24,  -211,  -211,  -211,  -211,  -100,  -211,  -211,
     104,  -211,  -211,  -210,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
     -17,  -211,  -211,  -211,  -211,  -211,    11,  -211,  -211,  -211,
    -211,  -211,  -144,  -211,   -59,   -68,  -211,   -86,  -211,   -85,
    -211,  -211,   -60,  -211,   -24,  -211,  -104,  -211,  -211,  -211,
    -211,  -211,   -69,  -211,    -8,  -211,   -74,  -211,  -211,  -109,
    -211,  -115,  -211,   -97,  -211,  -111,  -211,   -92,  -211,  -102,
    -211,  -211,  -211,   -94,  -211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,     7,     8,     4,    11,    12,    13,
      19,    26,    38,    46,    78,    91,    50,    60,    93,    92,
     107,   129,   156,   177,    48,    58,    20,    21,    42,    52,
      33,    39,    40,    72,    84,   101,   122,   140,   165,     9,
      10,    36,    66,    14,    15,    16,    17,    27,    28,    29,
      43,    44,    54,    55,    88,   105,   142,   167,   185,   215,
      64,    74,    45,   145,   146,   200,   147,   148,   149,   201,
     223,   150,   202,   226,   151,   152,   153,   192,   234,   240,
      76,    77,   106,   124,   125,   126,   127,   115,   116,   163,
     117,   118,    85,    86,   170,   209,   210,    70,    71,    96,
     109,   110,    81,    82,   113,   133,    98,    99,   100,   164,
     111,   182,   183,   206,   119,   134,   162,   179,   213,   238,
     239,   251,   254,   230,   231,   244,   249,   224,   225,   237,
     242,   218,   219,   229,   235
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   128,   121,   169,    51,    31,  -113,   132,  -113,     5,
      57,   -85,   -60,   227,   -62,  -113,   232,  -123,  -125,   180,
     181,    22,   114,   -92,    -7,   -96,  -100,  -102,  -104,   160,
     246,   -11,  -118,   -90,    65,   194,    94,    95,    83,   -50,
      18,   199,    90,   -29,    23,   158,   159,    24,   169,   130,
     131,    25,   -66,    34,    30,    32,   208,   108,    35,   -84,
      37,   -43,   181,    49,    41,    53,   184,    56,    47,    59,
      61,   193,    63,    67,    75,    80,    97,   112,   120,   136,
     114,   137,   144,   139,    83,    89,    90,   123,   104,   155,
     135,    69,   141,   138,    68,   204,   186,    79,    87,   172,
     154,   161,   157,   166,   173,   175,   174,  -152,   196,   176,
    -130,     6,   198,   188,   189,   222,   228,   243,   187,   195,
     205,   190,   191,   197,   207,   217,   212,   220,   233,   216,
     236,   171,   250,   203,   211,   143,   178,   214,   168,   221,
     253,   257,   255,   241,     0,   248,   252,   247,     0,     0,
       0,     0,     0,   245,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103
};

static const yytype_int16 yycheck[] =
{
      86,   107,   101,   147,    40,    26,     5,   111,     7,     0,
      46,     8,     5,   223,     7,    14,   226,     3,     4,   163,
     164,     8,     8,    20,    14,    22,    23,    24,    25,   133,
     240,    14,    31,    30,    55,   179,     9,    10,    30,    31,
      14,   185,    30,    31,     6,   130,   131,     5,   192,   109,
     110,     7,     7,     5,    26,     8,   200,    93,     7,    27,
       8,    11,   206,    28,    15,    32,   165,    27,    15,    32,
      11,   177,    15,    11,     8,    29,    13,    12,     8,     3,
       8,     4,   125,    15,    30,    30,    30,    29,    28,    15,
      26,    60,    31,    26,    58,   193,    11,    68,    74,    20,
      31,    28,    31,    28,    22,    24,    23,    27,    15,    25,
      32,     1,   184,    26,    26,   215,    17,    16,    32,    27,
      29,    32,    32,    27,    29,    27,    32,    27,    21,    32,
      18,   148,    19,   192,   202,   124,   160,   206,   146,   213,
     249,   256,   253,   235,    -1,   242,   248,   241,    -1,    -1,
      -1,    -1,    -1,   239,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    36,    39,     0,    35,    37,    38,    72,
      73,    40,    41,    42,    76,    77,    78,    79,    14,    43,
      59,    60,     8,     6,     5,     7,    44,    80,    81,    82,
      26,    80,     8,    63,     5,     7,    74,     8,    45,    64,
      65,    15,    61,    83,    84,    95,    46,    15,    57,    28,
      49,    49,    62,    32,    85,    86,    27,    49,    58,    32,
      50,    11,    63,    15,    93,    80,    75,    11,    45,    48,
     130,   131,    66,    61,    94,     8,   113,   114,    47,    57,
      29,   135,   136,    30,    67,   125,   126,    85,    87,    30,
      30,    48,    52,    51,     9,    10,   132,    13,   139,   140,
     141,    68,   130,    93,    28,    88,   115,    53,    49,   133,
     134,   143,    12,   137,     8,   120,   121,   123,   124,   147,
       8,    67,    69,    29,   116,   117,   118,   119,    52,    54,
     135,   135,   139,   138,   148,    26,     3,     4,    26,    15,
      70,    31,    89,   119,    40,    96,    97,    99,   100,   101,
     104,   107,   108,   109,    31,    15,    55,    31,   132,   132,
     139,    28,   149,   122,   142,    71,    28,    90,   147,   125,
     127,   113,    20,    22,    23,    24,    25,    56,   137,   150,
     125,   125,   144,   145,    67,    91,    11,    32,    26,    26,
      32,    32,   110,    52,   125,    27,    15,    27,    70,   125,
      98,   102,   105,   127,    55,    29,   146,    29,   125,   128,
     129,   128,    32,   151,   145,    92,    32,    27,   164,   165,
      27,   149,    90,   103,   160,   161,   106,    96,    17,   166,
     156,   157,    96,    21,   111,   167,    18,   162,   152,   153,
     112,   160,   163,    16,   158,   130,    96,   166,   156,   159,
      19,   154,   162,   152,   155,   158,   130,   154
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    37,    36,    38,    36,    39,
      39,    41,    40,    42,    40,    44,    43,    46,    47,    45,
      48,    50,    51,    49,    49,    52,    53,    52,    54,    54,
      56,    55,    55,    58,    57,    57,    60,    59,    62,    61,
      61,    64,    63,    65,    66,    63,    67,    68,    67,    69,
      69,    71,    70,    70,    73,    74,    75,    72,    77,    76,
      78,    76,    79,    76,    81,    80,    82,    80,    84,    83,
      86,    87,    85,    89,    88,    88,    91,    92,    90,    90,
      94,    93,    93,    95,    95,    97,    98,    96,    99,    96,
     100,    96,   101,   102,   103,    96,   104,   105,   106,    96,
     107,    96,   108,    96,   109,   110,    96,   112,   111,   111,
     114,   115,   113,   117,   116,   118,   116,   119,   119,   121,
     122,   120,   120,   123,   120,   124,   120,   126,   125,   127,
     127,   129,   128,   131,   130,   133,   132,   134,   132,   132,
     136,   135,   138,   137,   137,   140,   139,   141,   142,   139,
     143,   139,   144,   144,   145,   146,   145,   148,   147,   150,
     151,   149,   149,   153,   152,   155,   154,   154,   157,   156,
     159,   158,   158,   161,   160,   163,   162,   162,   165,   164,
     167,   166,   166
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     3,     0,     3,     1,
       0,     0,     2,     0,     2,     0,     6,     0,     0,     6,
       1,     0,     0,     6,     0,     1,     0,     4,     2,     0,
       0,     4,     0,     0,     4,     0,     0,     5,     0,     4,
       0,     0,     3,     0,     0,     6,     1,     0,     4,     2,
       0,     0,     4,     0,     0,     0,     0,     9,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     3,
       0,     0,     5,     0,     4,     0,     0,     0,     6,     0,
       0,     4,     0,     1,     0,     0,     0,     6,     0,     3,
       0,     2,     0,     0,     0,     9,     0,     0,     0,     8,
       0,     3,     0,     3,     0,     0,     5,     0,     3,     0,
       0,     0,     5,     0,     2,     0,     2,     2,     0,     0,
       0,     5,     1,     0,     2,     0,     2,     0,     2,     1,
       0,     0,     2,     0,     3,     0,     4,     0,     4,     0,
       0,     3,     0,     4,     0,     0,     2,     0,     0,     6,
       0,     3,     0,     1,     1,     0,     4,     0,     3,     0,
       0,     6,     0,     0,     3,     0,     4,     0,     0,     3,
       0,     4,     0,     0,     3,     0,     4,     0,     0,     3,
       0,     4,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* line: CompUnit  */
#line 43 "lexer.y"
                           {
                    indent_level++;
                }
#line 1569 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 51 "lexer.y"
                           {
                    print_indent();
                    indent_level++;
                    printf("CompUnit (%d)\n", line_number);
                }
#line 1579 "y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 58 "lexer.y"
                           {
                    print_indent();
                    indent_level++;
                    printf("CompUnit (%d)\n", line_number);
                }
#line 1589 "y.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 72 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Decl\n"); 
                }
#line 1599 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 78 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Decl\n"); 
                }
#line 1609 "y.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 86 "lexer.y"
                       {
                    print_indent(); 
                    indent_level++;
                    printf("ConstDecl (%d)\n", line_number);
                }
#line 1619 "y.tab.c"
    break;

  case 16: /* ConstDecl: CONST $@5 BType ConstDef ConstDefTail END  */
#line 92 "lexer.y"
                   {
                    print_indent();
                    indent_level++;
                    printf("SEMICN\n");
                }
#line 1629 "y.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 101 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("ConstDef (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1642 "y.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 110 "lexer.y"
                      {
                    print_indent();
                    indent_level++;
                    printf("ASSIGN\n");
                }
#line 1652 "y.tab.c"
    break;

  case 21: /* $@8: %empty  */
#line 121 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1661 "y.tab.c"
    break;

  case 22: /* $@9: %empty  */
#line 126 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1670 "y.tab.c"
    break;

  case 26: /* $@10: %empty  */
#line 135 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1679 "y.tab.c"
    break;

  case 27: /* ConstInitVal: LBRACE $@10 ConstInitValOpt RBRACE  */
#line 140 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1688 "y.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 150 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1697 "y.tab.c"
    break;

  case 33: /* $@12: %empty  */
#line 159 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1706 "y.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 168 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("VarDecl (%d)\n", line_number);
                }
#line 1716 "y.tab.c"
    break;

  case 37: /* VarDecl: $@13 BType VarDef VarDeclTail END  */
#line 176 "lexer.y"
                   {
                    print_indent();
                    printf("SEMICN\n");
                }
#line 1725 "y.tab.c"
    break;

  case 38: /* $@14: %empty  */
#line 182 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1734 "y.tab.c"
    break;

  case 41: /* $@15: %empty  */
#line 191 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("VarDef (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1747 "y.tab.c"
    break;

  case 43: /* $@16: %empty  */
#line 200 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("VarDef (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1760 "y.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 209 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1769 "y.tab.c"
    break;

  case 47: /* $@18: %empty  */
#line 217 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1778 "y.tab.c"
    break;

  case 48: /* InitVal: LBRACE $@18 InitValOpt RBRACE  */
#line 222 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1787 "y.tab.c"
    break;

  case 51: /* $@19: %empty  */
#line 232 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1796 "y.tab.c"
    break;

  case 54: /* $@20: %empty  */
#line 241 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncDef (%d)\n", line_number); 
                }
#line 1806 "y.tab.c"
    break;

  case 55: /* $@21: %empty  */
#line 247 "lexer.y"
                             {
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1817 "y.tab.c"
    break;

  case 56: /* $@22: %empty  */
#line 253 "lexer.y"
                                      {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1826 "y.tab.c"
    break;

  case 57: /* FuncDef: $@20 FuncType IDENT LPARENT $@21 FuncFParamsOpt RPARENT $@22 Block  */
#line 257 "lexer.y"
                      {  
                    indent_level++;
                }
#line 1834 "y.tab.c"
    break;

  case 58: /* $@23: %empty  */
#line 262 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1844 "y.tab.c"
    break;

  case 59: /* FuncType: $@23 VOID  */
#line 267 "lexer.y"
                    {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1854 "y.tab.c"
    break;

  case 60: /* $@24: %empty  */
#line 272 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1864 "y.tab.c"
    break;

  case 61: /* FuncType: $@24 INT  */
#line 277 "lexer.y"
                   {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1874 "y.tab.c"
    break;

  case 62: /* $@25: %empty  */
#line 282 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1884 "y.tab.c"
    break;

  case 63: /* FuncType: $@25 FLOAT  */
#line 287 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1894 "y.tab.c"
    break;

  case 64: /* $@26: %empty  */
#line 295 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("BType (%d)\n", line_number);
                }
#line 1904 "y.tab.c"
    break;

  case 65: /* BType: $@26 INT  */
#line 300 "lexer.y"
                   {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1914 "y.tab.c"
    break;

  case 66: /* $@27: %empty  */
#line 305 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("BType (%d)\n", line_number);
                }
#line 1924 "y.tab.c"
    break;

  case 67: /* BType: $@27 FLOAT  */
#line 310 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1934 "y.tab.c"
    break;

  case 68: /* $@28: %empty  */
#line 317 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncFParams (%d)\n", line_number);
                }
#line 1944 "y.tab.c"
    break;

  case 70: /* $@29: %empty  */
#line 325 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncFParam (%d)\n", line_number);
                }
#line 1954 "y.tab.c"
    break;

  case 71: /* $@30: %empty  */
#line 331 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                }
#line 1964 "y.tab.c"
    break;

  case 73: /* $@31: %empty  */
#line 339 "lexer.y"
                                   {
                    print_indent(); 
                    printf("LBRACKET\n");
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1975 "y.tab.c"
    break;

  case 76: /* $@32: %empty  */
#line 349 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1984 "y.tab.c"
    break;

  case 77: /* $@33: %empty  */
#line 354 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1993 "y.tab.c"
    break;

  case 80: /* $@34: %empty  */
#line 363 "lexer.y"
                       {
                    print_indent();
                    printf("COMMA (%d)\n", line_number);
                }
#line 2002 "y.tab.c"
    break;

  case 85: /* $@35: %empty  */
#line 379 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2012 "y.tab.c"
    break;

  case 86: /* $@36: %empty  */
#line 385 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 2021 "y.tab.c"
    break;

  case 87: /* Stmt: $@35 LVal ASSIGN $@36 Exp END  */
#line 390 "lexer.y"
                   {
                    print_indent(); 
                    printf("SEMICN\n");
                }
#line 2030 "y.tab.c"
    break;

  case 88: /* $@37: %empty  */
#line 394 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2040 "y.tab.c"
    break;

  case 89: /* Stmt: $@37 ExpOpt END  */
#line 400 "lexer.y"
                   {
                    print_indent(); 
                    indent_level++;
                    printf("SEMICN\n");
                }
#line 2050 "y.tab.c"
    break;

  case 90: /* $@38: %empty  */
#line 405 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2060 "y.tab.c"
    break;

  case 92: /* $@39: %empty  */
#line 411 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2070 "y.tab.c"
    break;

  case 93: /* $@40: %empty  */
#line 416 "lexer.y"
                          {
                    print_indent();
                    printf("IF\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2081 "y.tab.c"
    break;

  case 94: /* $@41: %empty  */
#line 423 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2090 "y.tab.c"
    break;

  case 96: /* $@42: %empty  */
#line 428 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2100 "y.tab.c"
    break;

  case 97: /* $@43: %empty  */
#line 433 "lexer.y"
                             {
                    print_indent();
                    printf("WHILE\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2111 "y.tab.c"
    break;

  case 98: /* $@44: %empty  */
#line 440 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2120 "y.tab.c"
    break;

  case 100: /* $@45: %empty  */
#line 445 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2130 "y.tab.c"
    break;

  case 101: /* Stmt: $@45 BREAK END  */
#line 450 "lexer.y"
                         {
                    print_indent();
                    printf("BREAK\n");
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2141 "y.tab.c"
    break;

  case 102: /* $@46: %empty  */
#line 456 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2151 "y.tab.c"
    break;

  case 103: /* Stmt: $@46 CONTINUE END  */
#line 461 "lexer.y"
                            {
                    print_indent();
                    printf("CONTINUE\n");
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2162 "y.tab.c"
    break;

  case 104: /* $@47: %empty  */
#line 467 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2172 "y.tab.c"
    break;

  case 105: /* $@48: %empty  */
#line 472 "lexer.y"
                      {
                    print_indent();
                    printf("RETURN\n");
                }
#line 2181 "y.tab.c"
    break;

  case 106: /* Stmt: $@47 RETURN $@48 ExpOpt END  */
#line 477 "lexer.y"
                   {
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2190 "y.tab.c"
    break;

  case 107: /* $@49: %empty  */
#line 483 "lexer.y"
                      {
                    print_indent();
                    printf("ELSE\n");
                }
#line 2199 "y.tab.c"
    break;

  case 110: /* $@50: %empty  */
#line 491 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Block (%d)\n", line_number);
                }
#line 2209 "y.tab.c"
    break;

  case 111: /* $@51: %empty  */
#line 496 "lexer.y"
                      {
                    print_indent();
                    printf("LBRACE\n");
                }
#line 2218 "y.tab.c"
    break;

  case 112: /* Block: $@50 LBRACE $@51 BlockItemTail RBRACE  */
#line 501 "lexer.y"
                      {
                    print_indent();
                    printf("RBRACE\n");
                }
#line 2227 "y.tab.c"
    break;

  case 113: /* $@52: %empty  */
#line 507 "lexer.y"
                  {
                    if(count < indent_level) indent_level = count;
                    else count = indent_level;
                    print_indent();
                    indent_level++;
                    printf("BlockItem (%d)\n", line_number);
                }
#line 2239 "y.tab.c"
    break;

  case 115: /* $@53: %empty  */
#line 515 "lexer.y"
                  {
                    if(count < indent_level) indent_level = count;
                    else count = indent_level;
                    print_indent();
                    indent_level++;
                    printf("BlockItem (%d)\n", line_number);
                }
#line 2251 "y.tab.c"
    break;

  case 119: /* $@54: %empty  */
#line 530 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2261 "y.tab.c"
    break;

  case 120: /* $@55: %empty  */
#line 535 "lexer.y"
                       {
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2270 "y.tab.c"
    break;

  case 121: /* PrimaryExp: $@54 LPARENT $@55 Exp RPARENT  */
#line 540 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2279 "y.tab.c"
    break;

  case 123: /* $@56: %empty  */
#line 545 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2289 "y.tab.c"
    break;

  case 124: /* PrimaryExp: $@56 INTCONST  */
#line 550 "lexer.y"
                        {
                    print_indent();
                    indent_level++;
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("INTCON: %d\n", (yyvsp[0].ival));
                }
#line 2302 "y.tab.c"
    break;

  case 125: /* $@57: %empty  */
#line 558 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2312 "y.tab.c"
    break;

  case 126: /* PrimaryExp: $@57 FLOATCONST  */
#line 563 "lexer.y"
                          {
                    print_indent();
                    indent_level++;
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("FLOATCON: %s\n", (yyvsp[0].strval));
                }
#line 2325 "y.tab.c"
    break;

  case 127: /* $@58: %empty  */
#line 574 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Exp (%d)\n", line_number);
                }
#line 2335 "y.tab.c"
    break;

  case 131: /* $@59: %empty  */
#line 586 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Cond (%d)\n", line_number);
                }
#line 2345 "y.tab.c"
    break;

  case 133: /* $@60: %empty  */
#line 594 "lexer.y"
                  {         /* 加减表达式  */
                    print_indent();
                    indent_level++;
                    printf("AddExp (%d)\n", line_number);
                }
#line 2355 "y.tab.c"
    break;

  case 135: /* $@61: %empty  */
#line 602 "lexer.y"
                      {
                    print_indent();
                    indent_level++;
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 2365 "y.tab.c"
    break;

  case 137: /* $@62: %empty  */
#line 608 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 2375 "y.tab.c"
    break;

  case 140: /* $@63: %empty  */
#line 617 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf(" MulExp (%d)\n", line_number);
                }
#line 2385 "y.tab.c"
    break;

  case 142: /* $@64: %empty  */
#line 625 "lexer.y"
                     {
                    print_indent();
                    indent_level++;
                    printf("MUL: %s\n", (yyvsp[0].strval));
                }
#line 2395 "y.tab.c"
    break;

  case 145: /* $@65: %empty  */
#line 634 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 2405 "y.tab.c"
    break;

  case 147: /* $@66: %empty  */
#line 640 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 2415 "y.tab.c"
    break;

  case 148: /* $@67: %empty  */
#line 645 "lexer.y"
                             {
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2427 "y.tab.c"
    break;

  case 149: /* UnaryExp: $@66 IDENT LPARENT $@67 FuncRParamsOpt RPARENT  */
#line 653 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2436 "y.tab.c"
    break;

  case 150: /* $@68: %empty  */
#line 657 "lexer.y"
                         {
                    print_indent();
                    indent_level++;
                    printf("UNARYOP: %s\n", (yyvsp[0].strval));
                }
#line 2446 "y.tab.c"
    break;

  case 155: /* $@69: %empty  */
#line 671 "lexer.y"
                           {
                    print_indent();
                    printf("COMMA\n");
                }
#line 2455 "y.tab.c"
    break;

  case 157: /* $@70: %empty  */
#line 679 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("Lavl (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 2468 "y.tab.c"
    break;

  case 159: /* $@71: %empty  */
#line 690 "lexer.y"
                          {
                    print_indent();
                    printf("LBRACKET\n");
                }
#line 2477 "y.tab.c"
    break;

  case 160: /* $@72: %empty  */
#line 695 "lexer.y"
                        {
                    print_indent();
                    printf("RBRACKET\n");
                }
#line 2486 "y.tab.c"
    break;

  case 163: /* $@73: %empty  */
#line 705 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("RelExp (%d)\n", line_number);
                }
#line 2496 "y.tab.c"
    break;

  case 165: /* $@74: %empty  */
#line 712 "lexer.y"
                        {
                    print_indent();
                    indent_level--;
                    printf("WEIGHT: %s\n",(yyvsp[0].strval));
                }
#line 2506 "y.tab.c"
    break;

  case 168: /* $@75: %empty  */
#line 723 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("EqExp (%d)\n", line_number);
                }
#line 2516 "y.tab.c"
    break;

  case 170: /* $@76: %empty  */
#line 730 "lexer.y"
                       {
                    print_indent();
                    printf("EQUAL\n");
                }
#line 2525 "y.tab.c"
    break;

  case 173: /* $@77: %empty  */
#line 738 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("LAndExp (%d)\n", line_number);
                }
#line 2535 "y.tab.c"
    break;

  case 175: /* $@78: %empty  */
#line 746 "lexer.y"
                     {
                    print_indent();
                    printf("AND\n");
                }
#line 2544 "y.tab.c"
    break;

  case 178: /* $@79: %empty  */
#line 755 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("LOrExp (%d)\n", line_number);
                }
#line 2554 "y.tab.c"
    break;

  case 180: /* $@80: %empty  */
#line 763 "lexer.y"
                    {
                    print_indent();
                    printf("OR\n");
                }
#line 2563 "y.tab.c"
    break;


#line 2567 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 772 "lexer.y"


void yyerror(char *str){
    fprintf(stderr,"Error :%s\n",str);
}

int yywrap(){
    return 1;
}
int main(int argc, char *argv[])
{
    if (argc != 2) {  // 确保命令行参数正确
        //fprintf(stderr, "Usage: ./lexer <filename>\n");
        yyparse();
        return 0;
    }

    // 打开输入文件
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {  // 如果文件打开失败
        perror("Error opening file");
        return 1;
    }

    // 调用解析器
    yyparse();

    // 关闭文件
    fclose(yyin);
    return 0;
}

