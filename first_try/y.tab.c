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

int indent_level = 0; // 用于控制缩进
void print_indent() {
    for (int i = 0; i < indent_level; i++) {
        printf("  ");
    }
}



#line 91 "y.tab.c"

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
#line 21 "lexer.y"

    int ival;      // 用于存储整数
    float fval;    // 用于存储浮点数
    char *strval;  // 用于存储字符串

#line 214 "y.tab.c"

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
  YYSYMBOL_FuncType = 75,                  /* FuncType  */
  YYSYMBOL_BType = 76,                     /* BType  */
  YYSYMBOL_FuncFParams = 77,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 78,                /* FuncFParam  */
  YYSYMBOL_79_22 = 79,                     /* $@22  */
  YYSYMBOL_ExpOPT = 80,                    /* ExpOPT  */
  YYSYMBOL_81_23 = 81,                     /* $@23  */
  YYSYMBOL_ExpTail = 82,                   /* ExpTail  */
  YYSYMBOL_83_24 = 83,                     /* $@24  */
  YYSYMBOL_84_25 = 84,                     /* $@25  */
  YYSYMBOL_FuncFParamTail = 85,            /* FuncFParamTail  */
  YYSYMBOL_86_26 = 86,                     /* $@26  */
  YYSYMBOL_FuncFParamsOpt = 87,            /* FuncFParamsOpt  */
  YYSYMBOL_Stmt = 88,                      /* Stmt  */
  YYSYMBOL_89_27 = 89,                     /* $@27  */
  YYSYMBOL_90_28 = 90,                     /* $@28  */
  YYSYMBOL_91_29 = 91,                     /* $@29  */
  YYSYMBOL_92_30 = 92,                     /* $@30  */
  YYSYMBOL_93_31 = 93,                     /* $@31  */
  YYSYMBOL_94_32 = 94,                     /* $@32  */
  YYSYMBOL_95_33 = 95,                     /* $@33  */
  YYSYMBOL_96_34 = 96,                     /* $@34  */
  YYSYMBOL_97_35 = 97,                     /* $@35  */
  YYSYMBOL_98_36 = 98,                     /* $@36  */
  YYSYMBOL_99_37 = 99,                     /* $@37  */
  YYSYMBOL_100_38 = 100,                   /* $@38  */
  YYSYMBOL_101_39 = 101,                   /* $@39  */
  YYSYMBOL_102_40 = 102,                   /* $@40  */
  YYSYMBOL_StmtOpt = 103,                  /* StmtOpt  */
  YYSYMBOL_104_41 = 104,                   /* $@41  */
  YYSYMBOL_Block = 105,                    /* Block  */
  YYSYMBOL_106_42 = 106,                   /* $@42  */
  YYSYMBOL_BlockItem = 107,                /* BlockItem  */
  YYSYMBOL_108_43 = 108,                   /* $@43  */
  YYSYMBOL_109_44 = 109,                   /* $@44  */
  YYSYMBOL_BlockItemTail = 110,            /* BlockItemTail  */
  YYSYMBOL_PrimaryExp = 111,               /* PrimaryExp  */
  YYSYMBOL_112_45 = 112,                   /* $@45  */
  YYSYMBOL_Exp = 113,                      /* Exp  */
  YYSYMBOL_114_46 = 114,                   /* $@46  */
  YYSYMBOL_ExpOpt = 115,                   /* ExpOpt  */
  YYSYMBOL_Cond = 116,                     /* Cond  */
  YYSYMBOL_117_47 = 117,                   /* $@47  */
  YYSYMBOL_AddExp = 118,                   /* AddExp  */
  YYSYMBOL_119_48 = 119,                   /* $@48  */
  YYSYMBOL_AddExpTail = 120,               /* AddExpTail  */
  YYSYMBOL_121_49 = 121,                   /* $@49  */
  YYSYMBOL_122_50 = 122,                   /* $@50  */
  YYSYMBOL_MulExp = 123,                   /* MulExp  */
  YYSYMBOL_124_51 = 124,                   /* $@51  */
  YYSYMBOL_MulExpTail = 125,               /* MulExpTail  */
  YYSYMBOL_126_52 = 126,                   /* $@52  */
  YYSYMBOL_UnaryExp = 127,                 /* UnaryExp  */
  YYSYMBOL_128_53 = 128,                   /* $@53  */
  YYSYMBOL_129_54 = 129,                   /* $@54  */
  YYSYMBOL_130_55 = 130,                   /* $@55  */
  YYSYMBOL_131_56 = 131,                   /* $@56  */
  YYSYMBOL_FuncRParamsOpt = 132,           /* FuncRParamsOpt  */
  YYSYMBOL_FuncRParams = 133,              /* FuncRParams  */
  YYSYMBOL_134_57 = 134,                   /* $@57  */
  YYSYMBOL_LVal = 135,                     /* LVal  */
  YYSYMBOL_136_58 = 136,                   /* $@58  */
  YYSYMBOL_LValTail = 137,                 /* LValTail  */
  YYSYMBOL_138_59 = 138,                   /* $@59  */
  YYSYMBOL_139_60 = 139,                   /* $@60  */
  YYSYMBOL_LOrExp = 140,                   /* LOrExp  */
  YYSYMBOL_141_61 = 141,                   /* $@61  */
  YYSYMBOL_142_62 = 142,                   /* $@62  */
  YYSYMBOL_143_63 = 143,                   /* $@63  */
  YYSYMBOL_LAndExp = 144,                  /* LAndExp  */
  YYSYMBOL_145_64 = 145,                   /* $@64  */
  YYSYMBOL_146_65 = 146,                   /* $@65  */
  YYSYMBOL_147_66 = 147,                   /* $@66  */
  YYSYMBOL_EqExp = 148,                    /* EqExp  */
  YYSYMBOL_149_67 = 149,                   /* $@67  */
  YYSYMBOL_150_68 = 150,                   /* $@68  */
  YYSYMBOL_151_69 = 151,                   /* $@69  */
  YYSYMBOL_RelExp = 152,                   /* RelExp  */
  YYSYMBOL_153_70 = 153,                   /* $@70  */
  YYSYMBOL_154_71 = 154,                   /* $@71  */
  YYSYMBOL_155_72 = 155,                   /* $@72  */
  YYSYMBOL_156_73 = 156,                   /* $@73  */
  YYSYMBOL_157_74 = 157,                   /* $@74  */
  YYSYMBOL_158_75 = 158,                   /* $@75  */
  YYSYMBOL_159_76 = 159,                   /* $@76  */
  YYSYMBOL_160_77 = 160,                   /* $@77  */
  YYSYMBOL_161_78 = 161,                   /* $@78  */
  YYSYMBOL_162_79 = 162,                   /* $@79  */
  YYSYMBOL_163_80 = 163                    /* $@80  */
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
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

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
       0,    35,    35,    36,    39,    44,    44,    52,    52,    58,
      59,    62,    62,    67,    67,    74,    74,    87,    94,    87,
     101,   104,   109,   104,   114,   117,   118,   118,   129,   130,
     133,   133,   138,   142,   142,   147,   151,   151,   167,   167,
     172,   176,   176,   183,   190,   183,   197,   198,   198,   209,
     210,   213,   213,   218,   221,   233,   221,   242,   243,   244,
     247,   248,   251,   254,   254,   269,   269,   276,   279,   284,
     279,   289,   293,   293,   298,   303,   304,   309,   314,   309,
     323,   323,   332,   332,   337,   341,   348,   337,   353,   357,
     364,   353,   368,   368,   378,   378,   388,   392,   388,   403,
     403,   407,   410,   410,   423,   423,   428,   428,   435,   436,
     440,   440,   451,   452,   460,   471,   471,   478,   479,   482,
     482,   489,   489,   496,   496,   501,   501,   506,   509,   509,
     516,   516,   521,   524,   524,   529,   533,   529,   544,   544,
     551,   552,   556,   557,   557,   565,   565,   574,   579,   574,
     584,   587,   587,   592,   597,   592,   604,   604,   609,   614,
     609,   621,   621,   626,   631,   626,   638,   638,   643,   648,
     643,   655,   655,   660,   665,   660,   670,   675,   670,   682,
     682,   687,   692,   687
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
  "FuncType", "BType", "FuncFParams", "FuncFParam", "$@22", "ExpOPT",
  "$@23", "ExpTail", "$@24", "$@25", "FuncFParamTail", "$@26",
  "FuncFParamsOpt", "Stmt", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40",
  "StmtOpt", "$@41", "Block", "$@42", "BlockItem", "$@43", "$@44",
  "BlockItemTail", "PrimaryExp", "$@45", "Exp", "$@46", "ExpOpt", "Cond",
  "$@47", "AddExp", "$@48", "AddExpTail", "$@49", "$@50", "MulExp", "$@51",
  "MulExpTail", "$@52", "UnaryExp", "$@53", "$@54", "$@55", "$@56",
  "FuncRParamsOpt", "FuncRParams", "$@57", "LVal", "$@58", "LValTail",
  "$@59", "$@60", "LOrExp", "$@61", "$@62", "$@63", "LAndExp", "$@64",
  "$@65", "$@66", "EqExp", "$@67", "$@68", "$@69", "RelExp", "$@70",
  "$@71", "$@72", "$@73", "$@74", "$@75", "$@76", "$@77", "$@78", "$@79",
  "$@80", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-237)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -237,    27,  -237,  -237,     4,  -237,  -237,    36,    22,  -237,
    -237,  -237,  -237,    43,  -237,    39,    23,    32,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,    23,    51,    23,    52,    53,
      47,    55,  -237,    54,    40,  -237,    57,    45,    45,  -237,
      42,  -237,  -237,  -237,  -237,    45,  -237,    48,  -237,  -237,
      66,    51,  -237,    56,    23,    58,    74,    52,  -237,  -237,
    -237,    47,    60,  -237,    54,  -237,  -237,  -237,    57,    61,
    -237,  -237,  -237,  -237,  -237,    62,  -237,  -237,  -237,     3,
      63,  -237,  -237,    38,    78,    78,  -237,  -237,    59,    77,
    -237,  -237,  -237,  -237,    67,     3,    22,    15,    65,  -237,
    -237,  -237,    45,  -237,  -237,  -237,  -237,    82,    18,    89,
    -237,    86,  -237,  -237,    19,  -237,  -237,  -237,  -237,  -237,
    -237,    91,    68,    58,    81,    80,    83,    79,    84,  -237,
      24,  -237,  -237,  -237,    78,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,    85,  -237,  -237,  -237,    90,    73,  -237,
      97,  -237,    87,  -237,    88,    92,    93,    94,  -237,    95,
      96,    38,    38,  -237,    78,   100,  -237,  -237,    78,  -237,
    -237,  -237,  -237,  -237,   101,  -237,  -237,  -237,  -237,  -237,
    -237,    68,  -237,  -237,  -237,  -237,  -237,    82,  -237,  -237,
     102,   104,  -237,    62,  -237,  -237,  -237,  -237,   103,    63,
    -237,  -237,  -237,    98,   105,  -237,    90,    67,   106,   107,
    -237,   109,  -237,    95,   108,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,    15,  -237,
    -237,  -237,    99,    15,   100,  -237,   112,  -237,  -237,  -237,
     121,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   124,
    -237,  -237,    15,  -237,   122,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,    10,     2,     4,     5,     1,     3,     0,    13,    58,
      57,    59,     6,     0,     8,     0,     0,     0,    15,    12,
      60,    61,    14,    36,    54,     0,     0,    76,     0,    41,
      40,     0,    75,    74,     0,    17,    35,    24,    24,    38,
       0,    63,    72,    62,    55,    24,    33,     0,    21,    42,
       0,     0,    37,    67,     0,     0,     0,     0,    16,   121,
      44,    40,     0,    64,    74,   102,    56,    18,    35,     0,
      20,   128,   128,   121,   121,   115,    39,    65,    73,   106,
     121,    34,    22,   127,   133,   133,   128,   172,     0,     0,
      47,    45,    46,   121,    71,   106,    13,    80,     0,    26,
      25,    19,    24,   123,   125,   122,   138,   132,     0,     0,
     180,     0,   174,   177,   115,   116,    68,    66,   108,   105,
     107,     0,   115,     0,     0,     0,     0,     0,     0,   103,
     121,    23,   128,   128,   133,   130,   129,   113,   114,   145,
     110,   134,   112,     0,   182,   128,   128,    53,     0,   115,
       0,   117,     0,    83,     0,     0,     0,     0,    97,    32,
       0,   127,   127,   139,   133,   150,   115,   136,   133,   175,
     178,    51,    49,    48,     0,    78,    81,    85,    89,    93,
      95,   115,    30,    28,    27,   124,   126,   132,   147,   146,
       0,   115,   183,   115,    69,   115,   119,   119,     0,   121,
     131,   115,   111,   142,     0,   141,    53,    71,     0,     0,
     151,     0,    98,    32,     0,   143,   137,    52,    70,    79,
      86,   120,   156,   151,    90,    31,   148,   115,    80,   152,
     161,   156,     0,    80,   150,   144,   101,   157,   166,   161,
       0,   154,    91,   149,    99,    87,   162,   121,   166,     0,
     159,   156,    80,   167,     0,   164,   161,   155,   100,   169,
     166,   160,   121,   165,   170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,   111,  -237,  -237,  -237,  -237,    21,  -237,  -237,
    -237,  -237,    64,  -237,  -237,   110,   -32,  -237,  -237,  -123,
    -237,  -237,   -98,  -237,    75,  -237,  -237,  -237,   114,  -237,
      69,  -237,  -237,  -237,  -110,  -237,  -237,   -84,  -237,  -237,
    -237,  -237,  -237,     0,  -237,    70,  -237,  -237,  -237,   -65,
    -237,  -237,   113,  -237,  -237,  -219,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,    25,  -237,  -237,  -237,  -237,    28,  -237,  -237,
    -120,  -237,   -37,   -52,  -237,   -73,  -237,  -105,  -237,  -237,
     -67,  -237,   -41,  -237,   -82,  -237,  -237,  -237,  -237,  -237,
     -80,  -237,    29,  -237,   -85,  -237,  -237,   -72,  -237,  -237,
    -237,  -220,  -237,  -237,  -237,  -224,  -237,  -237,  -237,  -236,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     7,     8,     4,    14,    15,    16,
      19,    25,    36,    45,    80,   100,    49,    59,   102,   101,
     130,   160,   183,   199,    47,    57,    22,    26,    40,    51,
      30,    37,    38,    75,    91,   114,   148,   172,   193,    12,
      27,    55,    13,    31,    32,    33,    53,    63,    94,   117,
     149,   207,    43,    54,    34,   120,   121,   195,   122,   123,
     124,   196,   228,   125,   197,   233,   126,   127,   128,   181,
     245,   252,    66,    79,    95,    96,    97,    98,   141,   166,
      92,    93,   152,   209,   210,    70,    71,   105,   132,   133,
      83,    84,   136,   164,   107,   108,   109,   191,   134,   204,
     205,   227,   142,   165,   189,   201,   234,   221,   222,   223,
     251,   229,   230,   231,   256,   237,   238,   239,   260,   246,
     247,   248,   262,    72,    73,   145,    74,   146,    85,    86,
     168
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    89,   151,   110,   147,    87,    50,   159,  -104,   236,
    -104,   240,   254,    56,   242,   249,    23,  -104,    -7,   111,
     115,   137,   138,   -77,   263,    28,   139,     5,    20,   174,
      21,   257,   261,   258,  -109,   -84,   -11,   -88,   -92,   -94,
     -96,     9,    10,    11,   140,   -82,   190,   103,   104,    90,
     -50,    17,   163,    18,    99,   -29,   185,   186,    24,    29,
      35,   151,    39,    41,   -43,   161,   162,    44,   112,    42,
     131,   203,    46,    48,    52,   208,   213,    60,   169,   170,
      58,   214,   187,   206,    62,    67,   192,   113,    65,    77,
      82,   106,    90,    99,   135,   116,   129,   143,   144,   139,
    -118,   154,   155,   157,   173,   171,   156,   203,   175,   158,
     182,   167,     6,   215,   177,   225,   241,   119,   178,   176,
      61,    68,   217,   118,    64,   179,   180,   184,   188,   202,
     194,  -140,   216,   244,   220,   212,   224,   226,   219,   250,
     255,   259,   218,    81,   198,   211,   200,   235,   153,   243,
     150,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   253,    76,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264
};

static const yytype_int16 yycheck[] =
{
      73,    74,   122,    85,   114,    72,    38,   130,     5,   228,
       7,   231,   248,    45,   233,   239,    16,    14,    14,    86,
      93,     3,     4,     8,   260,    25,     8,     0,     5,   149,
       7,   251,   256,   252,    31,    20,    14,    22,    23,    24,
      25,     5,     6,     7,    26,    30,   166,     9,    10,    30,
      31,     8,   134,    14,    30,    31,   161,   162,    26,     8,
       8,   181,    15,     8,    11,   132,   133,    27,     9,    15,
     102,   191,    15,    28,    32,   195,   199,    11,   145,   146,
      32,   201,   164,   193,    28,    11,   168,    10,    30,    29,
      29,    13,    30,    30,    12,    28,    31,     8,    12,     8,
      32,    20,    22,    24,    31,    15,    23,   227,    11,    25,
      15,    26,     1,    15,    26,   213,    17,    96,    26,    32,
      51,    57,   206,    95,    54,    32,    32,    31,    28,    27,
      29,    27,    27,    21,    27,    32,    27,    29,    32,    18,
      16,    19,   207,    68,   181,   197,   187,   227,   123,   234,
     121,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,   247,    61,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    36,    39,     0,    35,    37,    38,     5,
       6,     7,    72,    75,    40,    41,    42,     8,    14,    43,
       5,     7,    59,    76,    26,    44,    60,    73,    76,     8,
      63,    76,    77,    78,    87,     8,    45,    64,    65,    15,
      61,     8,    15,    85,    27,    46,    15,    57,    28,    49,
      49,    62,    32,    79,    86,    74,    49,    58,    32,    50,
      11,    63,    28,    80,    78,    30,   105,    11,    45,    48,
     118,   119,   156,   157,   159,    66,    61,    29,    85,   106,
      47,    57,    29,   123,   124,   161,   162,   123,   118,   118,
      30,    67,   113,   114,    81,   107,   108,   109,   110,    30,
      48,    52,    51,     9,    10,   120,    13,   127,   128,   129,
     127,   123,     9,    10,    68,   118,    28,    82,   110,    40,
      88,    89,    91,    92,    93,    96,    99,   100,   101,    31,
      53,    49,   121,   122,   131,    12,   125,     3,     4,     8,
      26,   111,   135,     8,    12,   158,   160,    67,    69,    83,
     135,   113,   115,   105,    20,    22,    23,    24,    25,    52,
      54,   123,   123,   127,   126,   136,   112,    26,   163,   123,
     123,    15,    70,    31,   113,    11,    32,    26,    26,    32,
      32,   102,    15,    55,    31,   120,   120,   127,    28,   137,
     113,   130,   127,    71,    29,    90,    94,    97,   115,    56,
     125,   138,    27,   113,   132,   133,    67,    84,   113,   116,
     117,   116,    32,    52,   113,    15,    27,    70,    82,    32,
      27,   140,   141,   142,    27,    55,    29,   134,    95,   144,
     145,   146,   140,    98,   139,   133,    88,   148,   149,   150,
     144,    17,    88,   137,    21,   103,   152,   153,   154,   148,
      18,   143,   104,   118,   152,    16,   147,   144,    88,    19,
     151,   148,   155,   152,   118
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    37,    36,    38,    36,    39,
      39,    41,    40,    42,    40,    44,    43,    46,    47,    45,
      48,    50,    51,    49,    49,    52,    53,    52,    54,    54,
      56,    55,    55,    58,    57,    57,    60,    59,    62,    61,
      61,    64,    63,    65,    66,    63,    67,    68,    67,    69,
      69,    71,    70,    70,    73,    74,    72,    75,    75,    75,
      76,    76,    77,    79,    78,    81,    80,    80,    83,    84,
      82,    82,    86,    85,    85,    87,    87,    89,    90,    88,
      91,    88,    92,    88,    93,    94,    95,    88,    96,    97,
      98,    88,    99,    88,   100,    88,   101,   102,    88,   104,
     103,   103,   106,   105,   108,   107,   109,   107,   110,   110,
     112,   111,   111,   111,   111,   114,   113,   115,   115,   117,
     116,   119,   118,   121,   120,   122,   120,   120,   124,   123,
     126,   125,   125,   128,   127,   129,   130,   127,   131,   127,
     132,   132,   133,   134,   133,   136,   135,   138,   139,   137,
     137,   141,   140,   142,   143,   140,   145,   144,   146,   147,
     144,   149,   148,   150,   151,   148,   153,   152,   154,   155,
     152,   156,   118,   157,   158,   118,   159,   160,   118,   161,
     123,   162,   163,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     3,     0,     3,     1,
       0,     0,     2,     0,     2,     0,     6,     0,     0,     6,
       1,     0,     0,     6,     0,     1,     0,     4,     2,     0,
       0,     4,     0,     0,     4,     0,     0,     5,     0,     4,
       0,     0,     3,     0,     0,     6,     1,     0,     4,     2,
       0,     0,     4,     0,     0,     0,     8,     1,     1,     1,
       1,     1,     2,     0,     4,     0,     4,     0,     0,     0,
       6,     0,     0,     4,     0,     1,     0,     0,     0,     6,
       0,     3,     0,     2,     0,     0,     0,     9,     0,     0,
       0,     8,     0,     3,     0,     3,     0,     0,     5,     0,
       3,     0,     0,     4,     0,     2,     0,     2,     2,     0,
       0,     4,     1,     1,     1,     0,     2,     1,     0,     0,
       2,     0,     3,     0,     4,     0,     4,     0,     0,     3,
       0,     4,     0,     0,     2,     0,     0,     6,     0,     3,
       0,     1,     1,     0,     4,     0,     3,     0,     0,     6,
       0,     0,     2,     0,     0,     5,     0,     2,     0,     0,
       5,     0,     2,     0,     0,     5,     0,     2,     0,     0,
       5,     0,     2,     0,     0,     5,     0,     0,     5,     0,
       2,     0,     0,     5
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
#line 39 "lexer.y"
                                 {
                    indent_level++;
                }
#line 1563 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 44 "lexer.y"
                             {
                    print_indent();
                    indent_level++;
                    printf("CompUnit (%d)\n", indent_level);
                }
#line 1573 "y.tab.c"
    break;

  case 6: /* CompUnit: CompUnitOpt $@1 FuncDef  */
#line 49 "lexer.y"
                         {        /* 编译单元 */
                    
                }
#line 1581 "y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 52 "lexer.y"
                             {
                    indent_level++; 
                }
#line 1589 "y.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 62 "lexer.y"
                  {
                    print_indent();
                    printf("Decl\n"); 
                }
#line 1598 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 67 "lexer.y"
                  {
                    print_indent();
                    printf("Decl\n"); 
                }
#line 1607 "y.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 74 "lexer.y"
                       {
                    print_indent(); 
                    printf("ConstDecl (%d)\n", indent_level);
                }
#line 1616 "y.tab.c"
    break;

  case 16: /* ConstDecl: CONST $@5 BType ConstDef ConstDefTail END  */
#line 79 "lexer.y"
                   {
                    print_indent();
                    printf("END\n");
                }
#line 1625 "y.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 87 "lexer.y"
                       {
                    print_indent(); 
                    printf("ConstDef (%d)\n", indent_level);
                    print_indent(); 
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1636 "y.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 94 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1645 "y.tab.c"
    break;

  case 21: /* $@8: %empty  */
#line 104 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1654 "y.tab.c"
    break;

  case 22: /* $@9: %empty  */
#line 109 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1663 "y.tab.c"
    break;

  case 26: /* $@10: %empty  */
#line 118 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1672 "y.tab.c"
    break;

  case 27: /* ConstInitVal: LBRACE $@10 ConstInitValOpt RBRACE  */
#line 123 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1681 "y.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 133 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1690 "y.tab.c"
    break;

  case 33: /* $@12: %empty  */
#line 142 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1699 "y.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 151 "lexer.y"
                       {
                    print_indent(); 
                    printf("VarDecl (%d)\n", indent_level);
                    print_indent(); 
                    printf("BType (%d)\n", indent_level);
                    print_indent(); 
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1712 "y.tab.c"
    break;

  case 37: /* VarDecl: BType $@13 VarDef VarDeclTail END  */
#line 161 "lexer.y"
                   {
                    print_indent();
                    printf("END\n");
                }
#line 1721 "y.tab.c"
    break;

  case 38: /* $@14: %empty  */
#line 167 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1730 "y.tab.c"
    break;

  case 41: /* $@15: %empty  */
#line 176 "lexer.y"
                       {
                    print_indent(); 
                    printf("VarDef (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1741 "y.tab.c"
    break;

  case 43: /* $@16: %empty  */
#line 183 "lexer.y"
                       {
                    print_indent(); 
                    printf("VarDef (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1752 "y.tab.c"
    break;

  case 44: /* $@17: %empty  */
#line 190 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1761 "y.tab.c"
    break;

  case 47: /* $@18: %empty  */
#line 198 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1770 "y.tab.c"
    break;

  case 48: /* InitVal: LBRACE $@18 InitValOpt RBRACE  */
#line 203 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1779 "y.tab.c"
    break;

  case 51: /* $@19: %empty  */
#line 213 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1788 "y.tab.c"
    break;

  case 54: /* $@20: %empty  */
#line 221 "lexer.y"
                                        {
                    print_indent(); 
                    printf("FuncDef (%d)\n", indent_level); 
                    print_indent();
                    printf("FuncType (%d)\n", indent_level);
                    print_indent();
                    printf("Type: %s\n", (yyvsp[-2].strval));
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1805 "y.tab.c"
    break;

  case 55: /* $@21: %empty  */
#line 233 "lexer.y"
                                      {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1814 "y.tab.c"
    break;

  case 56: /* FuncDef: FuncType IDENT LPARENT $@20 FuncFParamsOpt RPARENT $@21 Block  */
#line 237 "lexer.y"
                      {  /* 函数定义  */
                    
                }
#line 1822 "y.tab.c"
    break;

  case 57: /* FuncType: VOID  */
#line 242 "lexer.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1828 "y.tab.c"
    break;

  case 58: /* FuncType: INT  */
#line 243 "lexer.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1834 "y.tab.c"
    break;

  case 59: /* FuncType: FLOAT  */
#line 244 "lexer.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1840 "y.tab.c"
    break;

  case 60: /* BType: INT  */
#line 247 "lexer.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1846 "y.tab.c"
    break;

  case 61: /* BType: FLOAT  */
#line 248 "lexer.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1852 "y.tab.c"
    break;

  case 63: /* $@22: %empty  */
#line 254 "lexer.y"
                             {
                    print_indent(); 
                    printf("FuncFParams (%d)\n", indent_level);
                    print_indent(); 
                    printf("FuncFParam (%d)\n", indent_level);
                    print_indent(); 
                    printf("BType (%d)\n", indent_level);
                    print_indent(); 
                    printf("Type: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1869 "y.tab.c"
    break;

  case 65: /* $@23: %empty  */
#line 269 "lexer.y"
                                   {
                    print_indent(); 
                    printf("LBRACKET\n");
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1880 "y.tab.c"
    break;

  case 68: /* $@24: %empty  */
#line 279 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1889 "y.tab.c"
    break;

  case 69: /* $@25: %empty  */
#line 284 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1898 "y.tab.c"
    break;

  case 72: /* $@26: %empty  */
#line 293 "lexer.y"
                       {
                    print_indent();
                    printf("COMMA (%d)\n", indent_level);
                }
#line 1907 "y.tab.c"
    break;

  case 77: /* $@27: %empty  */
#line 309 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 1916 "y.tab.c"
    break;

  case 78: /* $@28: %empty  */
#line 314 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1925 "y.tab.c"
    break;

  case 79: /* Stmt: $@27 LVal ASSIGN $@28 Exp END  */
#line 319 "lexer.y"
                   {
                    print_indent(); 
                    printf("END\n");
                }
#line 1934 "y.tab.c"
    break;

  case 80: /* $@29: %empty  */
#line 323 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 1943 "y.tab.c"
    break;

  case 81: /* Stmt: $@29 ExpOpt END  */
#line 328 "lexer.y"
                   {
                    print_indent(); 
                    printf("END\n");
                }
#line 1952 "y.tab.c"
    break;

  case 82: /* $@30: %empty  */
#line 332 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 1961 "y.tab.c"
    break;

  case 84: /* $@31: %empty  */
#line 337 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 1970 "y.tab.c"
    break;

  case 85: /* $@32: %empty  */
#line 341 "lexer.y"
                          {
                    print_indent();
                    printf("IF\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1981 "y.tab.c"
    break;

  case 86: /* $@33: %empty  */
#line 348 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1990 "y.tab.c"
    break;

  case 88: /* $@34: %empty  */
#line 353 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 1999 "y.tab.c"
    break;

  case 89: /* $@35: %empty  */
#line 357 "lexer.y"
                             {
                    print_indent();
                    printf("WHILE\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2010 "y.tab.c"
    break;

  case 90: /* $@36: %empty  */
#line 364 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2019 "y.tab.c"
    break;

  case 92: /* $@37: %empty  */
#line 368 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 2028 "y.tab.c"
    break;

  case 93: /* Stmt: $@37 BREAK END  */
#line 372 "lexer.y"
                         {
                    print_indent();
                    printf("BREAK\n");
                    print_indent();
                    printf("END\n");
                }
#line 2039 "y.tab.c"
    break;

  case 94: /* $@38: %empty  */
#line 378 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 2048 "y.tab.c"
    break;

  case 95: /* Stmt: $@38 CONTINUE END  */
#line 382 "lexer.y"
                            {
                    print_indent();
                    printf("CONTINUE\n");
                    print_indent();
                    printf("END\n");
                }
#line 2059 "y.tab.c"
    break;

  case 96: /* $@39: %empty  */
#line 388 "lexer.y"
                  {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
#line 2068 "y.tab.c"
    break;

  case 97: /* $@40: %empty  */
#line 392 "lexer.y"
                      {
                    print_indent();
                    printf("RETURN\n");
                }
#line 2077 "y.tab.c"
    break;

  case 98: /* Stmt: $@39 RETURN $@40 ExpOpt END  */
#line 397 "lexer.y"
                   {
                    print_indent();
                    printf("END\n");
                }
#line 2086 "y.tab.c"
    break;

  case 99: /* $@41: %empty  */
#line 403 "lexer.y"
                      {
                    print_indent();
                    printf("ELSE\n");
                }
#line 2095 "y.tab.c"
    break;

  case 102: /* $@42: %empty  */
#line 410 "lexer.y"
                        {
                    print_indent();
                    printf("Block (%d)\n", indent_level);
                    print_indent();
                    printf("LBRACE\n");
                }
#line 2106 "y.tab.c"
    break;

  case 103: /* Block: LBRACE $@42 BlockItemTail RBRACE  */
#line 417 "lexer.y"
                      {
                    print_indent();
                    printf("RBRACE\n");
                }
#line 2115 "y.tab.c"
    break;

  case 104: /* $@43: %empty  */
#line 423 "lexer.y"
                  {
                    print_indent();
                    printf("BlockItem (%d)\n", indent_level);
                }
#line 2124 "y.tab.c"
    break;

  case 106: /* $@44: %empty  */
#line 428 "lexer.y"
                  {
                    print_indent();
                    printf("BlockItem (%d)\n", indent_level);
                }
#line 2133 "y.tab.c"
    break;

  case 110: /* $@45: %empty  */
#line 440 "lexer.y"
                         {
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2144 "y.tab.c"
    break;

  case 111: /* PrimaryExp: LPARENT $@45 Exp RPARENT  */
#line 447 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2153 "y.tab.c"
    break;

  case 113: /* PrimaryExp: INTCONST  */
#line 452 "lexer.y"
                          {
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("Number (%d)\n", indent_level);
                    print_indent();
                    printf("INTCON: %d\n", (yyvsp[0].ival));
                }
#line 2166 "y.tab.c"
    break;

  case 114: /* PrimaryExp: FLOATCONST  */
#line 460 "lexer.y"
                            {
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("Number (%d)\n", indent_level);
                    print_indent();
                    printf("FLOATCON: %f\n", (yyvsp[0].fval));
                }
#line 2179 "y.tab.c"
    break;

  case 115: /* $@46: %empty  */
#line 471 "lexer.y"
                  {
                    print_indent();
                    printf("Exp (%d)\n", indent_level);
                }
#line 2188 "y.tab.c"
    break;

  case 119: /* $@47: %empty  */
#line 482 "lexer.y"
                  {
                    print_indent();
                    printf("Cond (%d)\n", indent_level);
                }
#line 2197 "y.tab.c"
    break;

  case 121: /* $@48: %empty  */
#line 489 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
#line 2206 "y.tab.c"
    break;

  case 123: /* $@49: %empty  */
#line 496 "lexer.y"
                      {
                    print_indent();
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 2215 "y.tab.c"
    break;

  case 125: /* $@50: %empty  */
#line 501 "lexer.y"
                       {
                    print_indent();
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 2224 "y.tab.c"
    break;

  case 128: /* $@51: %empty  */
#line 509 "lexer.y"
                  {
                    print_indent();
                    printf(" MulExp (%d)\n", indent_level);
                }
#line 2233 "y.tab.c"
    break;

  case 130: /* $@52: %empty  */
#line 516 "lexer.y"
                     {
                    print_indent();
                    printf("MUL: %s\n", (yyvsp[0].strval));
                }
#line 2242 "y.tab.c"
    break;

  case 133: /* $@53: %empty  */
#line 524 "lexer.y"
                  {
                    print_indent();
                    printf("UnaryExp (%d)\n", indent_level);
                }
#line 2251 "y.tab.c"
    break;

  case 135: /* $@54: %empty  */
#line 529 "lexer.y"
                  {
                    print_indent();
                    printf("UnaryExp (%d)\n", indent_level);
                }
#line 2260 "y.tab.c"
    break;

  case 136: /* $@55: %empty  */
#line 533 "lexer.y"
                             {
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2271 "y.tab.c"
    break;

  case 137: /* UnaryExp: $@54 IDENT LPARENT $@55 FuncRParamsOpt RPARENT  */
#line 540 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2280 "y.tab.c"
    break;

  case 138: /* $@56: %empty  */
#line 544 "lexer.y"
                         {
                    print_indent();
                    printf("UNARYOP: %s\n", (yyvsp[0].strval));
                }
#line 2289 "y.tab.c"
    break;

  case 143: /* $@57: %empty  */
#line 557 "lexer.y"
                           {
                    print_indent();
                    printf("COMMA\n");
                }
#line 2298 "y.tab.c"
    break;

  case 145: /* $@58: %empty  */
#line 565 "lexer.y"
                       {
                    print_indent();
                    printf("Lavl (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 2309 "y.tab.c"
    break;

  case 147: /* $@59: %empty  */
#line 574 "lexer.y"
                          {
                    print_indent();
                    printf("LBRACKET\n");
                }
#line 2318 "y.tab.c"
    break;

  case 148: /* $@60: %empty  */
#line 579 "lexer.y"
                        {
                    print_indent();
                    printf("RBRACKET\n");
                }
#line 2327 "y.tab.c"
    break;

  case 151: /* $@61: %empty  */
#line 587 "lexer.y"
                  {
                    print_indent();
                    printf("LOrExp (%d)\n", indent_level);
                }
#line 2336 "y.tab.c"
    break;

  case 153: /* $@62: %empty  */
#line 592 "lexer.y"
                  {
                    print_indent();
                    printf("LOrExp (%d)\n", indent_level);
                }
#line 2345 "y.tab.c"
    break;

  case 154: /* $@63: %empty  */
#line 597 "lexer.y"
                  {
                    print_indent();
                    printf("OR\n");
                }
#line 2354 "y.tab.c"
    break;

  case 156: /* $@64: %empty  */
#line 604 "lexer.y"
                  {
                    print_indent();
                    printf("LAndExp (%d)\n", indent_level);
                }
#line 2363 "y.tab.c"
    break;

  case 158: /* $@65: %empty  */
#line 609 "lexer.y"
                  {
                    print_indent();
                    printf("LAndExp (%d)\n", indent_level);
                }
#line 2372 "y.tab.c"
    break;

  case 159: /* $@66: %empty  */
#line 614 "lexer.y"
                   {
                    print_indent();
                    printf("AND\n");
                }
#line 2381 "y.tab.c"
    break;

  case 161: /* $@67: %empty  */
#line 621 "lexer.y"
                  {
                    print_indent();
                    printf("EqExp (%d)\n", indent_level);
                }
#line 2390 "y.tab.c"
    break;

  case 163: /* $@68: %empty  */
#line 626 "lexer.y"
                  {
                    print_indent();
                    printf("EqExp (%d)\n", indent_level);
                }
#line 2399 "y.tab.c"
    break;

  case 164: /* $@69: %empty  */
#line 631 "lexer.y"
                     {
                    print_indent();
                    printf("EQUAL\n");
                }
#line 2408 "y.tab.c"
    break;

  case 166: /* $@70: %empty  */
#line 638 "lexer.y"
                  {
                    print_indent();
                    printf("RelExp (%d)\n", indent_level);
                }
#line 2417 "y.tab.c"
    break;

  case 168: /* $@71: %empty  */
#line 643 "lexer.y"
                  {
                    print_indent();
                    printf("RelExp (%d)\n", indent_level);
                }
#line 2426 "y.tab.c"
    break;

  case 169: /* $@72: %empty  */
#line 648 "lexer.y"
                      {
                    print_indent();
                    printf("WEIGHT\n");
                }
#line 2435 "y.tab.c"
    break;

  case 171: /* $@73: %empty  */
#line 655 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
#line 2444 "y.tab.c"
    break;

  case 173: /* $@74: %empty  */
#line 660 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
#line 2453 "y.tab.c"
    break;

  case 174: /* $@75: %empty  */
#line 665 "lexer.y"
                    {
                    print_indent();
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 2462 "y.tab.c"
    break;

  case 176: /* $@76: %empty  */
#line 670 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
#line 2471 "y.tab.c"
    break;

  case 177: /* $@77: %empty  */
#line 675 "lexer.y"
                     {
                    print_indent();
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 2480 "y.tab.c"
    break;

  case 179: /* $@78: %empty  */
#line 682 "lexer.y"
                  {
                    print_indent();
                    printf("MulExp (%d)\n", indent_level);
                }
#line 2489 "y.tab.c"
    break;

  case 181: /* $@79: %empty  */
#line 687 "lexer.y"
                  {
                    print_indent();
                    printf("MulExp (%d)\n", indent_level);
                }
#line 2498 "y.tab.c"
    break;

  case 182: /* $@80: %empty  */
#line 692 "lexer.y"
                   {
                    print_indent();
                    printf("MUL");
                }
#line 2507 "y.tab.c"
    break;


#line 2511 "y.tab.c"

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

#line 707 "lexer.y"


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

