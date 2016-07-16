/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         main_parse
#define yylex           main_lex
#define yyerror         main_error
#define yydebug         main_debug
#define yynerrs         main_nerrs


/* Copy the first part of user declarations.  */

#line 73 "lib/cfg-grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_MAIN_Y_TAB_H_INCLUDED
# define YY_MAIN_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int main_debug;
#endif
/* "%code requires" blocks.  */
#line 25 "cfg-grammar.y" /* yacc.c:355  */


/* this block is inserted into cfg-grammar.h, so it is included
   practically all of the syslog-ng code. Please add headers here
   with care. If you need additional headers, please look for a
   massive list of includes further below. */

/* YYSTYPE and YYLTYPE is defined by the lexer */
#include "cfg-lexer.h"
#include "afinter.h"
#include "type-hinting.h"
#include "filter/filter-expr-parser.h"
#include "filter/filter-pipe.h"
#include "parser/parser-expr-parser.h"
#include "rewrite/rewrite-expr-parser.h"
#include "logmatcher.h"
#include "logthrdestdrv.h"

/* uses struct declarations instead of the typedefs to avoid having to
 * include logreader/logwriter/driver.h, which defines the typedefs.  This
 * is to avoid including unnecessary dependencies into grammars that are not
 * themselves reader/writer based */

extern struct _LogSourceOptions *last_source_options;
extern struct _LogReaderOptions *last_reader_options;
extern struct _LogProtoServerOptions *last_proto_server_options;
extern struct _LogWriterOptions *last_writer_options;
extern struct _FilePermOptions *last_file_perm_options;
extern struct _MsgFormatOptions *last_msg_format_options;
extern struct _LogDriver *last_driver;
extern struct _LogParser *last_parser;
extern struct _LogTemplateOptions *last_template_options;
extern struct _LogTemplate *last_template;
extern struct _ValuePairs *last_value_pairs;
extern struct _ValuePairsTransformSet *last_vp_transset;
extern struct _LogMatcherOptions *last_matcher_options;
extern struct _HostResolveOptions *last_host_resolve_options;
extern struct _StatsOptions *last_stats_options;


#line 144 "lib/cfg-grammar.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LL_CONTEXT_ROOT = 1,
    LL_CONTEXT_DESTINATION = 2,
    LL_CONTEXT_SOURCE = 3,
    LL_CONTEXT_PARSER = 4,
    LL_CONTEXT_REWRITE = 5,
    LL_CONTEXT_FILTER = 6,
    LL_CONTEXT_LOG = 7,
    LL_CONTEXT_BLOCK_DEF = 8,
    LL_CONTEXT_BLOCK_REF = 9,
    LL_CONTEXT_BLOCK_CONTENT = 10,
    LL_CONTEXT_BLOCK_ARG = 11,
    LL_CONTEXT_PRAGMA = 12,
    LL_CONTEXT_FORMAT = 13,
    LL_CONTEXT_TEMPLATE_FUNC = 14,
    LL_CONTEXT_INNER_DEST = 15,
    LL_CONTEXT_INNER_SRC = 16,
    LL_CONTEXT_CLIENT_PROTO = 17,
    LL_CONTEXT_SERVER_PROTO = 18,
    KW_SOURCE = 10000,
    KW_FILTER = 10001,
    KW_PARSER = 10002,
    KW_DESTINATION = 10003,
    KW_LOG = 10004,
    KW_OPTIONS = 10005,
    KW_INCLUDE = 10006,
    KW_BLOCK = 10007,
    KW_JUNCTION = 10008,
    KW_CHANNEL = 10009,
    KW_INTERNAL = 10010,
    KW_FILE = 10011,
    KW_SQL = 10030,
    KW_TYPE = 10031,
    KW_COLUMNS = 10032,
    KW_INDEXES = 10033,
    KW_VALUES = 10034,
    KW_PASSWORD = 10035,
    KW_DATABASE = 10036,
    KW_USERNAME = 10037,
    KW_TABLE = 10038,
    KW_ENCODING = 10039,
    KW_SESSION_STATEMENTS = 10040,
    KW_DELIMITERS = 10050,
    KW_QUOTES = 10051,
    KW_QUOTE_PAIRS = 10052,
    KW_NULL = 10053,
    KW_CHARS = 10054,
    KW_STRINGS = 10055,
    KW_SYSLOG = 10060,
    KW_MARK_FREQ = 10071,
    KW_STATS_FREQ = 10072,
    KW_STATS_LEVEL = 10073,
    KW_STATS_LIFETIME = 10074,
    KW_FLUSH_LINES = 10075,
    KW_SUPPRESS = 10076,
    KW_FLUSH_TIMEOUT = 10077,
    KW_LOG_MSG_SIZE = 10078,
    KW_FILE_TEMPLATE = 10079,
    KW_PROTO_TEMPLATE = 10080,
    KW_MARK_MODE = 10081,
    KW_CHAIN_HOSTNAMES = 10090,
    KW_NORMALIZE_HOSTNAMES = 10091,
    KW_KEEP_HOSTNAME = 10092,
    KW_CHECK_HOSTNAME = 10093,
    KW_BAD_HOSTNAME = 10094,
    KW_KEEP_TIMESTAMP = 10100,
    KW_USE_DNS = 10110,
    KW_USE_FQDN = 10111,
    KW_CUSTOM_DOMAIN = 10112,
    KW_DNS_CACHE = 10120,
    KW_DNS_CACHE_SIZE = 10121,
    KW_DNS_CACHE_EXPIRE = 10130,
    KW_DNS_CACHE_EXPIRE_FAILED = 10131,
    KW_DNS_CACHE_HOSTS = 10132,
    KW_PERSIST_ONLY = 10140,
    KW_USE_RCPTID = 10141,
    KW_USE_UNIQID = 10142,
    KW_TZ_CONVERT = 10150,
    KW_TS_FORMAT = 10151,
    KW_FRAC_DIGITS = 10152,
    KW_LOG_FIFO_SIZE = 10160,
    KW_LOG_FETCH_LIMIT = 10162,
    KW_LOG_IW_SIZE = 10163,
    KW_LOG_PREFIX = 10164,
    KW_PROGRAM_OVERRIDE = 10165,
    KW_HOST_OVERRIDE = 10166,
    KW_THROTTLE = 10170,
    KW_THREADED = 10171,
    KW_PASS_UNIX_CREDENTIALS = 10231,
    KW_FLAGS = 10190,
    KW_PAD_SIZE = 10200,
    KW_TIME_ZONE = 10201,
    KW_RECV_TIME_ZONE = 10202,
    KW_SEND_TIME_ZONE = 10203,
    KW_LOCAL_TIME_ZONE = 10204,
    KW_FORMAT = 10205,
    KW_TIME_REOPEN = 10210,
    KW_TIME_REAP = 10211,
    KW_TIME_SLEEP = 10212,
    KW_TMPL_ESCAPE = 10220,
    KW_OPTIONAL = 10230,
    KW_CREATE_DIRS = 10240,
    KW_OWNER = 10250,
    KW_GROUP = 10251,
    KW_PERM = 10252,
    KW_DIR_OWNER = 10260,
    KW_DIR_GROUP = 10261,
    KW_DIR_PERM = 10262,
    KW_TEMPLATE = 10270,
    KW_TEMPLATE_ESCAPE = 10271,
    KW_TEMPLATE_FUNCTION = 10272,
    KW_DEFAULT_FACILITY = 10300,
    KW_DEFAULT_LEVEL = 10301,
    KW_PORT = 10323,
    KW_USE_TIME_RECVD = 10340,
    KW_FACILITY = 10350,
    KW_LEVEL = 10351,
    KW_HOST = 10352,
    KW_MATCH = 10353,
    KW_MESSAGE = 10354,
    KW_NETMASK = 10355,
    KW_TAGS = 10356,
    KW_NETMASK6 = 10357,
    KW_VALUE = 10361,
    KW_REWRITE = 10370,
    KW_SET = 10371,
    KW_SUBST = 10372,
    KW_YES = 10380,
    KW_NO = 10381,
    KW_IFDEF = 10410,
    KW_ENDIF = 10411,
    LL_DOTDOT = 10420,
    LL_IDENTIFIER = 10421,
    LL_NUMBER = 10422,
    LL_FLOAT = 10423,
    LL_STRING = 10424,
    LL_TOKEN = 10425,
    LL_BLOCK = 10426,
    LL_PRAGMA = 10427,
    LL_EOL = 10428,
    LL_ERROR = 10429,
    KW_VALUE_PAIRS = 10500,
    KW_SELECT = 10501,
    KW_EXCLUDE = 10502,
    KW_PAIR = 10503,
    KW_KEY = 10504,
    KW_SCOPE = 10505,
    KW_SHIFT = 10506,
    KW_REKEY = 10507,
    KW_ADD_PREFIX = 10508,
    KW_REPLACE_PREFIX = 10509,
    KW_ON_ERROR = 10510,
    KW_RETRIES = 10511
  };
#endif
/* Tokens.  */
#define LL_CONTEXT_ROOT 1
#define LL_CONTEXT_DESTINATION 2
#define LL_CONTEXT_SOURCE 3
#define LL_CONTEXT_PARSER 4
#define LL_CONTEXT_REWRITE 5
#define LL_CONTEXT_FILTER 6
#define LL_CONTEXT_LOG 7
#define LL_CONTEXT_BLOCK_DEF 8
#define LL_CONTEXT_BLOCK_REF 9
#define LL_CONTEXT_BLOCK_CONTENT 10
#define LL_CONTEXT_BLOCK_ARG 11
#define LL_CONTEXT_PRAGMA 12
#define LL_CONTEXT_FORMAT 13
#define LL_CONTEXT_TEMPLATE_FUNC 14
#define LL_CONTEXT_INNER_DEST 15
#define LL_CONTEXT_INNER_SRC 16
#define LL_CONTEXT_CLIENT_PROTO 17
#define LL_CONTEXT_SERVER_PROTO 18
#define KW_SOURCE 10000
#define KW_FILTER 10001
#define KW_PARSER 10002
#define KW_DESTINATION 10003
#define KW_LOG 10004
#define KW_OPTIONS 10005
#define KW_INCLUDE 10006
#define KW_BLOCK 10007
#define KW_JUNCTION 10008
#define KW_CHANNEL 10009
#define KW_INTERNAL 10010
#define KW_FILE 10011
#define KW_SQL 10030
#define KW_TYPE 10031
#define KW_COLUMNS 10032
#define KW_INDEXES 10033
#define KW_VALUES 10034
#define KW_PASSWORD 10035
#define KW_DATABASE 10036
#define KW_USERNAME 10037
#define KW_TABLE 10038
#define KW_ENCODING 10039
#define KW_SESSION_STATEMENTS 10040
#define KW_DELIMITERS 10050
#define KW_QUOTES 10051
#define KW_QUOTE_PAIRS 10052
#define KW_NULL 10053
#define KW_CHARS 10054
#define KW_STRINGS 10055
#define KW_SYSLOG 10060
#define KW_MARK_FREQ 10071
#define KW_STATS_FREQ 10072
#define KW_STATS_LEVEL 10073
#define KW_STATS_LIFETIME 10074
#define KW_FLUSH_LINES 10075
#define KW_SUPPRESS 10076
#define KW_FLUSH_TIMEOUT 10077
#define KW_LOG_MSG_SIZE 10078
#define KW_FILE_TEMPLATE 10079
#define KW_PROTO_TEMPLATE 10080
#define KW_MARK_MODE 10081
#define KW_CHAIN_HOSTNAMES 10090
#define KW_NORMALIZE_HOSTNAMES 10091
#define KW_KEEP_HOSTNAME 10092
#define KW_CHECK_HOSTNAME 10093
#define KW_BAD_HOSTNAME 10094
#define KW_KEEP_TIMESTAMP 10100
#define KW_USE_DNS 10110
#define KW_USE_FQDN 10111
#define KW_CUSTOM_DOMAIN 10112
#define KW_DNS_CACHE 10120
#define KW_DNS_CACHE_SIZE 10121
#define KW_DNS_CACHE_EXPIRE 10130
#define KW_DNS_CACHE_EXPIRE_FAILED 10131
#define KW_DNS_CACHE_HOSTS 10132
#define KW_PERSIST_ONLY 10140
#define KW_USE_RCPTID 10141
#define KW_USE_UNIQID 10142
#define KW_TZ_CONVERT 10150
#define KW_TS_FORMAT 10151
#define KW_FRAC_DIGITS 10152
#define KW_LOG_FIFO_SIZE 10160
#define KW_LOG_FETCH_LIMIT 10162
#define KW_LOG_IW_SIZE 10163
#define KW_LOG_PREFIX 10164
#define KW_PROGRAM_OVERRIDE 10165
#define KW_HOST_OVERRIDE 10166
#define KW_THROTTLE 10170
#define KW_THREADED 10171
#define KW_PASS_UNIX_CREDENTIALS 10231
#define KW_FLAGS 10190
#define KW_PAD_SIZE 10200
#define KW_TIME_ZONE 10201
#define KW_RECV_TIME_ZONE 10202
#define KW_SEND_TIME_ZONE 10203
#define KW_LOCAL_TIME_ZONE 10204
#define KW_FORMAT 10205
#define KW_TIME_REOPEN 10210
#define KW_TIME_REAP 10211
#define KW_TIME_SLEEP 10212
#define KW_TMPL_ESCAPE 10220
#define KW_OPTIONAL 10230
#define KW_CREATE_DIRS 10240
#define KW_OWNER 10250
#define KW_GROUP 10251
#define KW_PERM 10252
#define KW_DIR_OWNER 10260
#define KW_DIR_GROUP 10261
#define KW_DIR_PERM 10262
#define KW_TEMPLATE 10270
#define KW_TEMPLATE_ESCAPE 10271
#define KW_TEMPLATE_FUNCTION 10272
#define KW_DEFAULT_FACILITY 10300
#define KW_DEFAULT_LEVEL 10301
#define KW_PORT 10323
#define KW_USE_TIME_RECVD 10340
#define KW_FACILITY 10350
#define KW_LEVEL 10351
#define KW_HOST 10352
#define KW_MATCH 10353
#define KW_MESSAGE 10354
#define KW_NETMASK 10355
#define KW_TAGS 10356
#define KW_NETMASK6 10357
#define KW_VALUE 10361
#define KW_REWRITE 10370
#define KW_SET 10371
#define KW_SUBST 10372
#define KW_YES 10380
#define KW_NO 10381
#define KW_IFDEF 10410
#define KW_ENDIF 10411
#define LL_DOTDOT 10420
#define LL_IDENTIFIER 10421
#define LL_NUMBER 10422
#define LL_FLOAT 10423
#define LL_STRING 10424
#define LL_TOKEN 10425
#define LL_BLOCK 10426
#define LL_PRAGMA 10427
#define LL_EOL 10428
#define LL_ERROR 10429
#define KW_VALUE_PAIRS 10500
#define KW_SELECT 10501
#define KW_EXCLUDE 10502
#define KW_PAIR 10503
#define KW_KEY 10504
#define KW_SCOPE 10505
#define KW_SHIFT 10506
#define KW_REKEY 10507
#define KW_ADD_PREFIX 10508
#define KW_REPLACE_PREFIX 10509
#define KW_ON_ERROR 10510
#define KW_RETRIES 10511

/* Value type.  */

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



int main_parse (CfgLexer *lexer, gpointer *dummy, gpointer arg);

#endif /* !YY_MAIN_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 483 "lib/cfg-grammar.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 80 "cfg-grammar.y" /* yacc.c:359  */


# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
  do {                                                                  \
    if (N)                                                              \
      {                                                                 \
        (Current).level = YYRHSLOC(Rhs, 1).level;                       \
        (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;          \
        (Current).first_column = YYRHSLOC (Rhs, 1).first_column;        \
        (Current).last_line    = YYRHSLOC (Rhs, N).last_line;           \
        (Current).last_column  = YYRHSLOC (Rhs, N).last_column;         \
      }                                                                 \
    else                                                                \
      {                                                                 \
        (Current).level = YYRHSLOC(Rhs, 0).level;                       \
        (Current).first_line   = (Current).last_line   =                \
          YYRHSLOC (Rhs, 0).last_line;                                  \
        (Current).first_column = (Current).last_column =                \
          YYRHSLOC (Rhs, 0).last_column;                                \
      }                                                                 \
  } while (0)

#define CHECK_ERROR_WITHOUT_MESSAGE(val, token) do {                    \
    if (!(val))                                                         \
      {                                                                 \
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define CHECK_ERROR(val, token, errorfmt, ...) do {                     \
    if (!(val))                                                         \
      {                                                                 \
        if (errorfmt)                                                   \
          {                                                             \
            gchar __buf[256];                                           \
            g_snprintf(__buf, sizeof(__buf), errorfmt, ## __VA_ARGS__); \
            yyerror(& (token), lexer, NULL, NULL, __buf);               \
          }                                                             \
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define CHECK_ERROR_GERROR(val, token, error, errorfmt, ...) do {       \
    if (!(val))                                                         \
      {                                                                 \
        if (errorfmt)                                                   \
          {                                                             \
            gchar __buf[256];                                           \
            g_snprintf(__buf, sizeof(__buf), errorfmt ", error=%s", ## __VA_ARGS__, error->message); \
            yyerror(& (token), lexer, NULL, NULL, __buf);               \
          }                                                             \
        g_clear_error(&error);						\
        YYERROR;                                                        \
      }                                                                 \
  } while (0)

#define YYMAXDEPTH 20000


#line 353 "cfg-grammar.y" /* yacc.c:359  */


#include "cfg-parser.h"
#include "cfg.h"
#include "cfg-tree.h"
#include "template/templates.h"
#include "template/user-function.h"
#include "logreader.h"
#include "parser/parser-expr.h"
#include "rewrite/rewrite-expr.h"
#include "rewrite/rewrite-expr-parser.h"
#include "filter/filter-expr-parser.h"
#include "value-pairs.h"
#include "vptransform.h"
#include "file-perms.h"
#include "block-ref-parser.h"
#include "plugin.h"
#include "logwriter.h"
#include "messages.h"

#include "syslog-names.h"

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cfg-grammar.h"

LogDriver *last_driver;
LogParser *last_parser;
LogSourceOptions *last_source_options;
LogProtoServerOptions *last_proto_server_options;
LogReaderOptions *last_reader_options;
LogWriterOptions *last_writer_options;
MsgFormatOptions *last_msg_format_options;
FilePermOptions *last_file_perm_options;
LogTemplateOptions *last_template_options;
LogTemplate *last_template;
CfgArgs *last_block_args;
ValuePairs *last_value_pairs;
ValuePairsTransformSet *last_vp_transset;
LogMatcherOptions *last_matcher_options;
HostResolveOptions *last_host_resolve_options;
StatsOptions *last_stats_options;


#line 593 "lib/cfg-grammar.c" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   10512

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     158,   159,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   160,   155,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   156,     2,   157,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    46,    47,    48,    49,     2,     2,     2,     2,
      50,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    63,    64,    65,    66,     2,     2,     2,     2,     2,
      67,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      68,    69,    70,     2,     2,     2,     2,     2,     2,     2,
      71,    72,     2,     2,     2,     2,     2,     2,     2,     2,
      73,    74,    75,     2,     2,     2,     2,     2,     2,     2,
      76,    77,    78,     2,     2,     2,     2,     2,     2,     2,
      79,    80,    81,     2,     2,     2,     2,     2,     2,     2,
      82,     2,    83,    84,    85,    86,    87,     2,     2,     2,
      88,    89,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      91,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      92,    93,    94,    95,    96,    97,     2,     2,     2,     2,
      98,    99,   100,     2,     2,     2,     2,     2,     2,     2,
     101,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     102,    90,     2,     2,     2,     2,     2,     2,     2,     2,
     103,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     104,   105,   106,     2,     2,     2,     2,     2,     2,     2,
     107,   108,   109,     2,     2,     2,     2,     2,     2,     2,
     110,   111,   112,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     113,   114,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   115,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     116,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     117,   118,   119,   120,   121,   122,   123,   124,     2,     2,
       2,   125,     2,     2,     2,     2,     2,     2,     2,     2,
     126,   127,   128,     2,     2,     2,     2,     2,     2,     2,
     129,   130,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     131,   132,     2,     2,     2,     2,     2,     2,     2,     2,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   468,   468,   472,   473,   477,   481,   482,   483,   484,
     488,   489,   490,   491,   492,   493,   497,   504,   513,   530,
     538,   546,   548,   545,   557,   577,   579,   577,   586,   587,
     588,   592,   593,   597,   616,   620,   620,   628,   629,   633,
     638,   649,   659,   668,   670,   668,   679,   680,   681,   685,
     689,   708,   709,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   727,   739,   744,   745,   749,   750,
     754,   758,   759,   763,   764,   770,   774,   778,   787,   788,
     793,   792,   802,   801,   811,   810,   819,   820,   826,   833,
     852,   853,   859,   861,   862,   858,   882,   883,   888,   887,
     899,   900,   904,   905,   906,   907,   913,   914,   915,   916,
     917,   918,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   949,   950,   951,   952,   953,   953,   954,   954,   955,
     955,   959,   960,   961,   968,   969,   973,   974,   975,   979,
     980,   984,   985,   986,   990,   994,   995,   999,  1000,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1049,  1062,
    1063,  1064,  1065,  1192,  1193,  1194,  1195,  1196,  1197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LL_CONTEXT_ROOT",
  "LL_CONTEXT_DESTINATION", "LL_CONTEXT_SOURCE", "LL_CONTEXT_PARSER",
  "LL_CONTEXT_REWRITE", "LL_CONTEXT_FILTER", "LL_CONTEXT_LOG",
  "LL_CONTEXT_BLOCK_DEF", "LL_CONTEXT_BLOCK_REF",
  "LL_CONTEXT_BLOCK_CONTENT", "LL_CONTEXT_BLOCK_ARG", "LL_CONTEXT_PRAGMA",
  "LL_CONTEXT_FORMAT", "LL_CONTEXT_TEMPLATE_FUNC", "LL_CONTEXT_INNER_DEST",
  "LL_CONTEXT_INNER_SRC", "LL_CONTEXT_CLIENT_PROTO",
  "LL_CONTEXT_SERVER_PROTO", "KW_SOURCE", "KW_FILTER", "KW_PARSER",
  "KW_DESTINATION", "KW_LOG", "KW_OPTIONS", "KW_INCLUDE", "KW_BLOCK",
  "KW_JUNCTION", "KW_CHANNEL", "KW_INTERNAL", "KW_FILE", "KW_SQL",
  "KW_TYPE", "KW_COLUMNS", "KW_INDEXES", "KW_VALUES", "KW_PASSWORD",
  "KW_DATABASE", "KW_USERNAME", "KW_TABLE", "KW_ENCODING",
  "KW_SESSION_STATEMENTS", "KW_DELIMITERS", "KW_QUOTES", "KW_QUOTE_PAIRS",
  "KW_NULL", "KW_CHARS", "KW_STRINGS", "KW_SYSLOG", "KW_MARK_FREQ",
  "KW_STATS_FREQ", "KW_STATS_LEVEL", "KW_STATS_LIFETIME", "KW_FLUSH_LINES",
  "KW_SUPPRESS", "KW_FLUSH_TIMEOUT", "KW_LOG_MSG_SIZE", "KW_FILE_TEMPLATE",
  "KW_PROTO_TEMPLATE", "KW_MARK_MODE", "KW_CHAIN_HOSTNAMES",
  "KW_NORMALIZE_HOSTNAMES", "KW_KEEP_HOSTNAME", "KW_CHECK_HOSTNAME",
  "KW_BAD_HOSTNAME", "KW_KEEP_TIMESTAMP", "KW_USE_DNS", "KW_USE_FQDN",
  "KW_CUSTOM_DOMAIN", "KW_DNS_CACHE", "KW_DNS_CACHE_SIZE",
  "KW_DNS_CACHE_EXPIRE", "KW_DNS_CACHE_EXPIRE_FAILED",
  "KW_DNS_CACHE_HOSTS", "KW_PERSIST_ONLY", "KW_USE_RCPTID",
  "KW_USE_UNIQID", "KW_TZ_CONVERT", "KW_TS_FORMAT", "KW_FRAC_DIGITS",
  "KW_LOG_FIFO_SIZE", "KW_LOG_FETCH_LIMIT", "KW_LOG_IW_SIZE",
  "KW_LOG_PREFIX", "KW_PROGRAM_OVERRIDE", "KW_HOST_OVERRIDE",
  "KW_THROTTLE", "KW_THREADED", "KW_PASS_UNIX_CREDENTIALS", "KW_FLAGS",
  "KW_PAD_SIZE", "KW_TIME_ZONE", "KW_RECV_TIME_ZONE", "KW_SEND_TIME_ZONE",
  "KW_LOCAL_TIME_ZONE", "KW_FORMAT", "KW_TIME_REOPEN", "KW_TIME_REAP",
  "KW_TIME_SLEEP", "KW_TMPL_ESCAPE", "KW_OPTIONAL", "KW_CREATE_DIRS",
  "KW_OWNER", "KW_GROUP", "KW_PERM", "KW_DIR_OWNER", "KW_DIR_GROUP",
  "KW_DIR_PERM", "KW_TEMPLATE", "KW_TEMPLATE_ESCAPE",
  "KW_TEMPLATE_FUNCTION", "KW_DEFAULT_FACILITY", "KW_DEFAULT_LEVEL",
  "KW_PORT", "KW_USE_TIME_RECVD", "KW_FACILITY", "KW_LEVEL", "KW_HOST",
  "KW_MATCH", "KW_MESSAGE", "KW_NETMASK", "KW_TAGS", "KW_NETMASK6",
  "KW_VALUE", "KW_REWRITE", "KW_SET", "KW_SUBST", "KW_YES", "KW_NO",
  "KW_IFDEF", "KW_ENDIF", "LL_DOTDOT", "LL_IDENTIFIER", "LL_NUMBER",
  "LL_FLOAT", "LL_STRING", "LL_TOKEN", "LL_BLOCK", "LL_PRAGMA", "LL_EOL",
  "LL_ERROR", "KW_VALUE_PAIRS", "KW_SELECT", "KW_EXCLUDE", "KW_PAIR",
  "KW_KEY", "KW_SCOPE", "KW_SHIFT", "KW_REKEY", "KW_ADD_PREFIX",
  "KW_REPLACE_PREFIX", "KW_ON_ERROR", "KW_RETRIES", "';'", "'{'", "'}'",
  "'('", "')'", "':'", "$accept", "start", "stmts", "stmt", "expr_stmt",
  "source_stmt", "dest_stmt", "filter_stmt", "parser_stmt", "rewrite_stmt",
  "log_stmt", "$@1", "$@2", "plugin_stmt", "source_content", "$@3", "$@4",
  "source_items", "source_item", "source_plugin", "source_afinter",
  "source_afinter_params", "$@5", "source_afinter_options",
  "source_afinter_option", "filter_content", "parser_content",
  "rewrite_content", "dest_content", "$@6", "$@7", "dest_items",
  "dest_item", "dest_plugin", "log_items", "log_item", "log_junction",
  "log_last_junction", "log_forks", "log_fork", "log_content", "log_flags",
  "log_flags_items", "options_stmt", "template_stmt", "template_def",
  "template_block", "$@8", "template_simple", "$@9", "template_fn", "$@10",
  "template_items", "template_content_inner", "template_item",
  "block_stmt", "$@12", "$@13", "$@14", "block_args", "block_arg", "$@15",
  "options_items", "options_item", "$@16", "$@17", "$@18", "stat_option",
  "string", "yesno", "dnsmode", "string_or_number", "string_list",
  "string_list_build", "semicolons", "source_option", "$@19",
  "host_resolve_option", "template_option", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256, 10512,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18, 10000, 10001, 10002, 10003, 10004, 10005, 10006, 10007, 10008,
   10009, 10010, 10011, 10030, 10031, 10032, 10033, 10034, 10035, 10036,
   10037, 10038, 10039, 10040, 10050, 10051, 10052, 10053, 10054, 10055,
   10060, 10071, 10072, 10073, 10074, 10075, 10076, 10077, 10078, 10079,
   10080, 10081, 10090, 10091, 10092, 10093, 10094, 10100, 10110, 10111,
   10112, 10120, 10121, 10130, 10131, 10132, 10140, 10141, 10142, 10150,
   10151, 10152, 10160, 10162, 10163, 10164, 10165, 10166, 10170, 10171,
   10231, 10190, 10200, 10201, 10202, 10203, 10204, 10205, 10210, 10211,
   10212, 10220, 10230, 10240, 10250, 10251, 10252, 10260, 10261, 10262,
   10270, 10271, 10272, 10300, 10301, 10323, 10340, 10350, 10351, 10352,
   10353, 10354, 10355, 10356, 10357, 10361, 10370, 10371, 10372, 10380,
   10381, 10410, 10411, 10420, 10421, 10422, 10423, 10424, 10425, 10426,
   10427, 10428, 10429, 10500, 10501, 10502, 10503, 10504, 10505, 10506,
   10507, 10508, 10509, 10510, 10511,    59,   123,   125,    40,    41,
      58
};
# endif

#define YYPACT_NINF -242

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-242)))

#define YYTABLE_NINF -150

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -52,   -52,   -52,   -52,  -242,   -54,  -242,   -52,   -52,
     -52,  -242,   108,  -242,   -35,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,   -37,   -24,    -4,    12,    22,     6,    14,    23,
    -242,    42,  -242,    11,  -242,  -242,  -242,  -242,    24,   -18,
      38,    43,    44,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      73,    74,    75,    76,    78,    79,    82,    83,    84,    85,
      86,    87,    88,    90,    91,    81,    95,    77,    70,   154,
      94,    96,     9,     9,  -242,  -242,    97,    -8,    98,    99,
     101,     1,  -104,    -7,    13,    36,   107,    53,    26,   109,
    -242,   110,   100,   116,   118,   130,   131,   -52,   -52,    -3,
     -80,   -80,   -80,   -52,   -80,   -52,   134,   135,   136,   -52,
     -80,   -80,   137,   138,   141,   -80,   -80,   -52,   142,   143,
     144,   -80,    25,    40,  -121,    46,    51,   -34,  -242,     6,
     122,   123,   124,   125,   126,   127,  -242,   128,   129,   132,
     133,  -242,   139,   140,   145,  -242,   146,   -95,   147,  -242,
    -242,  -242,   149,  -242,   151,   152,   153,  -242,  -242,   109,
    -242,  -242,   109,  -242,  -242,  -242,  -242,  -242,   109,  -242,
     109,  -242,   -52,  -242,   -52,  -242,   -52,  -242,   -52,    26,
    -242,   -52,   197,  -242,   109,   109,    24,  -242,   150,   158,
     159,   160,   161,   162,   163,   164,   165,  -242,  -242,  -242,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,  -242,  -242,  -242,  -242,   188,  -242,   189,   190,
    -242,  -242,   191,  -242,   192,   193,  -242,  -242,   -52,   157,
     -52,   -52,   -52,   -52,   -80,   -36,   -80,   -80,   218,   219,
     220,  -242,   155,   199,   201,   204,   -52,  -242,    24,    24,
    -242,  -242,    -8,    -8,  -242,     1,     1,   203,   202,   205,
     206,   207,   208,   209,   210,   211,   213,   212,   214,  -242,
      26,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,   215,   216,   217,   222,   223,   224,   225,  -242,  -242,
     226,   227,   228,   229,   230,   231,   239,     9,   -80,  -242,
     -95,   232,   221,   235,   234,    80,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,   -52,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   236,   239,   237,
     238,  -242,  -242,  -242,  -242,  -242,   240,   241,   242,   243,
     244,   245,   246,   247,  -242,    80,  -242,    70,   248,   -52,
     156,  -242,  -242,  -242,  -242,   -80,   -80,   -80,   259,   -52,
     -52,   -52,   -52,  -242,  -242,   109,  -242,  -242,   267,   249,
     250,   251,   252,   253,   254,   255,   -52,   256,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,    21,     0,    92,     0,     0,
       0,    24,     0,     2,     0,     5,    10,    11,    12,    13,
      14,    15,     9,     7,     6,    76,    78,    79,    77,     8,
     154,   155,     0,     0,     0,     0,     0,   145,     0,    82,
      84,     0,     1,     4,    25,    40,    41,    43,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     3,     0,    30,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,    67,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,   145,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,   148,     0,     0,     0,   150,     0,    87,   154,    83,
      88,    85,     0,    16,     0,     0,     0,    33,    26,     0,
      32,    31,     0,    18,    19,    17,    50,    44,     0,    49,
       0,    25,     0,    40,     0,    41,     0,    43,     0,    67,
      42,     0,    72,    65,     0,   167,    52,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   157,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   163,   126,   161,     0,   128,     0,     0,
     130,   132,     0,   134,     0,     0,   136,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,    20,    52,    52,
      35,    27,    30,    30,    45,    48,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      67,   168,    51,    23,   102,   103,   114,   106,   122,   142,
     143,   104,   105,   107,   108,   109,   110,   123,   137,   138,
     139,   140,   141,   117,   118,   119,   121,   120,   115,   116,
     144,   111,   112,   113,   124,   125,   127,   129,   131,   133,
     135,     0,     0,     0,     0,     0,     0,     0,   160,   159,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    81,
      87,     0,     0,     0,     0,   177,    28,    29,    46,    47,
      54,    53,    56,    55,    58,    57,    62,    61,    64,    60,
      59,    74,    66,   183,   184,   185,   186,   187,   188,   182,
     180,   179,   181,   151,   152,   153,    98,     0,    97,     0,
       0,    86,    89,    68,    69,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    36,   177,    39,     0,     0,    74,
       0,    94,    96,    90,    91,     0,     0,     0,     0,     0,
       0,     0,   166,    37,   178,     0,    73,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,   164,    71,
      95,   170,   171,   175,   169,   174,   172,   173,   165,   176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,   257,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,   102,  -242,  -242,  -241,  -242,  -242,
    -242,  -242,  -242,  -126,  -242,   103,   104,   112,   105,  -242,
    -242,  -199,  -242,  -242,   233,  -242,  -242,  -242,  -193,   -96,
    -181,  -242,  -125,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,   -59,   -89,  -242,  -242,  -242,  -242,  -242,   -88,
    -242,  -242,   268,  -242,  -242,  -242,  -242,  -242,    -1,  -111,
    -242,   -16,  -242,   -83,  -161,  -242,  -242,   -40,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    36,   303,    22,    96,    97,   281,   178,   179,   180,
     181,   364,   365,   414,   415,    98,    99,   172,   100,   101,
     284,   187,   188,   189,   108,   109,   110,   202,   203,   182,
     111,   299,   418,    23,    24,    25,    26,    91,    27,    92,
      28,    93,   274,   169,   275,    29,    38,   356,   438,   397,
     398,   420,    85,    86,    87,    88,    89,   165,   245,   220,
     350,   246,   447,   448,   206,   416,   417,   161,   156
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    33,    34,    35,   171,   190,   295,    39,    40,    41,
     221,   222,   204,   224,   249,   272,   273,   174,   282,   230,
     231,   283,   175,   176,   235,   236,   174,   285,   215,   286,
     241,   175,     1,     2,     3,     4,     5,     6,   250,     7,
     348,   366,   367,   300,   301,   102,   103,   104,   105,   217,
     218,   174,   191,   106,   192,   219,   175,    49,  -149,  -149,
    -149,    50,    51,    52,    53,    54,    55,    56,    57,  -147,
      58,    59,    60,    61,  -147,  -147,    62,  -147,    63,    64,
      65,    66,    30,    67,    68,    31,   368,   369,    69,    70,
      71,   170,   170,   217,   218,    72,    73,   362,   363,   219,
      74,   255,    37,   204,    75,    76,    77,   382,    42,    78,
      79,    80,    81,    82,    83,    84,   213,   214,   216,    44,
      43,     8,   223,     9,   225,   256,   177,   248,   229,   252,
     254,    30,    45,   157,    31,   186,   237,    10,   158,   159,
     112,   160,   406,   168,   407,    11,    31,   408,    90,   193,
     107,   194,    46,   347,   349,   351,   352,   150,   151,    30,
     242,   243,    31,  -101,   409,   410,   411,   412,    47,   195,
     152,   196,   153,   154,    30,   242,   243,    31,    48,   -80,
      30,   242,   243,    31,   244,    30,   242,   243,    31,   190,
     190,   288,   197,   290,   198,   292,   113,   294,    94,   247,
     297,   114,   115,   413,   204,   251,   162,   163,   164,   200,
     253,   201,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   166,   132,
     155,   133,   134,   135,   136,   208,   137,   138,   148,   -38,
     139,   140,   141,   142,   143,   144,   145,   400,   146,   147,
     149,   209,   167,   210,   173,   183,   184,   341,   185,   343,
     344,   345,   346,   199,   205,   211,   212,   207,   399,   226,
     227,   228,   232,   233,   449,   361,   234,   238,   239,   240,
     258,   259,   260,   261,   262,   263,   264,   265,   298,   433,
     266,   267,   342,   287,   436,   437,   289,   268,   269,   291,
      95,   401,   293,   270,   271,   276,   277,   278,   279,   304,
     422,   280,   296,   357,   439,   440,   441,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   353,   354,   355,   170,   358,   359,   360,
     370,   371,   372,   458,   374,   373,   376,   375,   378,   377,
     379,   380,   381,   396,   383,   384,   385,   434,   403,     0,
     419,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   402,   404,   405,   442,   421,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   450,   435,   451,   452,
     453,   454,   455,   456,   457,   459,     0,   257,   419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,   444,
     445,   446,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,     0,   446
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,    93,   101,   199,     8,     9,    10,
     121,   122,   108,   124,   135,   110,   111,    25,   179,   130,
     131,   182,    30,    31,   135,   136,    25,   188,    31,   190,
     141,    30,    21,    22,    23,    24,    25,    26,   159,    28,
      76,   282,   283,   204,   205,    21,    22,    23,    24,   129,
     130,    25,   156,    29,   158,   135,    30,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   134,    77,    78,   137,   285,   286,    82,    83,
      84,    92,    93,   129,   130,    89,    90,   278,   279,   135,
      94,   135,   156,   199,    98,    99,   100,   300,     0,   103,
     104,   105,   106,   107,   108,   109,   117,   118,   119,   156,
     155,   110,   123,   112,   125,   159,   134,   143,   129,   145,
     146,   134,   156,    63,   137,   134,   137,   126,    68,    69,
     158,    71,    62,   134,    64,   134,   137,    67,   134,   156,
     126,   158,   156,   264,   265,   266,   267,    80,    81,   134,
     135,   136,   137,   157,    84,    85,    86,    87,   156,   156,
      93,   158,    95,    96,   134,   135,   136,   137,   156,   156,
     134,   135,   136,   137,   159,   134,   135,   136,   137,   285,
     286,   192,   156,   194,   158,   196,   158,   198,   156,   159,
     201,   158,   158,   123,   300,   159,    52,    53,    54,   156,
     159,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   134,   158,
     153,   158,   158,   158,   158,   135,   158,   158,   157,   159,
     158,   158,   158,   158,   158,   158,   158,   358,   158,   158,
     155,   135,   156,   135,   157,   157,   157,   258,   157,   260,
     261,   262,   263,   156,   155,   135,   135,   157,   357,   135,
     135,   135,   135,   135,   435,   276,   135,   135,   135,   135,
     158,   158,   158,   158,   158,   158,   158,   158,    91,   415,
     158,   158,   135,   191,   419,   139,   193,   158,   158,   195,
      43,   360,   197,   158,   158,   158,   157,   156,   156,   159,
     398,   158,   200,   158,   425,   426,   427,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   135,   135,   135,   357,   158,   157,   155,
     157,   159,   157,   446,   157,   159,   157,   159,   157,   159,
     157,   159,   158,   134,   159,   159,   159,   417,   157,    -1,
     381,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   157,   159,   135,   159,   159,   159,   158,   158,
     158,   158,   158,   158,   158,   158,   139,   159,   159,   159,
     159,   159,   159,   159,   159,   159,    -1,   149,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,   446
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    26,    28,   110,   112,
     126,   134,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   174,   204,   205,   206,   207,   209,   211,   216,
     134,   137,   229,   229,   229,   229,   172,   156,   217,   229,
     229,   229,     0,   155,   156,   156,   156,   156,   156,    51,
      55,    56,    57,    58,    59,    60,    61,    62,    64,    65,
      66,    67,    70,    72,    73,    74,    75,    77,    78,    82,
      83,    84,    89,    90,    94,    98,    99,   100,   103,   104,
     105,   106,   107,   108,   109,   223,   224,   225,   226,   227,
     134,   208,   210,   212,   156,   163,   175,   176,   186,   187,
     189,   190,    21,    22,    23,    24,    29,   126,   195,   196,
     197,   201,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   157,   155,
      80,    81,    93,    95,    96,   153,   239,    63,    68,    69,
      71,   238,    52,    53,    54,   228,   134,   156,   134,   214,
     229,   214,   188,   157,    25,    30,    31,   134,   178,   179,
     180,   181,   200,   157,   157,   157,   134,   192,   193,   194,
     200,   156,   158,   156,   158,   156,   158,   156,   158,   156,
     156,   158,   198,   199,   200,   155,   235,   157,   135,   135,
     135,   135,   135,   229,   229,    31,   229,   129,   130,   135,
     230,   230,   230,   229,   230,   229,   135,   135,   135,   229,
     230,   230,   135,   135,   135,   230,   230,   229,   135,   135,
     135,   230,   135,   136,   159,   229,   232,   159,   232,   135,
     159,   159,   232,   159,   232,   135,   159,   223,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   110,   111,   213,   215,   158,   157,   156,   156,
     158,   177,   235,   235,   191,   235,   235,   175,   229,   186,
     229,   187,   229,   189,   229,   199,   188,   229,    91,   202,
     235,   235,   195,   173,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   229,   135,   229,   229,   229,   229,   230,    76,   230,
     231,   230,   230,   135,   135,   135,   218,   158,   158,   157,
     155,   229,   201,   201,   182,   183,   178,   178,   192,   192,
     157,   159,   157,   159,   157,   159,   157,   159,   157,   157,
     159,   158,   199,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   134,   220,   221,   214,
     230,   213,   159,   157,   157,   159,    62,    64,    67,    84,
      85,    86,    87,   123,   184,   185,   236,   237,   203,   229,
     222,   159,   220,   159,   159,   158,   158,   158,   158,   158,
     158,   158,   158,   184,   238,   159,   203,   139,   219,   230,
     230,   230,   135,   229,   229,   229,   229,   233,   234,   235,
     139,   159,   159,   159,   159,   159,   159,   159,   234,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   161,   162,   163,   163,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   165,   166,   167,   168,   169,
     170,   172,   173,   171,   174,   176,   177,   175,   178,   178,
     178,   179,   179,   180,   181,   183,   182,   184,   184,   185,
     186,   187,   188,   190,   191,   189,   192,   192,   192,   193,
     194,   195,   195,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   197,   198,   199,   199,   200,   200,
     201,   202,   202,   203,   203,   204,   205,   205,   206,   206,
     208,   207,   210,   209,   212,   211,   213,   213,   214,   214,
     215,   215,   217,   218,   219,   216,   220,   220,   222,   221,
     223,   223,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   224,   226,   224,   227,
     224,   228,   228,   228,   229,   229,   230,   230,   230,   231,
     231,   232,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   236,   236,   236,   236,   236,   236,   237,   236,   238,
     238,   238,   238,   239,   239,   239,   239,   239,   239
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     0,     0,     6,     1,     0,     0,     3,     3,     3,
       0,     1,     1,     1,     4,     0,     2,     2,     0,     1,
       0,     0,     0,     0,     0,     3,     3,     3,     0,     1,
       1,     3,     0,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     1,     4,     1,     3,     0,     4,     4,
       3,     5,     0,     2,     0,     4,     1,     1,     1,     1,
       0,     6,     0,     4,     0,     4,     3,     0,     1,     4,
       4,     4,     0,     0,     0,    10,     2,     0,     0,     3,
       3,     0,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     2,     0,     2,     0,
       2,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, lexer, dummy, arg, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, lexer, dummy, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (dummy);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, lexer, dummy, arg);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , lexer, dummy, arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, dummy, arg); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (dummy);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CfgLexer *lexer, gpointer *dummy, gpointer arg)
{
/* The lookahead symbol.  */
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
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, lexer);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 478 "cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_tree_add_object(&configuration->tree, (yyvsp[0].ptr)) || cfg_allow_config_dups(configuration), (yylsp[0]), "duplicate %s definition", log_expr_node_get_content_name(((LogExprNode *) (yyvsp[0].ptr))->content));
          }
#line 3155 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 498 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_source((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3164 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 505 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_destination((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3173 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 514 "cfg-grammar.y" /* yacc.c:1646  */
    {
            /* NOTE: the filter() subexpression (e.g. the one that invokes
             * one filter expression from another) depends on the layout
             * parsed into the cfg-tree when looking up the referenced
             * filter expression.  So when changing how a filter statement
             * is transformed into the cfg-tree, make sure you check
             * filter-call.c, especially filter_call_init() function as
             * well.
             */

            (yyval.ptr) = log_expr_node_new_filter((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3191 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 531 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_parser((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3200 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 539 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_rewrite((yyvsp[-3].cptr), (yyvsp[-1].ptr), &(yylsp[-4]));
            free((yyvsp[-3].cptr));
          }
#line 3209 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 546 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_LOG, NULL, "log"); }
#line 3215 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 548 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3221 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 549 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = (yyvsp[-2].ptr);
          }
#line 3229 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 558 "cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_ROOT;
            gpointer result;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            result = plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!result)
              YYERROR;
            (yyval.ptr) = NULL;
          }
#line 3248 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 577 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_SOURCE, NULL, "source"); }
#line 3254 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 579 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3260 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 580 "cfg-grammar.y" /* yacc.c:1646  */
    {
            (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc));
          }
#line 3268 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 586 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail(log_expr_node_new_pipe((yyvsp[-2].ptr), &(yylsp[-2])), (yyvsp[0].ptr)); }
#line 3274 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 587 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail((yyvsp[-2].ptr),  (yyvsp[0].ptr)); }
#line 3280 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 588 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3286 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 592 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3292 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 593 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3298 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 598 "cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_SOURCE;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            last_driver = (LogDriver *) plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!last_driver)
              {
                YYERROR;
              }
            (yyval.ptr) = last_driver;
          }
#line 3318 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 616 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3324 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 620 "cfg-grammar.y" /* yacc.c:1646  */
    {
            last_driver = afinter_sd_new(configuration);
            last_source_options = &((AFInterSourceDriver *) last_driver)->source_options;
          }
#line 3333 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 624 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 3339 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 638 "cfg-grammar.y" /* yacc.c:1646  */
    {
            FilterExprNode *last_filter_expr = NULL;

	    CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&filter_expr_parser, lexer, (gpointer *) &last_filter_expr, NULL), (yyloc));

            (yyval.ptr) = log_expr_node_new_pipe(log_filter_pipe_new(last_filter_expr, configuration), &(yyloc));
	  }
#line 3351 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 649 "cfg-grammar.y" /* yacc.c:1646  */
    {
            LogExprNode *last_parser_expr = NULL;

            CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&parser_expr_parser, lexer, (gpointer *) &last_parser_expr, NULL), (yyloc));
            (yyval.ptr) = last_parser_expr;
          }
#line 3362 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 659 "cfg-grammar.y" /* yacc.c:1646  */
    {
            LogExprNode *last_rewrite_expr = NULL;

            CHECK_ERROR_WITHOUT_MESSAGE(cfg_parser_parse(&rewrite_expr_parser, lexer, (gpointer *) &last_rewrite_expr, NULL), (yyloc));
            (yyval.ptr) = last_rewrite_expr;
          }
#line 3373 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 668 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_DESTINATION, NULL, "destination"); }
#line 3379 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 670 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_pop_context(lexer); }
#line 3385 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 671 "cfg-grammar.y" /* yacc.c:1646  */
    {
             (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc));
           }
#line 3393 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 679 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail(log_expr_node_new_pipe((yyvsp[-2].ptr), &(yylsp[-2])), (yyvsp[0].ptr)); }
#line 3399 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 680 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_append_tail((yyvsp[-2].ptr),  (yyvsp[0].ptr)); }
#line 3405 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 681 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3411 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 685 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3417 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 690 "cfg-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_DESTINATION;

            p = plugin_find(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            last_driver = (LogDriver *) plugin_parse_config(p, configuration, &(yylsp[0]), NULL);
            free((yyvsp[0].cptr));
            if (!last_driver)
              {
                YYERROR;
              }
            (yyval.ptr) = last_driver;
          }
#line 3437 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 708 "cfg-grammar.y" /* yacc.c:1646  */
    { log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr); }
#line 3443 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 709 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3449 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 713 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_source_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3455 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 714 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_source(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3461 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 715 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_filter_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3467 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 716 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_filter(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3473 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 717 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_parser_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3479 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 718 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_parser(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3485 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 719 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_rewrite_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3491 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 720 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_rewrite(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3497 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 721 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_destination_reference((yyvsp[-1].cptr), &(yyloc)); free((yyvsp[-1].cptr)); }
#line 3503 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 722 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_destination(NULL, (yyvsp[-1].ptr), &(yyloc)); }
#line 3509 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 723 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 3515 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 727 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_junction((yyvsp[-1].ptr), &(yyloc)); }
#line 3521 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 739 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr) ? log_expr_node_new_junction((yyvsp[0].ptr), &(yylsp[0])) :  NULL; }
#line 3527 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 744 "cfg-grammar.y" /* yacc.c:1646  */
    { log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr); }
#line 3533 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 745 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 3539 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 749 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3545 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 750 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 3551 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 754 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = log_expr_node_new_log(log_expr_node_append_tail((yyvsp[-2].ptr), (yyvsp[-1].ptr)), (yyvsp[0].num), &(yyloc)); }
#line 3557 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 758 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num); }
#line 3563 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 72:
#line 759 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 3569 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 763 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = log_expr_node_lookup_flag((yyvsp[-1].cptr)) | (yyvsp[0].num); free((yyvsp[-1].cptr)); }
#line 3575 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 764 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 3581 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 775 "cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_tree_add_template(&configuration->tree, (yyvsp[0].ptr)) || cfg_allow_config_dups(configuration), (yylsp[0]), "duplicate template");
          }
#line 3589 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 779 "cfg-grammar.y" /* yacc.c:1646  */
    {
            user_template_function_register(configuration, last_template->name, last_template);
            log_template_unref(last_template);
            last_template = NULL;
          }
#line 3599 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 793 "cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
	  }
#line 3608 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 797 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; }
#line 3614 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 802 "cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
          }
#line 3623 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 806 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; }
#line 3629 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 811 "cfg-grammar.y" /* yacc.c:1646  */
    {
	    last_template = log_template_new(configuration, (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
          }
#line 3638 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 815 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_template; }
#line 3644 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 827 "cfg-grammar.y" /* yacc.c:1646  */
    {
          GError *error = NULL;

          CHECK_ERROR(log_template_compile(last_template, (yyvsp[0].cptr), &error), (yylsp[0]), "Error compiling template (%s)", error->message);
          free((yyvsp[0].cptr));
        }
#line 3655 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 834 "cfg-grammar.y" /* yacc.c:1646  */
    {
          GError *error = NULL;

          CHECK_ERROR(log_template_compile(last_template, (yyvsp[-1].cptr), &error), (yylsp[-1]), "Error compiling template (%s)", error->message);
          free((yyvsp[-1].cptr));

          CHECK_ERROR(log_template_set_type_hint(last_template, (yyvsp[-3].cptr), &error), (yylsp[-3]), "Error setting the template type-hint (%s)", error->message);
          free((yyvsp[-3].cptr));
        }
#line 3669 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 853 "cfg-grammar.y" /* yacc.c:1646  */
    { log_template_set_escape(last_template, (yyvsp[-1].num)); }
#line 3675 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 859 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_DEF, block_def_keywords, "block definition"); }
#line 3681 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 861 "cfg-grammar.y" /* yacc.c:1646  */
    { last_block_args = cfg_args_new(); }
#line 3687 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 862 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_CONTENT, NULL, "block content"); }
#line 3693 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 864 "cfg-grammar.y" /* yacc.c:1646  */
    {
            CfgBlock *block;

            /* block content */
            cfg_lexer_pop_context(lexer);
            /* block definition */
            cfg_lexer_pop_context(lexer);

            block = cfg_block_new((yyvsp[0].cptr), last_block_args);
            CHECK_ERROR(cfg_lexer_register_block_generator(lexer, cfg_lexer_lookup_context_type_by_name((yyvsp[-7].cptr)), (yyvsp[-6].cptr), cfg_block_generate, block, (GDestroyNotify) cfg_block_free) || cfg_allow_config_dups(configuration), (yylsp[-6]), "duplicate block definition");
            free((yyvsp[-7].cptr));
            free((yyvsp[-6].cptr));
            free((yyvsp[0].cptr));
            last_block_args = NULL;
          }
#line 3713 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 888 "cfg-grammar.y" /* yacc.c:1646  */
    {
            cfg_lexer_push_context(lexer, LL_CONTEXT_BLOCK_ARG, NULL, "block argument");
          }
#line 3721 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 892 "cfg-grammar.y" /* yacc.c:1646  */
    {
            cfg_lexer_pop_context(lexer);
            cfg_args_set(last_block_args, (yyvsp[-2].cptr), (yyvsp[0].cptr)); free((yyvsp[-2].cptr)); free((yyvsp[0].cptr));
          }
#line 3730 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 904 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->mark_freq = (yyvsp[-1].num); }
#line 3736 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 905 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->flush_lines = (yyvsp[-1].num); }
#line 3742 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 906 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_mark_mode(configuration, "internal"); }
#line 3748 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 908 "cfg-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(cfg_lookup_mark_mode((yyvsp[-1].cptr)) > 0 && cfg_lookup_mark_mode((yyvsp[-1].cptr)) != MM_GLOBAL, (yylsp[-1]), "illegal global mark-mode");
            cfg_set_mark_mode(configuration, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 3758 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 913 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->flush_timeout = (yyvsp[-1].num); }
#line 3764 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 914 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->chain_hostnames = (yyvsp[-1].num); }
#line 3770 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 915 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->keep_hostname = (yyvsp[-1].num); }
#line 3776 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 916 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->check_hostname = (yyvsp[-1].num); }
#line 3782 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 917 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_bad_hostname_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3788 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 918 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->time_reopen = (yyvsp[-1].num); }
#line 3794 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 919 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->time_reap = (yyvsp[-1].num); }
#line 3800 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 920 "cfg-grammar.y" /* yacc.c:1646  */
    {}
#line 3806 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 921 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->suppress = (yyvsp[-1].num); }
#line 3812 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 922 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->threaded = (yyvsp[-1].num); }
#line 3818 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 923 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->pass_unix_credentials = (yyvsp[-1].num); }
#line 3824 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 924 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_use_uniqid((yyvsp[-1].num)); }
#line 3830 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 925 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_set_use_uniqid((yyvsp[-1].num)); }
#line 3836 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 926 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->log_fifo_size = (yyvsp[-1].num); }
#line 3842 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 927 "cfg-grammar.y" /* yacc.c:1646  */
    { msg_error("Using a global log-iw-size() option was removed, please use a per-source log-iw-size()", NULL); }
#line 3848 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 928 "cfg-grammar.y" /* yacc.c:1646  */
    { msg_error("Using a global log-fetch-limit() option was removed, please use a per-source log-fetch-limit()", NULL); }
#line 3854 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 929 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->log_msg_size = (yyvsp[-1].num); }
#line 3860 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 930 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->keep_timestamp = (yyvsp[-1].num); }
#line 3866 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 931 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->create_dirs = (yyvsp[-1].num); }
#line 3872 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 125:
#line 932 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_owner_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3878 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 126:
#line 933 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_owner_set(configuration, "-2"); }
#line 3884 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 127:
#line 934 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_group_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3890 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 128:
#line 935 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_group_set(configuration, "-2"); }
#line 3896 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 129:
#line 936 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_perm_set(configuration, (yyvsp[-1].num)); }
#line 3902 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 130:
#line 937 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_file_perm_set(configuration, -2); }
#line 3908 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 938 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_owner_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3914 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 132:
#line 939 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_owner_set(configuration, "-2"); }
#line 3920 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 133:
#line 940 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_group_set(configuration, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3926 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 134:
#line 941 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_group_set(configuration, "-2"); }
#line 3932 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 135:
#line 942 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_perm_set(configuration, (yyvsp[-1].num)); }
#line 3938 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 943 "cfg-grammar.y" /* yacc.c:1646  */
    { cfg_dir_perm_set(configuration, -2); }
#line 3944 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 944 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->custom_domain = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3950 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 138:
#line 945 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_size = (yyvsp[-1].num); }
#line 3956 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 139:
#line 946 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_expire = (yyvsp[-1].num); }
#line 3962 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 140:
#line 948 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_expire_failed = (yyvsp[-1].num); }
#line 3968 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 949 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->dns_cache_hosts = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3974 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 142:
#line 950 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->file_template_name = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3980 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 951 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->proto_template_name = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3986 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 144:
#line 952 "cfg-grammar.y" /* yacc.c:1646  */
    { configuration->recv_time_zone = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 3992 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 953 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options = &configuration->template_options; }
#line 3998 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 147:
#line 954 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &configuration->host_resolve_options; }
#line 4004 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 149:
#line 955 "cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options = &configuration->stats_options; }
#line 4010 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 959 "cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->log_freq = (yyvsp[-1].num); }
#line 4016 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 960 "cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->level = (yyvsp[-1].num); }
#line 4022 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 153:
#line 961 "cfg-grammar.y" /* yacc.c:1646  */
    { last_stats_options->lifetime = (yyvsp[-1].num); }
#line 4028 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 156:
#line 973 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 1; }
#line 4034 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 157:
#line 974 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 4040 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 975 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4046 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 979 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4052 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 980 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 2; }
#line 4058 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 984 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 4064 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 985 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 4070 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 986 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 4076 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 164:
#line 990 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_reverse((yyvsp[0].ptr)); }
#line 4082 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 994 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_append((yyvsp[0].ptr), g_strdup((yyvsp[-1].cptr))); free((yyvsp[-1].cptr)); }
#line 4088 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 995 "cfg-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 4094 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1041 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->init_window_size = (yyvsp[-1].num); }
#line 4100 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1042 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->chain_hostnames = (yyvsp[-1].num); }
#line 4106 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1043 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_hostname = (yyvsp[-1].num); }
#line 4112 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1044 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4118 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1045 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->host_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4124 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1046 "cfg-grammar.y" /* yacc.c:1646  */
    { gchar *p = strrchr((yyvsp[-1].cptr), ':'); if (p) *p = 0; last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4130 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1047 "cfg-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_timestamp = (yyvsp[-1].num); }
#line 4136 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1048 "cfg-grammar.y" /* yacc.c:1646  */
    { log_source_options_set_tags(last_source_options, (yyvsp[-1].ptr)); }
#line 4142 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1049 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &last_source_options->host_resolve_options; }
#line 4148 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1062 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_fqdn = (yyvsp[-1].num); }
#line 4154 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1063 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns = (yyvsp[-1].num); }
#line 4160 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1064 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns_cache = (yyvsp[-1].num); }
#line 4166 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1065 "cfg-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->normalize_hostnames = (yyvsp[-1].num); }
#line 4172 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1192 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->ts_format = cfg_ts_format_value((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4178 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1193 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->frac_digits = (yyvsp[-1].num); }
#line 4184 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1194 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4190 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1195 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4196 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1196 "cfg-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_LOCAL] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4202 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1198 "cfg-grammar.y" /* yacc.c:1646  */
    {
          gint on_error;

          CHECK_ERROR(log_template_on_error_parse((yyvsp[-1].cptr), &on_error), (yylsp[-1]), "Invalid on-error() setting");
          free((yyvsp[-1].cptr));

          log_template_options_set_on_error(last_template_options, on_error);
        }
#line 4215 "lib/cfg-grammar.c" /* yacc.c:1646  */
    break;


#line 4219 "lib/cfg-grammar.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, lexer, dummy, arg, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, lexer, dummy, arg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, &yylloc, lexer, dummy, arg);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, yylsp, lexer, dummy, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, lexer, dummy, arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, lexer, dummy, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, lexer, dummy, arg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1281 "cfg-grammar.y" /* yacc.c:1906  */


