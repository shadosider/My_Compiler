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
extern int line_number;

void print_indent() {
    for (int i = 0; i < indent_level; i++) {
        printf("  ");
    }
}



#line 93 "y.tab.c"

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
#line 23 "lexer.y"

    int ival;      // 用于存储整数
    float fval;    // 用于存储浮点数
    char *strval;  // 用于存储字符串

#line 216 "y.tab.c"

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
  YYSYMBOL_PrimaryExp = 36,                /* PrimaryExp  */
  YYSYMBOL_37_45 = 37,                     /* $@45  */
  YYSYMBOL_Exp = 38,                       /* Exp  */
  YYSYMBOL_39_46 = 39,                     /* $@46  */
  YYSYMBOL_AddExp = 40,                    /* AddExp  */
  YYSYMBOL_41_48 = 41,                     /* $@48  */
  YYSYMBOL_AddExpTail = 42,                /* AddExpTail  */
  YYSYMBOL_43_49 = 43,                     /* $@49  */
  YYSYMBOL_44_50 = 44,                     /* $@50  */
  YYSYMBOL_MulExp = 45,                    /* MulExp  */
  YYSYMBOL_46_51 = 46,                     /* $@51  */
  YYSYMBOL_MulExpTail = 47,                /* MulExpTail  */
  YYSYMBOL_48_52 = 48,                     /* $@52  */
  YYSYMBOL_UnaryExp = 49,                  /* UnaryExp  */
  YYSYMBOL_50_53 = 50,                     /* $@53  */
  YYSYMBOL_51_54 = 51,                     /* $@54  */
  YYSYMBOL_52_55 = 52,                     /* $@55  */
  YYSYMBOL_53_56 = 53,                     /* $@56  */
  YYSYMBOL_FuncRParamsOpt = 54,            /* FuncRParamsOpt  */
  YYSYMBOL_FuncRParams = 55,               /* FuncRParams  */
  YYSYMBOL_56_57 = 56,                     /* $@57  */
  YYSYMBOL_LVal = 57,                      /* LVal  */
  YYSYMBOL_58_58 = 58,                     /* $@58  */
  YYSYMBOL_LValTail = 59,                  /* LValTail  */
  YYSYMBOL_60_59 = 60,                     /* $@59  */
  YYSYMBOL_61_60 = 61,                     /* $@60  */
  YYSYMBOL_RelExp = 62,                    /* RelExp  */
  YYSYMBOL_63_70 = 63,                     /* $@70  */
  YYSYMBOL_64_71 = 64,                     /* $@71  */
  YYSYMBOL_65_72 = 65,                     /* $@72  */
  YYSYMBOL_66_73 = 66,                     /* $@73  */
  YYSYMBOL_67_74 = 67,                     /* $@74  */
  YYSYMBOL_68_75 = 68,                     /* $@75  */
  YYSYMBOL_69_76 = 69,                     /* $@76  */
  YYSYMBOL_70_77 = 70,                     /* $@77  */
  YYSYMBOL_71_78 = 71,                     /* $@78  */
  YYSYMBOL_72_79 = 72,                     /* $@79  */
  YYSYMBOL_73_80 = 73                      /* $@80  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   55

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

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
       0,    40,    40,    41,    44,   445,   445,   456,   457,   465,
     476,   476,   494,   494,   501,   501,   506,   506,   511,   514,
     514,   521,   521,   526,   529,   529,   534,   538,   534,   549,
     549,   556,   557,   561,   562,   562,   570,   570,   579,   584,
     579,   589,   643,   643,   648,   653,   648,   660,   660,   665,
     670,   665,   675,   680,   675,   687,   687,   692,   697,   692
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
  "line_list", "line", "PrimaryExp", "$@45", "Exp", "$@46", "AddExp",
  "$@48", "AddExpTail", "$@49", "$@50", "MulExp", "$@51", "MulExpTail",
  "$@52", "UnaryExp", "$@53", "$@54", "$@55", "$@56", "FuncRParamsOpt",
  "FuncRParams", "$@57", "LVal", "$@58", "LValTail", "$@59", "$@60",
  "RelExp", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75", "$@76", "$@77",
  "$@78", "$@79", "$@80", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-32)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -54,    13,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,    -5,    -4,     2,     2,   -54,   -54,     7,
       8,   -54,   -54,   -54,   -54,   -54,     9,     4,    11,   -54,
      12,   -54,   -54,   -54,   -54,   -54,     2,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,    -1,   -54,   -54,   -54,   -54,
      -4,    -4,   -54,     2,    -8,   -54,   -54,     2,   -54,   -54,
     -54,   -54,     9,   -54,   -54,     0,   -54,     5,   -54,   -54,
     -54,   -54,   -54,    16,     6,   -54,    -3,   -54,   -54,   -54,
     -54,    -8,   -54,   -54
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      42,    42,     2,     4,    12,    42,     1,     3,    43,    19,
      19,    12,    12,     0,    18,    24,    24,    19,    48,     0,
       0,    45,    14,    16,    13,    29,    23,     0,     0,    56,
       0,    50,    53,    12,    19,    19,    24,    21,    20,     8,
       9,    36,     5,    25,     7,     0,    58,    19,    19,    46,
      18,    18,    30,    24,    41,    10,    27,    24,    51,    54,
      15,    17,    23,    38,    37,     0,    12,    10,    59,    22,
      10,     6,    11,    33,     0,    32,     0,    34,    28,    39,
      10,    41,    35,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,    33,   -54,   -54,   -53,   -54,   -11,   -54,   -41,
     -54,   -54,    -6,   -54,   -27,   -54,   -13,   -54,   -54,   -54,
     -54,   -54,   -44,   -54,   -54,   -54,   -43,   -54,   -54,    32,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    43,    55,    73,    66,     8,     9,    24,
      34,    35,    14,    15,    38,    53,    26,    27,    28,    67,
      36,    74,    75,    80,    44,    54,    64,    70,    81,     3,
       4,     5,    33,    10,    11,    47,    12,    48,    16,    17,
      57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      19,    20,    65,    29,    18,    22,    23,    39,    40,    60,
      61,    30,    41,     6,    21,    25,    31,    76,    32,    45,
      63,    37,    49,    52,    46,    56,    79,    71,    50,    51,
      42,    77,   -31,    78,     7,    69,    82,    13,    83,     0,
      62,    58,    59,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72
};

static const yytype_int8 yycheck[] =
{
      11,    12,    55,    16,    10,     9,    10,     3,     4,    50,
      51,    17,     8,     0,    19,    13,     9,    70,    10,     8,
      28,    12,    33,    36,    12,    26,    29,    27,    34,    35,
      26,    15,    27,    27,     1,    62,    80,     5,    81,    -1,
      53,    47,    48,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    35,    62,    63,    64,     0,    35,    40,    41,
      66,    67,    69,    62,    45,    46,    71,    72,    45,    40,
      40,    19,     9,    10,    42,    13,    49,    50,    51,    49,
      45,     9,    10,    65,    43,    44,    53,    12,    47,     3,
       4,     8,    26,    36,    57,     8,    12,    68,    70,    40,
      45,    45,    49,    48,    58,    37,    26,    73,    45,    45,
      42,    42,    49,    28,    59,    38,    39,    52,    49,    47,
      60,    27,    40,    38,    54,    55,    38,    15,    27,    29,
      56,    61,    55,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    37,    36,    36,    36,    36,
      39,    38,    41,    40,    43,    42,    44,    42,    42,    46,
      45,    48,    47,    47,    50,    49,    51,    52,    49,    53,
      49,    54,    54,    55,    56,    55,    58,    57,    60,    61,
      59,    59,    63,    62,    64,    65,    62,    66,    40,    67,
      68,    40,    69,    70,    40,    71,    45,    72,    73,    45
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     4,     1,     1,     1,
       0,     2,     0,     3,     0,     4,     0,     4,     0,     0,
       3,     0,     4,     0,     0,     2,     0,     0,     6,     0,
       3,     0,     1,     1,     0,     4,     0,     3,     0,     0,
       6,     0,     0,     2,     0,     0,     5,     0,     2,     0,
       0,     5,     0,     0,     5,     0,     2,     0,     0,     5
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
  case 4: /* line: RelExp  */
#line 44 "lexer.y"
                               {
                    indent_level++;
                }
#line 1325 "y.tab.c"
    break;

  case 5: /* $@45: %empty  */
#line 445 "lexer.y"
                         {
                    print_indent();
                    printf("PrimaryExp (%d)\n", line_number);
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1336 "y.tab.c"
    break;

  case 6: /* PrimaryExp: LPARENT $@45 Exp RPARENT  */
#line 452 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1345 "y.tab.c"
    break;

  case 8: /* PrimaryExp: INTCONST  */
#line 457 "lexer.y"
                          {
                    print_indent();
                    printf("PrimaryExp (%d)\n", line_number);
                    print_indent();
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    printf("INTCON: %d\n", (yyvsp[0].ival));
                }
#line 1358 "y.tab.c"
    break;

  case 9: /* PrimaryExp: FLOATCONST  */
#line 465 "lexer.y"
                            {
                    print_indent();
                    printf("PrimaryExp (%d)\n", line_number);
                    print_indent();
                    printf("Number (%d)\n", line_number);
                    print_indent();
                    printf("FLOATCON: %s\n", (yyvsp[0].strval));
                }
#line 1371 "y.tab.c"
    break;

  case 10: /* $@46: %empty  */
#line 476 "lexer.y"
                  {
                    print_indent();
                    printf("Exp (%d)\n", line_number);
                }
#line 1380 "y.tab.c"
    break;

  case 12: /* $@48: %empty  */
#line 494 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", line_number);
                }
#line 1389 "y.tab.c"
    break;

  case 14: /* $@49: %empty  */
#line 501 "lexer.y"
                      {
                    print_indent();
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 1398 "y.tab.c"
    break;

  case 16: /* $@50: %empty  */
#line 506 "lexer.y"
                       {
                    print_indent();
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 1407 "y.tab.c"
    break;

  case 19: /* $@51: %empty  */
#line 514 "lexer.y"
                  {
                    print_indent();
                    printf(" MulExp (%d)\n", line_number);
                }
#line 1416 "y.tab.c"
    break;

  case 21: /* $@52: %empty  */
#line 521 "lexer.y"
                     {
                    print_indent();
                    printf("MUL: %s\n", (yyvsp[0].strval));
                }
#line 1425 "y.tab.c"
    break;

  case 24: /* $@53: %empty  */
#line 529 "lexer.y"
                  {
                    print_indent();
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 1434 "y.tab.c"
    break;

  case 26: /* $@54: %empty  */
#line 534 "lexer.y"
                  {
                    print_indent();
                    printf("UnaryExp (%d)\n", line_number);
                }
#line 1443 "y.tab.c"
    break;

  case 27: /* $@55: %empty  */
#line 538 "lexer.y"
                             {
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[-1].strval));
                    print_indent();
                    printf("LPARENT\n");
                }
#line 1454 "y.tab.c"
    break;

  case 28: /* UnaryExp: $@54 IDENT LPARENT $@55 FuncRParamsOpt RPARENT  */
#line 545 "lexer.y"
                       {
                    print_indent();
                    printf("RPARENT\n");
                }
#line 1463 "y.tab.c"
    break;

  case 29: /* $@56: %empty  */
#line 549 "lexer.y"
                         {
                    print_indent();
                    printf("UNARYOP: %s\n", (yyvsp[0].strval));
                }
#line 1472 "y.tab.c"
    break;

  case 34: /* $@57: %empty  */
#line 562 "lexer.y"
                           {
                    print_indent();
                    printf("COMMA\n");
                }
#line 1481 "y.tab.c"
    break;

  case 36: /* $@58: %empty  */
#line 570 "lexer.y"
                       {
                    print_indent();
                    printf("Lavl (%d)\n", line_number);
                    print_indent();
                    printf("Ident: %s\n", (yyvsp[0].strval));
                }
#line 1492 "y.tab.c"
    break;

  case 38: /* $@59: %empty  */
#line 579 "lexer.y"
                          {
                    print_indent();
                    printf("LBRACKET\n");
                }
#line 1501 "y.tab.c"
    break;

  case 39: /* $@60: %empty  */
#line 584 "lexer.y"
                        {
                    print_indent();
                    printf("RBRACKET\n");
                }
#line 1510 "y.tab.c"
    break;

  case 42: /* $@70: %empty  */
#line 643 "lexer.y"
                  {
                    print_indent();
                    printf("RelExp1 (%d)\n", line_number);
                }
#line 1519 "y.tab.c"
    break;

  case 44: /* $@71: %empty  */
#line 648 "lexer.y"
                  {
                    print_indent();
                    printf("RelExp2 (%d)\n", line_number);
                }
#line 1528 "y.tab.c"
    break;

  case 45: /* $@72: %empty  */
#line 653 "lexer.y"
                      {
                    print_indent();
                    printf("WEIGHT %s\n",(yyvsp[0].strval));
                }
#line 1537 "y.tab.c"
    break;

  case 47: /* $@73: %empty  */
#line 660 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", line_number);
                }
#line 1546 "y.tab.c"
    break;

  case 49: /* $@74: %empty  */
#line 665 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", line_number);
                }
#line 1555 "y.tab.c"
    break;

  case 50: /* $@75: %empty  */
#line 670 "lexer.y"
                    {
                    print_indent();
                    printf("PLUS: %s\n", (yyvsp[0].strval));
                }
#line 1564 "y.tab.c"
    break;

  case 52: /* $@76: %empty  */
#line 675 "lexer.y"
                  {
                    print_indent();
                    printf("AddExp (%d)\n", line_number);
                }
#line 1573 "y.tab.c"
    break;

  case 53: /* $@77: %empty  */
#line 680 "lexer.y"
                     {
                    print_indent();
                    printf("MINUS: %s\n", (yyvsp[0].strval));
                }
#line 1582 "y.tab.c"
    break;

  case 55: /* $@78: %empty  */
#line 687 "lexer.y"
                  {
                    print_indent();
                    printf("MulExp (%d)\n", line_number);
                }
#line 1591 "y.tab.c"
    break;

  case 57: /* $@79: %empty  */
#line 692 "lexer.y"
                  {
                    print_indent();
                    printf("MulExp (%d)\n", line_number);
                }
#line 1600 "y.tab.c"
    break;

  case 58: /* $@80: %empty  */
#line 697 "lexer.y"
                   {
                    print_indent();
                    printf("MUL");
                }
#line 1609 "y.tab.c"
    break;


#line 1613 "y.tab.c"

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

#line 712 "lexer.y"


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

