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
#line 3 "PirateScript.y"

	#include<stdio.h>
	#include <math.h>
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);
	int cnt2=1; 
	void insert2 (storage *p, char *s, int n);
	#define pi  3.1416
	

#line 87 "PirateScript.tab.c"

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

#include "PirateScript.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_VAR = 4,                        /* VAR  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_Else_If = 6,                    /* Else_If  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_Main_Function = 8,              /* Main_Function  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_LeftBracket = 13,               /* LeftBracket  */
  YYSYMBOL_RightBracket = 14,              /* RightBracket  */
  YYSYMBOL_LeftSecondBracket = 15,         /* LeftSecondBracket  */
  YYSYMBOL_RightSecondBracket = 16,        /* RightSecondBracket  */
  YYSYMBOL_COMMA = 17,                     /* COMMA  */
  YYSYMBOL_Statement = 18,                 /* Statement  */
  YYSYMBOL_PLUS = 19,                      /* PLUS  */
  YYSYMBOL_MINUS = 20,                     /* MINUS  */
  YYSYMBOL_MULT = 21,                      /* MULT  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_POW = 23,                       /* POW  */
  YYSYMBOL_FACT = 24,                      /* FACT  */
  YYSYMBOL_ASSIGN = 25,                    /* ASSIGN  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_COL = 27,                       /* COL  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_COLON = 30,                     /* COLON  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_CASE = 32,                      /* CASE  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_inc = 34,                       /* inc  */
  YYSYMBOL_dec = 35,                       /* dec  */
  YYSYMBOL_not = 36,                       /* not  */
  YYSYMBOL_function = 37,                  /* function  */
  YYSYMBOL_LOGIC = 38,                     /* LOGIC  */
  YYSYMBOL_IFX = 39,                       /* IFX  */
  YYSYMBOL_ELIFX = 40,                     /* ELIFX  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_GT = 42,                        /* GT  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_cstatement = 45,                /* cstatement  */
  YYSYMBOL_cdeclaration = 46,              /* cdeclaration  */
  YYSYMBOL_TYPE = 47,                      /* TYPE  */
  YYSYMBOL_ID1 = 48,                       /* ID1  */
  YYSYMBOL_statement = 49,                 /* statement  */
  YYSYMBOL_func = 50,                      /* func  */
  YYSYMBOL_BASE = 51,                      /* BASE  */
  YYSYMBOL_Bas = 52,                       /* Bas  */
  YYSYMBOL_Cs = 53,                        /* Cs  */
  YYSYMBOL_Dflt = 54,                      /* Dflt  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_switch_expression = 56          /* switch_expression  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    46,    48,    50,    53,    57,    59,    61,
      64,    77,    90,    91,    93,    95,   111,   122,   132,   146,
     160,   166,   179,   182,   193,   194,   197,   198,   201,   210,
     220,   222,   224,   226,   228,   230,   240,   242,   252,   254,
     256,   258,   260,   262,   275,   277,   279,   281,   283,   285,
     295,   297,   307,   309,   311,   313,   315,   317
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "VAR", "IF",
  "Else_If", "ELSE", "Main_Function", "INT", "FLOAT", "DOUBLE", "CHAR",
  "LeftBracket", "RightBracket", "LeftSecondBracket", "RightSecondBracket",
  "COMMA", "Statement", "PLUS", "MINUS", "MULT", "DIV", "POW", "FACT",
  "ASSIGN", "FOR", "COL", "WHILE", "BREAK", "COLON", "DEFAULT", "CASE",
  "SWITCH", "inc", "dec", "not", "function", "LOGIC", "IFX", "ELIFX", "LT",
  "GT", "$accept", "program", "cstatement", "cdeclaration", "TYPE", "ID1",
  "statement", "func", "BASE", "Bas", "Cs", "Dflt", "expression",
  "switch_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-21)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    -8,    36,    59,   -21,    62,    34,   -21,   -21,   -21,
      19,   -21,    70,   -21,    53,    68,    72,   -21,   -21,    73,
      79,    80,    72,    72,    72,    76,   -21,    42,   -21,    -5,
      72,    72,   -21,   110,    96,   108,   106,   361,   377,   385,
      34,   -21,   -21,    72,    72,    72,    72,    72,   -21,    72,
      72,   109,   -21,   224,   140,   -21,    85,    75,   -21,   -21,
     106,   106,   106,   106,   151,   -21,   -21,   -21,   101,   -20,
     -20,    -7,    -7,   -21,   449,   449,   -21,   -21,   100,   115,
     117,   164,   409,   417,   425,   107,   106,   106,   106,   106,
     106,   -21,   106,   106,   121,     6,   122,   123,   -21,   -21,
     -21,   -21,   -21,    27,    27,    -3,    -3,   -21,   455,   455,
     129,   125,   237,   130,   131,   105,    -6,    54,    72,   132,
      72,    72,   -21,   120,   150,   -21,   -21,   139,   175,    32,
     199,   212,    72,   141,   -21,   142,   143,   152,   -21,   -21,
     249,    72,    72,    72,    72,   -21,   262,   274,   188,   287,
     -21,   153,   161,   163,   116,    72,   -21,   162,   299,    72,
     174,   312,   159,   184,   165,    72,    72,   324,   337,   185,
     187,   197,   -21,   176,    72,   349,   198,   -21
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     7,     8,     9,
       0,     5,     0,    30,    31,     0,     0,     2,    12,     0,
       0,     0,     0,     0,     0,     0,     4,     0,    11,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    14,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     6,     0,     0,    40,     0,     0,    44,    45,
       0,     0,     0,     0,     0,    41,    42,    43,     0,    32,
      33,    34,    35,    36,    38,    39,    10,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    26,    46,    47,    48,    49,    50,    52,    53,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    13,     0,     0,    27,    25,     0,     0,    16,
       0,     0,     0,     0,    23,     0,     0,     0,    20,    21,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -21,   -21,   -21,   -21,   173,   -21,   133,   -21,   -21,   -21,
     -21,   -21,   -16,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    10,    11,    12,    29,    26,    41,   115,   116,
     125,   126,    27,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    45,    46,    47,    48,     3,    37,    38,    39,    13,
      32,   111,    51,    52,    53,    54,    47,    48,     1,    16,
      90,    91,    13,    14,    15,   123,   124,    69,    70,    71,
      72,    73,    16,    74,    75,    17,     4,    18,   136,   137,
      22,    23,    24,     7,     8,    19,     9,    20,    88,    89,
      90,    91,    21,    22,    23,    24,    25,    13,    14,    15,
      42,    43,    44,    45,    46,    47,    48,    16,    81,    82,
      83,    84,    18,     5,    28,    13,    32,     6,    30,   112,
      19,    31,    20,    49,    50,    16,    34,    21,    22,    23,
      24,    25,    35,    36,   103,   104,   105,   106,   107,    56,
     108,   109,   128,    40,   130,   131,    22,    23,    24,    58,
      59,    57,    79,    76,    94,    95,   140,    80,    96,    60,
      97,   122,   102,   157,    55,   146,   147,   148,   149,    43,
      44,    45,    46,    47,    48,   110,   113,   114,   118,   158,
      61,    62,    63,   161,   117,   120,   121,   132,   129,   167,
     168,    49,    50,   133,    78,   134,   143,   142,   175,    43,
      44,    45,    46,    47,    48,    85,   164,   144,   141,   154,
      86,    87,    88,    89,    90,    91,   155,   159,    98,   156,
     166,    49,    50,    86,    87,    88,    89,    90,    91,   135,
     162,   174,    92,    93,    43,    44,    45,    46,    47,    48,
     165,   171,   152,   172,   173,    92,    93,    43,    44,    45,
      46,    47,    48,    68,   177,   138,    49,    50,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,   139,    49,
      50,    43,    44,    45,    46,    47,    48,     0,     0,     0,
      49,    50,    77,    43,    44,    45,    46,    47,    48,     0,
     127,     0,     0,    49,    50,   119,    43,    44,    45,    46,
      47,    48,     0,     0,     0,    49,    50,   145,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,    49,    50,
     150,    43,    44,    45,    46,    47,    48,     0,     0,     0,
      49,    50,   151,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,    49,    50,   153,    43,    44,    45,    46,
      47,    48,     0,     0,     0,    49,    50,   160,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,    49,    50,
     163,    43,    44,    45,    46,    47,    48,     0,     0,     0,
      49,    50,   169,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,    49,    50,   170,    43,    44,    45,    46,
      47,    48,     0,     0,     0,    49,    50,   176,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,    49,    50,
      43,    44,    45,    46,    47,    48,     0,     0,     0,     0,
      49,    50,     0,     0,     0,    65,    43,    44,    45,    46,
      47,    48,    49,    50,    43,    44,    45,    46,    47,    48,
       0,     0,    66,     0,     0,     0,     0,     0,    49,    50,
       0,    67,     0,     0,     0,     0,    49,    50,    86,    87,
      88,    89,    90,    91,     0,     0,    86,    87,    88,    89,
      90,    91,     0,    99,    86,    87,    88,    89,    90,    91,
      92,    93,   100,     0,     0,     0,     0,     0,    92,    93,
       0,   101,     0,     0,     0,     0,    92,    93,    43,    44,
      45,    46,    47,    48,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      16,    21,    22,    23,    24,    13,    22,    23,    24,     3,
       4,     5,    17,    18,    30,    31,    23,    24,     8,    13,
      23,    24,     3,     4,     5,    31,    32,    43,    44,    45,
      46,    47,    13,    49,    50,    16,     0,    18,     6,     7,
      34,    35,    36,     9,    10,    26,    12,    28,    21,    22,
      23,    24,    33,    34,    35,    36,    37,     3,     4,     5,
      18,    19,    20,    21,    22,    23,    24,    13,    60,    61,
      62,    63,    18,    14,     4,     3,     4,    15,    25,    95,
      26,    13,    28,    41,    42,    13,    13,    33,    34,    35,
      36,    37,    13,    13,    86,    87,    88,    89,    90,     3,
      92,    93,   118,    27,   120,   121,    34,    35,    36,     3,
       4,     3,    27,     4,    13,    15,   132,    42,     3,    13,
       3,    16,    15,     7,    14,   141,   142,   143,   144,    19,
      20,    21,    22,    23,    24,    14,    14,    14,    13,   155,
      34,    35,    36,   159,    15,    15,    15,    27,    16,   165,
     166,    41,    42,     3,    14,    16,    13,    15,   174,    19,
      20,    21,    22,    23,    24,    14,     7,    15,    27,    16,
      19,    20,    21,    22,    23,    24,    15,    15,    14,    16,
      15,    41,    42,    19,    20,    21,    22,    23,    24,    14,
      16,    15,    41,    42,    19,    20,    21,    22,    23,    24,
      16,    16,    14,    16,     7,    41,    42,    19,    20,    21,
      22,    23,    24,    40,    16,    16,    41,    42,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    16,    41,
      42,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      41,    42,    18,    19,    20,    21,    22,    23,    24,    -1,
     117,    -1,    -1,    41,    42,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    41,    42,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    41,    42,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      41,    42,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    41,    42,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    41,    42,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    41,    42,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      41,    42,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    41,    42,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    41,    42,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    41,    42,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    34,    19,    20,    21,    22,
      23,    24,    41,    42,    19,    20,    21,    22,    23,    24,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    36,    -1,    -1,    -1,    -1,    41,    42,    19,    20,
      21,    22,    23,    24,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    34,    19,    20,    21,    22,    23,    24,
      41,    42,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    36,    -1,    -1,    -1,    -1,    41,    42,    19,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    44,    13,     0,    14,    15,     9,    10,    12,
      45,    46,    47,     3,     4,     5,    13,    16,    18,    26,
      28,    33,    34,    35,    36,    37,    49,    55,     4,    48,
      25,    13,     4,    55,    13,    13,    13,    55,    55,    55,
      27,    50,    18,    19,    20,    21,    22,    23,    24,    41,
      42,    17,    18,    55,    55,    14,     3,     3,     3,     4,
      13,    34,    35,    36,    56,    34,    35,    36,    47,    55,
      55,    55,    55,    55,    55,    55,     4,    18,    14,    27,
      42,    56,    56,    56,    56,    14,    19,    20,    21,    22,
      23,    24,    41,    42,    13,    15,     3,     3,    14,    34,
      35,    36,    15,    56,    56,    56,    56,    56,    56,    56,
      14,     5,    55,    14,    14,    51,    52,    15,    13,    18,
      15,    15,    16,    31,    32,    53,    54,    49,    55,    16,
      55,    55,    27,     3,    16,    14,     6,     7,    16,    16,
      55,    27,    15,    13,    15,    18,    55,    55,    55,    55,
      18,    18,    14,    18,    16,    15,    16,     7,    55,    15,
      18,    55,    16,    18,     7,    16,    15,    55,    55,    18,
      18,    16,    16,     7,    15,    55,    18,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    51,    51,    52,    52,    53,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     3,     1,     1,     1,
       3,     1,     1,     7,     2,     4,     8,    13,    26,    21,
       9,     9,     2,     7,     1,     2,     0,     2,     5,     4,
       1,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3
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
  case 2: /* program: Main_Function LeftBracket RightBracket LeftSecondBracket cstatement RightSecondBracket  */
#line 43 "PirateScript.y"
                                                                                                { printf("\n-------------Successful compilation-----------------\n"); }
#line 1289 "PirateScript.tab.c"
    break;

  case 6: /* cdeclaration: TYPE ID1 Statement  */
#line 53 "PirateScript.y"
                                        { printf("\nvalid declaration of variable\n"); }
#line 1295 "PirateScript.tab.c"
    break;

  case 10: /* ID1: ID1 COMMA VAR  */
#line 64 "PirateScript.y"
                        {
						if(number_for_key((yyvsp[0].string)))
						{
							printf("%s is already declared\n", (yyvsp[0].string) );
						}
						else
						{
							insert(&store[cnt],(yyvsp[0].string), cnt);
							cnt++;
							
						}
			}
#line 1312 "PirateScript.tab.c"
    break;

  case 11: /* ID1: VAR  */
#line 77 "PirateScript.y"
                {
				if(number_for_key((yyvsp[0].string)))
				{
					printf("%s is already declared\n", (yyvsp[0].string) );
				}
				else
				{
					insert(&store[cnt],(yyvsp[0].string), cnt);
							cnt++;
				}
			}
#line 1328 "PirateScript.tab.c"
    break;

  case 13: /* statement: SWITCH LeftBracket switch_expression RightBracket LeftSecondBracket BASE RightSecondBracket  */
#line 91 "PirateScript.y"
                                                                                                         {printf("Code_Book(SWITCH) and Pirate_Code(case).\n");}
#line 1334 "PirateScript.tab.c"
    break;

  case 14: /* statement: expression Statement  */
#line 93 "PirateScript.y"
                                                { printf("\nvalue of expression: %d\n", ((yyvsp[-1].number))); }
#line 1340 "PirateScript.tab.c"
    break;

  case 15: /* statement: VAR ASSIGN expression Statement  */
#line 95 "PirateScript.y"
                                                        {
							if(number_for_key((yyvsp[-3].string))){
								int i = number_for_key2((yyvsp[-3].string));
								if (!i){
									insert(&sym[cntt], (yyvsp[-3].string), (yyvsp[-1].number));
									cntt++;
								}
								sym[i].n = (yyvsp[-1].number);
								printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[-3].string),(yyvsp[-1].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[-3].string));
							}
							
						}
#line 1360 "PirateScript.tab.c"
    break;

  case 16: /* statement: IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket  */
#line 111 "PirateScript.y"
                                                                                                                     {
								if((yyvsp[-5].number))
								{
									printf("\nvalue of expression in Parley (if): %d\n",((yyvsp[-2].number)));
								}
								else
								{
									printf("\ncondition value zero in Parley(if) block\n");
								}
							}
#line 1375 "PirateScript.tab.c"
    break;

  case 17: /* statement: IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket  */
#line 122 "PirateScript.y"
                                                                                                                                                                          {
								 	if((yyvsp[-10].number))
									{
										printf("\nvalue of expression in Parley (if): %d\n",(yyvsp[-7].number));
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",(yyvsp[-2].number));
									}
								   }
#line 1390 "PirateScript.tab.c"
    break;

  case 18: /* statement: IF LeftBracket expression RightBracket LeftSecondBracket IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket  */
#line 132 "PirateScript.y"
                                                                                                                                                                                                                                                                                                                                                    {
								 	if((yyvsp[-23].number))
									{
										if((yyvsp[-18].number))
											printf("\nvalue of expression middle Parley (if): %d\n",(yyvsp[-15].number));
										else
											printf("\nvalue of expression middle Aye (else): %d\n",(yyvsp[-10].number));
										printf("\nvalue of expression in first Parley (if): %d\n",(yyvsp[-7].number));
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",(yyvsp[-2].number));
									}
								   }
#line 1409 "PirateScript.tab.c"
    break;

  case 19: /* statement: IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket Else_If LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket  */
#line 146 "PirateScript.y"
                                                                                                                                                                                                                                                                                {
								 	if((yyvsp[-18].number))
									{
										printf("\nvalue of expression in Parley (if): %d\n",(yyvsp[-15].number));
									}
									else if((yyvsp[-10].number))
									{
										printf("\nvalue of expression in ElseWise (Else_If): %d\n",(yyvsp[-7].number));
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",(yyvsp[-2].number));
									}
								   }
#line 1428 "PirateScript.tab.c"
    break;

  case 20: /* statement: FOR LeftBracket NUM COL NUM RightBracket LeftSecondBracket expression RightSecondBracket  */
#line 160 "PirateScript.y"
                                                                                                       {
	   int i=0;
	   for(i=(yyvsp[-6].number);i<(yyvsp[-4].number);i++){
	   printf("Shanty(for) loop statement\n");
	   }
	}
#line 1439 "PirateScript.tab.c"
    break;

  case 21: /* statement: WHILE LeftBracket NUM GT NUM RightBracket LeftSecondBracket expression RightSecondBracket  */
#line 166 "PirateScript.y"
                                                                                                      {
										int i;
										printf("Whale(While) Loop: ");
										for(i=(yyvsp[-6].number);i<=(yyvsp[-4].number);i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[-1].number));

	}
#line 1455 "PirateScript.tab.c"
    break;

  case 23: /* func: COL TYPE LeftBracket RightBracket LeftSecondBracket statement RightSecondBracket  */
#line 183 "PirateScript.y"
                                                        {
								printf("crew(function) is declared\n");
							}
#line 1463 "PirateScript.tab.c"
    break;

  case 28: /* Cs: CASE NUM COL expression Statement  */
#line 201 "PirateScript.y"
                                                                    {
						
						if(val==(yyvsp[-3].number)){
							  track=1;
							  printf("\nPirate_Code(Case) No : %d  and Result :  %d\n",(yyvsp[-3].number),(yyvsp[-1].number));
						}
					}
#line 1475 "PirateScript.tab.c"
    break;

  case 29: /* Dflt: DEFAULT COL expression Statement  */
#line 210 "PirateScript.y"
                                                                      {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",(yyvsp[-1].number));
						}
						track=0;
					}
#line 1486 "PirateScript.tab.c"
    break;

  case 30: /* expression: NUM  */
#line 220 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[0].number); 	}
#line 1492 "PirateScript.tab.c"
    break;

  case 31: /* expression: VAR  */
#line 222 "PirateScript.y"
                                        { (yyval.number) = number_for_key2((yyvsp[0].string)); printf("Variable value: %d",(yyval.number));}
#line 1498 "PirateScript.tab.c"
    break;

  case 32: /* expression: expression PLUS expression  */
#line 224 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1504 "PirateScript.tab.c"
    break;

  case 33: /* expression: expression MINUS expression  */
#line 226 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number); }
#line 1510 "PirateScript.tab.c"
    break;

  case 34: /* expression: expression MULT expression  */
#line 228 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number); }
#line 1516 "PirateScript.tab.c"
    break;

  case 35: /* expression: expression DIV expression  */
#line 230 "PirateScript.y"
                                        { 	if((yyvsp[0].number)) 
				  		{
				     			(yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\nWarning: division by zero\t");
				  		} 	
				    	}
#line 1531 "PirateScript.tab.c"
    break;

  case 36: /* expression: expression POW expression  */
#line 240 "PirateScript.y"
                                    { (yyval.number) = pow((yyvsp[-2].number),(yyvsp[0].number)); }
#line 1537 "PirateScript.tab.c"
    break;

  case 37: /* expression: expression FACT  */
#line 242 "PirateScript.y"
                          {
						int mult=1 ,i;
						for(i=(yyvsp[-1].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;
						
					 }
#line 1551 "PirateScript.tab.c"
    break;

  case 38: /* expression: expression LT expression  */
#line 252 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[-2].number) < (yyvsp[0].number); }
#line 1557 "PirateScript.tab.c"
    break;

  case 39: /* expression: expression GT expression  */
#line 254 "PirateScript.y"
                                        { (yyval.number) = (yyvsp[-2].number) > (yyvsp[0].number); }
#line 1563 "PirateScript.tab.c"
    break;

  case 40: /* expression: LeftBracket expression RightBracket  */
#line 256 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-1].number);	}
#line 1569 "PirateScript.tab.c"
    break;

  case 41: /* expression: inc expression inc  */
#line 258 "PirateScript.y"
                                     { (yyval.number)=(yyvsp[-1].number)+1; printf("⚓️++ (increment operator): %d\n",(yyval.number));}
#line 1575 "PirateScript.tab.c"
    break;

  case 42: /* expression: dec expression dec  */
#line 260 "PirateScript.y"
                                     { (yyval.number)=(yyvsp[-1].number)-1; printf("⚓️-- (decrement operator): %d\n",(yyval.number));}
#line 1581 "PirateScript.tab.c"
    break;

  case 43: /* expression: not expression not  */
#line 262 "PirateScript.y"
                             {
						if((yyvsp[-1].number) != 0)
						{
							(yyval.number) = 0; printf("!⚓️ (not operator): %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf("aff: %d\n",(yyval.number));
						}
					}
#line 1595 "PirateScript.tab.c"
    break;

  case 44: /* switch_expression: NUM  */
#line 275 "PirateScript.y"
                                                { (yyval.number) = (yyvsp[0].number); val = (yyval.number);	}
#line 1601 "PirateScript.tab.c"
    break;

  case 45: /* switch_expression: VAR  */
#line 277 "PirateScript.y"
                                        { (yyval.number) = number_for_key2((yyvsp[0].string)); val = (yyval.number);}
#line 1607 "PirateScript.tab.c"
    break;

  case 46: /* switch_expression: switch_expression PLUS switch_expression  */
#line 279 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); val = (yyval.number); }
#line 1613 "PirateScript.tab.c"
    break;

  case 47: /* switch_expression: switch_expression MINUS switch_expression  */
#line 281 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number); val = (yyval.number); }
#line 1619 "PirateScript.tab.c"
    break;

  case 48: /* switch_expression: switch_expression MULT switch_expression  */
#line 283 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number);  val = (yyval.number);}
#line 1625 "PirateScript.tab.c"
    break;

  case 49: /* switch_expression: switch_expression DIV switch_expression  */
#line 285 "PirateScript.y"
                                                        { 	if((yyvsp[0].number)) 
				  		{
				     			(yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number); val = (yyval.number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							 val = (yyval.number);
				  		} 	
				    	}
#line 1640 "PirateScript.tab.c"
    break;

  case 50: /* switch_expression: switch_expression POW switch_expression  */
#line 295 "PirateScript.y"
                                                  { (yyval.number) = pow((yyvsp[-2].number),(yyvsp[0].number));  val = (yyval.number);}
#line 1646 "PirateScript.tab.c"
    break;

  case 51: /* switch_expression: switch_expression FACT  */
#line 297 "PirateScript.y"
                                 {
						int mult=1 ,i;
						for(i=(yyvsp[-1].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult; val = (yyval.number);
						
					 }
#line 1660 "PirateScript.tab.c"
    break;

  case 52: /* switch_expression: switch_expression LT switch_expression  */
#line 307 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-2].number) < (yyvsp[0].number); val = (yyval.number); }
#line 1666 "PirateScript.tab.c"
    break;

  case 53: /* switch_expression: switch_expression GT switch_expression  */
#line 309 "PirateScript.y"
                                                        { (yyval.number) = (yyvsp[-2].number) > (yyvsp[0].number);  val = (yyval.number);}
#line 1672 "PirateScript.tab.c"
    break;

  case 54: /* switch_expression: LeftBracket switch_expression RightBracket  */
#line 311 "PirateScript.y"
                                                                { (yyval.number) = (yyvsp[-1].number);	 val = (yyval.number);}
#line 1678 "PirateScript.tab.c"
    break;

  case 55: /* switch_expression: inc switch_expression inc  */
#line 313 "PirateScript.y"
                                            { (yyval.number)=(yyvsp[-1].number)+1; printf("⚓️++ (increment operator): %d\n",(yyval.number)); val = (yyval.number);}
#line 1684 "PirateScript.tab.c"
    break;

  case 56: /* switch_expression: dec switch_expression dec  */
#line 315 "PirateScript.y"
                                            { (yyval.number)=(yyvsp[-1].number)-1; printf("⚓️-- (decrement operator): %d\n",(yyval.number)); val = (yyval.number);}
#line 1690 "PirateScript.tab.c"
    break;

  case 57: /* switch_expression: not switch_expression not  */
#line 317 "PirateScript.y"
                                    {
						if((yyvsp[-1].number) != 0)
						{
							(yyval.number) = 0; val = (yyval.number);
						}
						else{
							(yyval.number) = 1 ; val = (yyval.number);
						}
					}
#line 1704 "PirateScript.tab.c"
    break;


#line 1708 "PirateScript.tab.c"

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

#line 327 "PirateScript.y"



void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

void insert2 (storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
  
}

int number_for_key2(char *key)
{
    int i = 1;
    char *name = sym[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = sym[++i].str;
    }
    return 0;
}



int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

