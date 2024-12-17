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
  YYSYMBOL_Decl = 36,                      /* Decl  */
  YYSYMBOL_37_3 = 37,                      /* $@3  */
  YYSYMBOL_38_4 = 38,                      /* $@4  */
  YYSYMBOL_ConstDecl = 39,                 /* ConstDecl  */
  YYSYMBOL_40_5 = 40,                      /* $@5  */
  YYSYMBOL_BType = 41,                     /* BType  */
  YYSYMBOL_42_6 = 42,                      /* $@6  */
  YYSYMBOL_43_7 = 43,                      /* $@7  */
  YYSYMBOL_ConstDef = 44,                  /* ConstDef  */
  YYSYMBOL_45_8 = 45,                      /* $@8  */
  YYSYMBOL_46_9 = 46,                      /* $@9  */
  YYSYMBOL_ConstExp = 47,                  /* ConstExp  */
  YYSYMBOL_ConstExpTail = 48,              /* ConstExpTail  */
  YYSYMBOL_49_10 = 49,                     /* $@10  */
  YYSYMBOL_50_11 = 50,                     /* $@11  */
  YYSYMBOL_ConstInitVal = 51,              /* ConstInitVal  */
  YYSYMBOL_52_12 = 52,                     /* $@12  */
  YYSYMBOL_ConstInitValOpt = 53,           /* ConstInitValOpt  */
  YYSYMBOL_ConstInitValTail = 54,          /* ConstInitValTail  */
  YYSYMBOL_55_13 = 55,                     /* $@13  */
  YYSYMBOL_ConstDefTail = 56,              /* ConstDefTail  */
  YYSYMBOL_57_14 = 57,                     /* $@14  */
  YYSYMBOL_VarDecl = 58,                   /* VarDecl  */
  YYSYMBOL_59_15 = 59,                     /* $@15  */
  YYSYMBOL_VarDeclTail = 60,               /* VarDeclTail  */
  YYSYMBOL_61_16 = 61,                     /* $@16  */
  YYSYMBOL_VarDef = 62,                    /* VarDef  */
  YYSYMBOL_63_17 = 63,                     /* $@17  */
  YYSYMBOL_64_18 = 64,                     /* $@18  */
  YYSYMBOL_65_19 = 65,                     /* $@19  */
  YYSYMBOL_InitVal = 66,                   /* InitVal  */
  YYSYMBOL_67_20 = 67,                     /* $@20  */
  YYSYMBOL_InitValOpt = 68,                /* InitValOpt  */
  YYSYMBOL_InitValTail = 69,               /* InitValTail  */
  YYSYMBOL_70_21 = 70,                     /* $@21  */
  YYSYMBOL_FuncDef = 71,                   /* FuncDef  */
  YYSYMBOL_72_22 = 72,                     /* $@22  */
  YYSYMBOL_73_23 = 73,                     /* $@23  */
  YYSYMBOL_74_24 = 74,                     /* $@24  */
  YYSYMBOL_FuncType = 75,                  /* FuncType  */
  YYSYMBOL_76_25 = 76,                     /* $@25  */
  YYSYMBOL_77_26 = 77,                     /* $@26  */
  YYSYMBOL_78_27 = 78,                     /* $@27  */
  YYSYMBOL_FuncFParams = 79,               /* FuncFParams  */
  YYSYMBOL_80_28 = 80,                     /* $@28  */
  YYSYMBOL_FuncFParam = 81,                /* FuncFParam  */
  YYSYMBOL_82_29 = 82,                     /* $@29  */
  YYSYMBOL_83_30 = 83,                     /* $@30  */
  YYSYMBOL_ExpOPT = 84,                    /* ExpOPT  */
  YYSYMBOL_85_31 = 85,                     /* $@31  */
  YYSYMBOL_ExpTail = 86,                   /* ExpTail  */
  YYSYMBOL_87_32 = 87,                     /* $@32  */
  YYSYMBOL_88_33 = 88,                     /* $@33  */
  YYSYMBOL_FuncFParamTail = 89,            /* FuncFParamTail  */
  YYSYMBOL_90_34 = 90,                     /* $@34  */
  YYSYMBOL_FuncFParamsOpt = 91,            /* FuncFParamsOpt  */
  YYSYMBOL_Stmt = 92,                      /* Stmt  */
  YYSYMBOL_93_35 = 93,                     /* $@35  */
  YYSYMBOL_94_36 = 94,                     /* $@36  */
  YYSYMBOL_95_37 = 95,                     /* $@37  */
  YYSYMBOL_96_38 = 96,                     /* $@38  */
  YYSYMBOL_97_39 = 97,                     /* $@39  */
  YYSYMBOL_98_40 = 98,                     /* $@40  */
  YYSYMBOL_99_41 = 99,                     /* $@41  */
  YYSYMBOL_100_42 = 100,                   /* $@42  */
  YYSYMBOL_101_43 = 101,                   /* $@43  */
  YYSYMBOL_102_44 = 102,                   /* $@44  */
  YYSYMBOL_103_45 = 103,                   /* $@45  */
  YYSYMBOL_104_46 = 104,                   /* $@46  */
  YYSYMBOL_105_47 = 105,                   /* $@47  */
  YYSYMBOL_106_48 = 106,                   /* $@48  */
  YYSYMBOL_StmtOpt = 107,                  /* StmtOpt  */
  YYSYMBOL_108_49 = 108,                   /* $@49  */
  YYSYMBOL_Block = 109,                    /* Block  */
  YYSYMBOL_110_50 = 110,                   /* $@50  */
  YYSYMBOL_111_51 = 111,                   /* $@51  */
  YYSYMBOL_BlockItem = 112,                /* BlockItem  */
  YYSYMBOL_113_52 = 113,                   /* $@52  */
  YYSYMBOL_114_53 = 114,                   /* $@53  */
  YYSYMBOL_BlockItemTail = 115,            /* BlockItemTail  */
  YYSYMBOL_PrimaryExp = 116,               /* PrimaryExp  */
  YYSYMBOL_117_54 = 117,                   /* $@54  */
  YYSYMBOL_118_55 = 118,                   /* $@55  */
  YYSYMBOL_119_56 = 119,                   /* $@56  */
  YYSYMBOL_120_57 = 120,                   /* $@57  */
  YYSYMBOL_Exp = 121,                      /* Exp  */
  YYSYMBOL_122_58 = 122,                   /* $@58  */
  YYSYMBOL_ExpOpt = 123,                   /* ExpOpt  */
  YYSYMBOL_Cond = 124,                     /* Cond  */
  YYSYMBOL_125_59 = 125,                   /* $@59  */
  YYSYMBOL_AddExp = 126,                   /* AddExp  */
  YYSYMBOL_127_60 = 127,                   /* $@60  */
  YYSYMBOL_AddExpTail = 128,               /* AddExpTail  */
  YYSYMBOL_129_61 = 129,                   /* $@61  */
  YYSYMBOL_130_62 = 130,                   /* $@62  */
  YYSYMBOL_MulExp = 131,                   /* MulExp  */
  YYSYMBOL_132_63 = 132,                   /* $@63  */
  YYSYMBOL_MulExpTail = 133,               /* MulExpTail  */
  YYSYMBOL_134_64 = 134,                   /* $@64  */
  YYSYMBOL_UnaryExp = 135,                 /* UnaryExp  */
  YYSYMBOL_136_65 = 136,                   /* $@65  */
  YYSYMBOL_137_66 = 137,                   /* $@66  */
  YYSYMBOL_138_67 = 138,                   /* $@67  */
  YYSYMBOL_139_68 = 139,                   /* $@68  */
  YYSYMBOL_FuncRParamsOpt = 140,           /* FuncRParamsOpt  */
  YYSYMBOL_FuncRParams = 141,              /* FuncRParams  */
  YYSYMBOL_142_69 = 142,                   /* $@69  */
  YYSYMBOL_LVal = 143,                     /* LVal  */
  YYSYMBOL_144_70 = 144,                   /* $@70  */
  YYSYMBOL_LValTail = 145,                 /* LValTail  */
  YYSYMBOL_146_71 = 146,                   /* $@71  */
  YYSYMBOL_147_72 = 147,                   /* $@72  */
  YYSYMBOL_RelExp = 148,                   /* RelExp  */
  YYSYMBOL_149_73 = 149,                   /* $@73  */
  YYSYMBOL_RelExpTail = 150,               /* RelExpTail  */
  YYSYMBOL_151_74 = 151,                   /* $@74  */
  YYSYMBOL_EqExp = 152,                    /* EqExp  */
  YYSYMBOL_153_75 = 153,                   /* $@75  */
  YYSYMBOL_EqExpTail = 154,                /* EqExpTail  */
  YYSYMBOL_155_76 = 155,                   /* $@76  */
  YYSYMBOL_LAndExp = 156,                  /* LAndExp  */
  YYSYMBOL_157_77 = 157,                   /* $@77  */
  YYSYMBOL_LAndExpTail = 158,              /* LAndExpTail  */
  YYSYMBOL_159_78 = 159,                   /* $@78  */
  YYSYMBOL_LOrExp = 160,                   /* LOrExp  */
  YYSYMBOL_161_79 = 161,                   /* $@79  */
  YYSYMBOL_LOrExpTail = 162,               /* LOrExpTail  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

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
       0,    39,    39,    40,    43,    72,    72,    78,    78,    86,
      86,   101,   101,   111,   111,   125,   134,   125,   142,   145,
     150,   145,   155,   158,   159,   159,   170,   171,   174,   174,
     179,   183,   183,   188,   192,   192,   206,   206,   211,   215,
     215,   224,   233,   224,   240,   241,   241,   252,   253,   256,
     256,   261,   265,   271,   277,   265,   286,   286,   296,   296,
     306,   306,   319,   319,   327,   333,   327,   341,   341,   348,
     351,   356,   351,   361,   365,   365,   370,   375,   376,   381,
     387,   381,   396,   396,   407,   407,   413,   418,   425,   413,
     430,   435,   442,   430,   447,   447,   458,   458,   469,   474,
     469,   485,   485,   489,   493,   498,   493,   509,   509,   517,
     517,   527,   528,   532,   537,   532,   546,   547,   547,   560,
     560,   576,   576,   584,   585,   588,   588,   596,   596,   604,
     604,   610,   610,   616,   619,   619,   627,   627,   633,   636,
     636,   642,   647,   642,   659,   659,   667,   668,   672,   673,
     673,   681,   681,   692,   697,   692,   702,   707,   707,   714,
     714,   720,   725,   725,   732,   732,   736,   740,   740,   748,
     748,   753,   757,   757,   765,   765,   770
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
  "line_list", "line", "Decl", "$@3", "$@4", "ConstDecl", "$@5", "BType",
  "$@6", "$@7", "ConstDef", "$@8", "$@9", "ConstExp", "ConstExpTail",
  "$@10", "$@11", "ConstInitVal", "$@12", "ConstInitValOpt",
  "ConstInitValTail", "$@13", "ConstDefTail", "$@14", "VarDecl", "$@15",
  "VarDeclTail", "$@16", "VarDef", "$@17", "$@18", "$@19", "InitVal",
  "$@20", "InitValOpt", "InitValTail", "$@21", "FuncDef", "$@22", "$@23",
  "$@24", "FuncType", "$@25", "$@26", "$@27", "FuncFParams", "$@28",
  "FuncFParam", "$@29", "$@30", "ExpOPT", "$@31", "ExpTail", "$@32",
  "$@33", "FuncFParamTail", "$@34", "FuncFParamsOpt", "Stmt", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "StmtOpt", "$@49", "Block", "$@50",
  "$@51", "BlockItem", "$@52", "$@53", "BlockItemTail", "PrimaryExp",
  "$@54", "$@55", "$@56", "$@57", "Exp", "$@58", "ExpOpt", "Cond", "$@59",
  "AddExp", "$@60", "AddExpTail", "$@61", "$@62", "MulExp", "$@63",
  "MulExpTail", "$@64", "UnaryExp", "$@65", "$@66", "$@67", "$@68",
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

#define YYPACT_NINF (-218)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -218,    17,  -218,  -218,    15,  -218,  -218,     3,    25,    16,
       8,    23,  -218,  -218,  -218,  -218,    24,  -218,  -218,    27,
      28,    43,  -218,  -218,  -218,    45,    50,    49,  -218,  -218,
    -218,  -218,  -218,  -218,    29,    28,    30,  -218,  -218,    31,
    -218,     2,  -218,     2,    47,     4,    32,    34,  -218,  -218,
      51,  -218,  -218,    56,    35,  -218,    46,    48,    52,    44,
      53,  -218,  -218,  -218,  -218,  -218,  -218,    43,  -218,    58,
    -218,  -218,    39,  -218,    54,    55,    40,    41,  -218,  -218,
      43,    66,    57,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,    35,    59,    68,    71,    62,  -218,  -218,  -218,    26,
      70,  -218,  -218,    60,  -218,  -218,    64,    61,    61,  -218,
      63,  -218,    65,  -218,  -218,  -218,  -218,    72,    10,    78,
      67,  -218,    69,  -218,    34,    61,  -218,    73,  -218,  -218,
      76,    66,  -218,    74,  -218,  -218,  -218,    70,  -218,  -218,
    -218,    75,    87,    89,  -218,    80,  -218,  -218,  -218,  -218,
    -218,    88,    68,  -218,  -218,  -218,    62,  -218,    26,    26,
    -218,    70,  -218,  -218,  -218,  -218,     4,    81,  -218,     4,
    -218,    64,    79,  -218,    77,  -218,    57,  -218,  -218,    72,
    -218,    82,    90,  -218,  -218,    84,  -218,  -218,    83,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,    85,    95,    91,  -218,
    -218,  -218,  -218,  -218,  -218,    98,  -218,  -218,  -218,  -218,
      61,     9,  -218,  -218,  -218,     4,    81,  -218,  -218,  -218,
      96,    11,  -218,   101,    86,  -218,  -218,  -218,    84,  -218,
    -218,  -218,   104,    92,  -218,  -218,  -218,  -218,  -218,    98,
    -218,  -218,  -218,  -218,    77,  -218,    96,    83,   101,  -218,
     104,  -218,  -218
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      52,    52,     2,     4,    56,     1,     3,     0,     0,     0,
       0,     0,    57,    59,    61,    53,    62,    77,    64,     0,
      76,    11,    54,    74,    63,     0,     0,     0,   104,    64,
      65,    12,    14,    55,     0,    76,    69,   105,    75,     0,
      66,   109,    67,   109,     7,    82,     0,    73,   111,   108,
       0,    34,   110,     0,   121,   104,     0,     0,     0,     0,
       0,   106,    70,    68,     9,     6,     8,    11,   151,     0,
     123,   127,     0,    85,     0,     0,     0,     0,    99,   121,
      11,     0,   156,    80,   122,   134,    83,    87,    91,    95,
      97,   121,     0,     0,    39,    38,   153,   152,   121,   133,
     139,   125,   125,     0,    71,    15,    33,    22,    22,    36,
       0,   121,     0,   129,   131,   128,   144,   138,   113,     0,
       0,   172,     0,   100,    73,    22,    31,     0,    19,    40,
       0,     0,    35,     0,    81,   134,   134,   139,   136,   135,
     140,     0,     0,     0,   116,     0,    88,   126,   167,    92,
      72,     0,     0,    10,   127,    42,    38,   154,   133,   133,
     145,   139,   114,   118,   120,   142,    82,   176,   162,    82,
      16,    33,     0,    18,   121,    37,   156,   130,   132,   138,
     121,   121,   103,   174,   173,   171,   157,    93,   127,    32,
      20,    45,    43,    44,   155,   137,     0,   148,     0,   147,
     101,    89,   167,   169,   168,   166,   127,    24,    23,    17,
      22,   121,   115,   149,   143,    82,   176,   162,   164,   163,
     161,   127,    21,    51,     0,   121,   102,   175,   171,   157,
     159,   158,    30,     0,    49,    47,    46,   150,   170,   166,
     127,    28,    26,    25,   121,   165,   161,   127,    51,   160,
      30,    50,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,    99,  -218,  -218,  -218,  -218,  -218,   -57,  -218,
    -218,   -61,  -218,  -218,   -34,  -106,  -218,  -218,  -217,  -218,
    -218,  -128,  -218,   -50,  -218,  -218,  -218,   -32,  -218,    -6,
    -218,  -218,  -218,  -206,  -218,  -218,  -120,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,   100,  -218,
    -218,  -218,  -218,     6,  -218,  -218,    97,  -218,  -218,  -163,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,    93,  -218,  -218,  -218,
    -218,  -218,    94,  -218,  -218,  -218,  -218,  -218,   -54,  -218,
      42,    33,  -218,   -70,  -218,  -113,  -218,  -218,   -88,  -218,
     -48,  -218,  -129,  -218,  -218,  -218,  -218,  -218,   -91,  -218,
      20,  -218,   -37,  -218,  -218,   -89,  -218,  -105,  -218,   -75,
    -218,   -96,  -218,   -58,  -218,   -83,  -218,  -218,  -218,   -69,
    -218
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    49,    50,    51,    65,    80,    25,    26,
      27,   106,   125,   188,   208,   129,   154,   210,   209,   221,
     233,   242,   247,   127,   152,    66,    67,   110,   131,    95,
     107,   108,   174,   192,   211,   224,   235,   244,     3,     4,
      16,    28,     7,     8,     9,    10,    17,    18,    20,    21,
      36,    40,    47,    63,    79,   124,    24,    29,    19,    52,
      53,    98,    54,    55,    56,   101,   166,    57,   102,   169,
      58,    59,    60,    91,   201,   215,    33,    34,    41,    43,
      44,    45,    46,   140,   141,   180,   142,   143,   193,    71,
      72,   120,   121,   173,    85,   115,   135,   136,    99,   100,
     139,   161,   117,   118,   119,   181,   137,   198,   199,   225,
      69,    82,    97,   111,   176,   205,   206,   231,   240,   185,
     186,   219,   229,   167,   168,   204,   217,   147,   148,   184,
     202
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    84,   130,   182,   232,   223,   187,  -107,   160,  -107,
      81,    11,   -79,  -117,  -119,    14,  -107,     5,    68,   151,
     -58,    13,   -60,    93,   -86,    92,   -90,   -94,   -96,   -98,
     250,    12,   179,  -112,   -84,   113,   114,    70,   248,   191,
     -48,   207,   -27,    23,   112,   177,   178,   158,   159,    15,
     -13,   -78,   226,    30,    22,    31,    32,   133,    39,    37,
      42,    -5,    62,    61,    68,    64,    74,  -124,    77,    83,
      75,    86,    89,    90,    94,    76,   105,   109,    78,   126,
      87,    88,   -41,   116,   138,    96,   145,   155,   104,   128,
     163,   171,   123,   164,   146,   132,   149,   134,   183,   170,
       6,   162,   203,   157,   222,   153,   165,   191,   190,  -146,
     213,   200,   212,   207,   218,   230,   234,   236,   214,   241,
     172,   189,   252,   243,   175,   156,   196,   197,   251,    35,
     150,   195,    38,   103,   237,   122,   220,    48,   144,   194,
     239,   249,   228,   245,   216,   238,     0,   227,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   197
};

static const yytype_int16 yycheck[] =
{
      54,    71,   108,   166,   221,   211,   169,     5,   137,     7,
      67,     8,     8,     3,     4,     7,    14,     0,     8,   125,
       5,     5,     7,    80,    20,    79,    22,    23,    24,    25,
     247,     6,   161,    31,    30,     9,    10,    91,   244,    30,
      31,    30,    31,    15,    98,   158,   159,   135,   136,    26,
       7,    27,   215,     8,    27,     5,     7,   111,    28,    30,
      29,    14,    28,    31,     8,    14,    20,    32,    24,    11,
      22,    32,    32,    32,     8,    23,     8,    15,    25,    15,
      26,    26,    11,    13,    12,    28,     8,    11,    29,    28,
       3,   152,    32,     4,    27,    32,    27,    32,    17,    11,
       1,    26,    18,    29,   210,    32,    26,    30,    29,    27,
      15,    21,    27,    30,    16,    19,    15,    31,    27,    15,
     154,   171,   250,    31,   156,   131,   180,   181,   248,    29,
     124,   179,    35,    91,   225,   102,   206,    43,   118,   176,
     229,   246,   217,   239,   202,   228,    -1,   216,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,   225
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    71,    72,     0,    35,    75,    76,    77,
      78,     8,     6,     5,     7,    26,    73,    79,    80,    91,
      81,    82,    27,    15,    89,    41,    42,    43,    74,    90,
       8,     5,     7,   109,   110,    81,    83,    30,    89,    28,
      84,   111,    29,   112,   113,   114,   115,    85,   115,    36,
      37,    38,    92,    93,    95,    96,    97,   100,   103,   104,
     105,    31,    28,    86,    14,    39,    58,    59,     8,   143,
     121,   122,   123,   109,    20,    22,    23,    24,    25,    87,
      40,    41,   144,    11,   126,   127,    32,    26,    26,    32,
      32,   106,   121,    41,     8,    62,    28,   145,    94,   131,
     132,    98,   101,   123,    29,     8,    44,    63,    64,    15,
      60,   146,   121,     9,    10,   128,    13,   135,   136,   137,
     124,   125,   124,    32,    88,    45,    15,    56,    28,    48,
      48,    61,    32,   121,    32,   129,   130,   139,    12,   133,
     116,   117,   119,   120,   143,     8,    27,   160,   161,    27,
      86,    48,    57,    32,    49,    11,    62,    29,   131,   131,
     135,   134,    26,     3,     4,    26,    99,   156,   157,   102,
      11,    44,    47,   126,    65,    60,   147,   128,   128,   135,
     118,   138,    92,    17,   162,   152,   153,    92,    46,    56,
      29,    30,    66,   121,   145,   133,   121,   121,   140,   141,
      21,   107,   163,    18,   158,   148,   149,    30,    47,    51,
      50,    67,    27,    15,    27,   108,   156,   159,    16,   154,
     126,    52,    48,    66,    68,   142,    92,   162,   152,   155,
      19,   150,    51,    53,    15,    69,    31,   141,   158,   148,
     151,    15,    54,    31,    70,   154,   126,    55,    66,   150,
      51,    69,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    37,    36,    38,    36,    40,
      39,    42,    41,    43,    41,    45,    46,    44,    47,    49,
      50,    48,    48,    51,    52,    51,    53,    53,    55,    54,
      54,    57,    56,    56,    59,    58,    61,    60,    60,    63,
      62,    64,    65,    62,    66,    67,    66,    68,    68,    70,
      69,    69,    72,    73,    74,    71,    76,    75,    77,    75,
      78,    75,    80,    79,    82,    83,    81,    85,    84,    84,
      87,    88,    86,    86,    90,    89,    89,    91,    91,    93,
      94,    92,    95,    92,    96,    92,    97,    98,    99,    92,
     100,   101,   102,    92,   103,    92,   104,    92,   105,   106,
      92,   108,   107,   107,   110,   111,   109,   113,   112,   114,
     112,   115,   115,   117,   118,   116,   116,   119,   116,   120,
     116,   122,   121,   123,   123,   125,   124,   127,   126,   129,
     128,   130,   128,   128,   132,   131,   134,   133,   133,   136,
     135,   137,   138,   135,   139,   135,   140,   140,   141,   142,
     141,   144,   143,   146,   147,   145,   145,   149,   148,   151,
     150,   150,   153,   152,   155,   154,   154,   157,   156,   159,
     158,   158,   161,   160,   163,   162,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     2,     0,     2,     0,
       6,     0,     2,     0,     2,     0,     0,     6,     1,     0,
       0,     6,     0,     1,     0,     4,     2,     0,     0,     4,
       0,     0,     4,     0,     0,     5,     0,     4,     0,     0,
       3,     0,     0,     6,     1,     0,     4,     2,     0,     0,
       4,     0,     0,     0,     0,     9,     0,     2,     0,     2,
       0,     2,     0,     3,     0,     0,     5,     0,     4,     0,
       0,     0,     6,     0,     0,     4,     0,     1,     0,     0,
       0,     6,     0,     3,     0,     2,     0,     0,     0,     9,
       0,     0,     0,     8,     0,     3,     0,     3,     0,     0,
       5,     0,     3,     0,     0,     0,     5,     0,     2,     0,
       2,     2,     0,     0,     0,     5,     1,     0,     2,     0,
       2,     0,     2,     1,     0,     0,     2,     0,     3,     0,
       4,     0,     4,     0,     0,     3,     0,     4,     0,     0,
       2,     0,     0,     6,     0,     3,     0,     1,     1,     0,
       4,     0,     3,     0,     0,     6,     0,     0,     3,     0,
       4,     0,     0,     3,     0,     4,     0,     0,     3,     0,
       4,     0,     0,     3,     0,     4,     0
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
  case 4: /* line: FuncDef  */
#line 43 "lexer.y"
                          {
                    indent_level++;
                }
#line 1558 "y.tab.c"
    break;

  case 5: /* $@3: %empty  */
#line 72 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Decl\n"); 
                }
#line 1568 "y.tab.c"
    break;

  case 7: /* $@4: %empty  */
#line 78 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Decl\n"); 
                }
#line 1578 "y.tab.c"
    break;

  case 9: /* $@5: %empty  */
#line 86 "lexer.y"
                       {
                    print_indent(); 
                    indent_level++;
                    printf("ConstDecl (%d)\n", line_number);
                }
#line 1588 "y.tab.c"
    break;

  case 10: /* ConstDecl: CONST $@5 BType ConstDef ConstDefTail END  */
#line 92 "lexer.y"
                   {
                    print_indent();
                    indent_level++;
                    printf("SEMICN\n");
                }
#line 1598 "y.tab.c"
    break;

  case 11: /* $@6: %empty  */
#line 101 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("BType (%d)\n", line_number);
                }
#line 1608 "y.tab.c"
    break;

  case 12: /* BType: $@6 INT  */
#line 106 "lexer.y"
                   {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1618 "y.tab.c"
    break;

  case 13: /* $@7: %empty  */
#line 111 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("BType (%d)\n", line_number);
                }
#line 1628 "y.tab.c"
    break;

  case 14: /* BType: $@7 FLOAT  */
#line 116 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1638 "y.tab.c"
    break;

  case 15: /* $@8: %empty  */
#line 125 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("ConstDef (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1651 "y.tab.c"
    break;

  case 16: /* $@9: %empty  */
#line 134 "lexer.y"
                      {
                    print_indent();
                    indent_level++;
                    printf("ASSIGN\n");
                }
#line 1661 "y.tab.c"
    break;

  case 19: /* $@10: %empty  */
#line 145 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1670 "y.tab.c"
    break;

  case 20: /* $@11: %empty  */
#line 150 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1679 "y.tab.c"
    break;

  case 24: /* $@12: %empty  */
#line 159 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1688 "y.tab.c"
    break;

  case 25: /* ConstInitVal: LBRACE $@12 ConstInitValOpt RBRACE  */
#line 164 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1697 "y.tab.c"
    break;

  case 28: /* $@13: %empty  */
#line 174 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1706 "y.tab.c"
    break;

  case 31: /* $@14: %empty  */
#line 183 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1715 "y.tab.c"
    break;

  case 34: /* $@15: %empty  */
#line 192 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("VarDecl (%d)\n", line_number);
                }
#line 1725 "y.tab.c"
    break;

  case 35: /* VarDecl: $@15 BType VarDef VarDeclTail END  */
#line 200 "lexer.y"
                   {
                    print_indent();
                    printf("SEMICN\n");
                }
#line 1734 "y.tab.c"
    break;

  case 36: /* $@16: %empty  */
#line 206 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1743 "y.tab.c"
    break;

  case 39: /* $@17: %empty  */
#line 215 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("VarDef1 (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1756 "y.tab.c"
    break;

  case 41: /* $@18: %empty  */
#line 224 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("VarDef2 (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1769 "y.tab.c"
    break;

  case 42: /* $@19: %empty  */
#line 233 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1778 "y.tab.c"
    break;

  case 45: /* $@20: %empty  */
#line 241 "lexer.y"
                        {
                    print_indent(); 
                    printf("LBRACE\n");
                }
#line 1787 "y.tab.c"
    break;

  case 46: /* InitVal: LBRACE $@20 InitValOpt RBRACE  */
#line 246 "lexer.y"
                      {
                    print_indent(); 
                    printf("RBRACE\n");
                }
#line 1796 "y.tab.c"
    break;

  case 49: /* $@21: %empty  */
#line 256 "lexer.y"
                       {
                    print_indent(); 
                    printf("COMMA\n");
                }
#line 1805 "y.tab.c"
    break;

  case 52: /* $@22: %empty  */
#line 265 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncDef (%d)\n", line_number); 
                }
#line 1815 "y.tab.c"
    break;

  case 53: /* $@23: %empty  */
#line 271 "lexer.y"
                             {
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1826 "y.tab.c"
    break;

  case 54: /* $@24: %empty  */
#line 277 "lexer.y"
                                      {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1835 "y.tab.c"
    break;

  case 55: /* FuncDef: $@22 FuncType IDENT LPARENT $@23 FuncFParamsOpt RPARENT $@24 Block  */
#line 281 "lexer.y"
                      {  
                    indent_level++;
                }
#line 1843 "y.tab.c"
    break;

  case 56: /* $@25: %empty  */
#line 286 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1853 "y.tab.c"
    break;

  case 57: /* FuncType: $@25 VOID  */
#line 291 "lexer.y"
                    {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1863 "y.tab.c"
    break;

  case 58: /* $@26: %empty  */
#line 296 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1873 "y.tab.c"
    break;

  case 59: /* FuncType: $@26 INT  */
#line 301 "lexer.y"
                   {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1883 "y.tab.c"
    break;

  case 60: /* $@27: %empty  */
#line 306 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("FuncType (%d)\n", line_number);
                }
#line 1893 "y.tab.c"
    break;

  case 61: /* FuncType: $@27 FLOAT  */
#line 311 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Type: %s\n", (yyvsp[0].strval));
                }
#line 1903 "y.tab.c"
    break;

  case 62: /* $@28: %empty  */
#line 319 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncFParams (%d)\n", line_number);
                }
#line 1913 "y.tab.c"
    break;

  case 64: /* $@29: %empty  */
#line 327 "lexer.y"
                  {
                    print_indent(); 
                    indent_level++;
                    printf("FuncFParam (%d)\n", line_number);
                }
#line 1923 "y.tab.c"
    break;

  case 65: /* $@30: %empty  */
#line 333 "lexer.y"
                     {
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                }
#line 1933 "y.tab.c"
    break;

  case 67: /* $@31: %empty  */
#line 341 "lexer.y"
                                   {
                    print_indent(); 
                    printf("LBRACKET\n");
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1944 "y.tab.c"
    break;

  case 70: /* $@32: %empty  */
#line 351 "lexer.y"
                          {
                    print_indent(); 
                    printf("LBRACKET\n");
                }
#line 1953 "y.tab.c"
    break;

  case 71: /* $@33: %empty  */
#line 356 "lexer.y"
                        {
                    print_indent(); 
                    printf("RBRACKET\n");
                }
#line 1962 "y.tab.c"
    break;

  case 74: /* $@34: %empty  */
#line 365 "lexer.y"
                       {
                    print_indent();
                    printf("COMMA (%d)\n", line_number);
                }
#line 1971 "y.tab.c"
    break;

  case 79: /* $@35: %empty  */
#line 381 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 1981 "y.tab.c"
    break;

  case 80: /* $@36: %empty  */
#line 387 "lexer.y"
                      {
                    print_indent(); 
                    printf("ASSIGN\n");
                }
#line 1990 "y.tab.c"
    break;

  case 81: /* Stmt: $@35 LVal ASSIGN $@36 Exp END  */
#line 392 "lexer.y"
                   {
                    print_indent(); 
                    printf("SEMICN\n");
                }
#line 1999 "y.tab.c"
    break;

  case 82: /* $@37: %empty  */
#line 396 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2009 "y.tab.c"
    break;

  case 83: /* Stmt: $@37 ExpOpt END  */
#line 402 "lexer.y"
                   {
                    print_indent(); 
                    indent_level++;
                    printf("SEMICN\n");
                }
#line 2019 "y.tab.c"
    break;

  case 84: /* $@38: %empty  */
#line 407 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2029 "y.tab.c"
    break;

  case 86: /* $@39: %empty  */
#line 413 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2039 "y.tab.c"
    break;

  case 87: /* $@40: %empty  */
#line 418 "lexer.y"
                          {
                    print_indent();
                    printf("IF\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2050 "y.tab.c"
    break;

  case 88: /* $@41: %empty  */
#line 425 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2059 "y.tab.c"
    break;

  case 90: /* $@42: %empty  */
#line 430 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2069 "y.tab.c"
    break;

  case 91: /* $@43: %empty  */
#line 435 "lexer.y"
                             {
                    print_indent();
                    printf("WHILE\n");
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2080 "y.tab.c"
    break;

  case 92: /* $@44: %empty  */
#line 442 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2089 "y.tab.c"
    break;

  case 94: /* $@45: %empty  */
#line 447 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2099 "y.tab.c"
    break;

  case 95: /* Stmt: $@45 BREAK END  */
#line 452 "lexer.y"
                         {
                    print_indent();
                    printf("BREAK\n");
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2110 "y.tab.c"
    break;

  case 96: /* $@46: %empty  */
#line 458 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2120 "y.tab.c"
    break;

  case 97: /* Stmt: $@46 CONTINUE END  */
#line 463 "lexer.y"
                            {
                    print_indent();
                    printf("CONTINUE\n");
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2131 "y.tab.c"
    break;

  case 98: /* $@47: %empty  */
#line 469 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Stmt (%d)\n", line_number);
                }
#line 2141 "y.tab.c"
    break;

  case 99: /* $@48: %empty  */
#line 474 "lexer.y"
                      {
                    print_indent();
                    printf("RETURN\n");
                }
#line 2150 "y.tab.c"
    break;

  case 100: /* Stmt: $@47 RETURN $@48 ExpOpt END  */
#line 479 "lexer.y"
                   {
                    print_indent();
                    printf("SEMICN\n");
                }
#line 2159 "y.tab.c"
    break;

  case 101: /* $@49: %empty  */
#line 485 "lexer.y"
                      {
                    print_indent();
                    printf("ELSE\n");
                }
#line 2168 "y.tab.c"
    break;

  case 104: /* $@50: %empty  */
#line 493 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Block (%d)\n", line_number);
                }
#line 2178 "y.tab.c"
    break;

  case 105: /* $@51: %empty  */
#line 498 "lexer.y"
                      {
                    print_indent();
                    printf("LBRACE\n");
                }
#line 2187 "y.tab.c"
    break;

  case 106: /* Block: $@50 LBRACE $@51 BlockItemTail RBRACE  */
#line 503 "lexer.y"
                      {
                    print_indent();
                    printf("RBRACE\n");
                }
#line 2196 "y.tab.c"
    break;

  case 107: /* $@52: %empty  */
#line 509 "lexer.y"
                  {
                    if(count < indent_level) indent_level = count;
                    else count = indent_level;
                    print_indent();
                    indent_level++;
                    printf("BlockItem (%d)\n", line_number);
                }
#line 2208 "y.tab.c"
    break;

  case 109: /* $@53: %empty  */
#line 517 "lexer.y"
                  {
                    if(count < indent_level) indent_level = count;
                    else count = indent_level;
                    print_indent();
                    indent_level++;
                    printf("BlockItem (%d)\n", line_number);
                }
#line 2220 "y.tab.c"
    break;

  case 113: /* $@54: %empty  */
#line 532 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2230 "y.tab.c"
    break;

  case 114: /* $@55: %empty  */
#line 537 "lexer.y"
                       {
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2239 "y.tab.c"
    break;

  case 115: /* PrimaryExp: $@54 LPARENT $@55 Exp RPARENT  */
#line 542 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2248 "y.tab.c"
    break;

  case 117: /* $@56: %empty  */
#line 547 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2258 "y.tab.c"
    break;

  case 118: /* PrimaryExp: $@56 INTCONST  */
#line 552 "lexer.y"
                        {
                    print_indent();
                    indent_level++;
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("INTCON: %d\n", (yyvsp[0].ival));
                }
#line 2271 "y.tab.c"
    break;

  case 119: /* $@57: %empty  */
#line 560 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("PrimaryExp (%d)\n", line_number);
                }
#line 2281 "y.tab.c"
    break;

  case 120: /* PrimaryExp: $@57 FLOATCONST  */
#line 565 "lexer.y"
                          {
                    print_indent();
                    indent_level++;
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("FLOATCON: %s\n", (yyvsp[0].strval));
                }
#line 2294 "y.tab.c"
    break;

  case 121: /* $@58: %empty  */
#line 576 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Exp (%d)\n", line_number);
                }
#line 2304 "y.tab.c"
    break;

  case 125: /* $@59: %empty  */
#line 588 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("Cond (%d)\n", line_number);
                }
#line 2314 "y.tab.c"
    break;

  case 127: /* $@60: %empty  */
#line 596 "lexer.y"
                  {         /* 加减表达式  */
                    print_indent();
                    indent_level++;
                    printf("AddExp (%d)\n", line_number);
                }
#line 2324 "y.tab.c"
    break;

  case 129: /* $@61: %empty  */
#line 604 "lexer.y"
                      {
                    print_indent();
                    indent_level++;
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 2334 "y.tab.c"
    break;

  case 131: /* $@62: %empty  */
#line 610 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 2344 "y.tab.c"
    break;

  case 134: /* $@63: %empty  */
#line 619 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf(" MulExp (%d)\n", line_number);
                }
#line 2354 "y.tab.c"
    break;

  case 136: /* $@64: %empty  */
#line 627 "lexer.y"
                     {
                    print_indent();
                    indent_level++;
                    printf("MUL: %s\n", (yyvsp[0].strval));
                }
#line 2364 "y.tab.c"
    break;

  case 139: /* $@65: %empty  */
#line 636 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 2374 "y.tab.c"
    break;

  case 141: /* $@66: %empty  */
#line 642 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 2384 "y.tab.c"
    break;

  case 142: /* $@67: %empty  */
#line 647 "lexer.y"
                             {
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 2396 "y.tab.c"
    break;

  case 143: /* UnaryExp: $@66 IDENT LPARENT $@67 FuncRParamsOpt RPARENT  */
#line 655 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 2405 "y.tab.c"
    break;

  case 144: /* $@68: %empty  */
#line 659 "lexer.y"
                         {
                    print_indent();
                    indent_level++;
                    printf("UNARYOP: %s\n", (yyvsp[0].strval));
                }
#line 2415 "y.tab.c"
    break;

  case 149: /* $@69: %empty  */
#line 673 "lexer.y"
                           {
                    print_indent();
                    printf("COMMA\n");
                }
#line 2424 "y.tab.c"
    break;

  case 151: /* $@70: %empty  */
#line 681 "lexer.y"
                       {
                    print_indent();
                    indent_level++;
                    printf("Lavl (%d)\n", line_number);
                    print_indent();
                    indent_level--;
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 2437 "y.tab.c"
    break;

  case 153: /* $@71: %empty  */
#line 692 "lexer.y"
                          {
                    print_indent();
                    printf("LBRACKET\n");
                }
#line 2446 "y.tab.c"
    break;

  case 154: /* $@72: %empty  */
#line 697 "lexer.y"
                        {
                    print_indent();
                    printf("RBRACKET\n");
                }
#line 2455 "y.tab.c"
    break;

  case 157: /* $@73: %empty  */
#line 707 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("RelExp (%d)\n", line_number);
                }
#line 2465 "y.tab.c"
    break;

  case 159: /* $@74: %empty  */
#line 714 "lexer.y"
                        {
                    print_indent();
                    indent_level--;
                    printf("WEIGHT: %s\n",(yyvsp[0].strval));
                }
#line 2475 "y.tab.c"
    break;

  case 162: /* $@75: %empty  */
#line 725 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("EqExp (%d)\n", line_number);
                }
#line 2485 "y.tab.c"
    break;

  case 164: /* $@76: %empty  */
#line 732 "lexer.y"
                       {
                    print_indent();
                    printf("EQUAL\n");
                }
#line 2494 "y.tab.c"
    break;

  case 167: /* $@77: %empty  */
#line 740 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("LAndExp (%d)\n", line_number);
                }
#line 2504 "y.tab.c"
    break;

  case 169: /* $@78: %empty  */
#line 748 "lexer.y"
                     {
                    print_indent();
                    printf("AND\n");
                }
#line 2513 "y.tab.c"
    break;

  case 172: /* $@79: %empty  */
#line 757 "lexer.y"
                  {
                    print_indent();
                    indent_level++;
                    printf("LOrExp (%d)\n", line_number);
                }
#line 2523 "y.tab.c"
    break;

  case 174: /* $@80: %empty  */
#line 765 "lexer.y"
                    {
                    print_indent();
                    printf("OR\n");
                }
#line 2532 "y.tab.c"
    break;


#line 2536 "y.tab.c"

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

#line 774 "lexer.y"


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

