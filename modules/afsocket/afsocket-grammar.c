/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 24 "modules/afsocket/afsocket-grammar.y" /* yacc.c:316  */

#include "afsocket-parser.h"


#line 68 "modules/afsocket/afsocket-grammar.c" /* yacc.c:316  */

/* Substitute the variable and function names.  */
#define yyparse         afsocket_parse
#define yylex           afsocket_lex
#define yyerror         afsocket_error
#define yydebug         afsocket_debug
#define yynerrs         afsocket_nerrs


/* Copy the first part of user declarations.  */

#line 80 "modules/afsocket/afsocket-grammar.c" /* yacc.c:339  */

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
#ifndef YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED
# define YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int afsocket_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_UNIX_STREAM = 20000,
    KW_UNIX_DGRAM = 20002,
    KW_TCP = 20003,
    KW_UDP = 20004,
    KW_TCP6 = 20005,
    KW_UDP6 = 20006,
    KW_NETWORK = 20007,
    KW_TRANSPORT = 20008,
    KW_IP_PROTOCOL = 20009,
    KW_SYSTEMD_SYSLOG = 20010,
    KW_IP_TTL = 20011,
    KW_SO_BROADCAST = 20012,
    KW_IP_TOS = 20013,
    KW_IP_FREEBIND = 20014,
    KW_SO_SNDBUF = 20015,
    KW_SO_RCVBUF = 20016,
    KW_SO_KEEPALIVE = 20017,
    KW_TCP_KEEPALIVE_TIME = 20018,
    KW_TCP_KEEPALIVE_PROBES = 20019,
    KW_TCP_KEEPALIVE_INTVL = 20020,
    KW_LISTEN_BACKLOG = 20021,
    KW_SPOOF_SOURCE = 20022,
    KW_KEEP_ALIVE = 20023,
    KW_MAX_CONNECTIONS = 20024,
    KW_LOCALIP = 20025,
    KW_IP = 20026,
    KW_LOCALPORT = 20027,
    KW_DESTPORT = 20028,
    KW_FAILOVER_SERVERS = 20029,
    KW_FAILOVER = 20030,
    KW_SERVERS = 20031,
    KW_FAILBACK = 20032,
    KW_TCP_PROBE_INTERVAL = 20033,
    KW_SUCCESSFUL_PROBES_REQUIRED = 20034,
    KW_TLS = 20035,
    KW_PEER_VERIFY = 20036,
    KW_KEY_FILE = 20037,
    KW_CERT_FILE = 20038,
    KW_DHPARAM_FILE = 20039,
    KW_PKCS12_FILE = 20040,
    KW_CA_DIR = 20041,
    KW_CRL_DIR = 20042,
    KW_TRUSTED_KEYS = 20043,
    KW_TRUSTED_DN = 20044,
    KW_CIPHER_SUITE = 20045,
    KW_ECDH_CURVE_LIST = 20046,
    KW_SSL_OPTIONS = 20047,
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
    LL_CONTEXT_OPTIONS = 19,
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
    KW_IF = 10010,
    KW_ELSE = 10011,
    KW_ELIF = 10012,
    KW_INTERNAL = 10020,
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
    KW_ENCODING = 10082,
    KW_TYPE = 10083,
    KW_STATS_MAX_DYNAMIC = 10084,
    KW_MIN_IW_SIZE_PER_READER = 10085,
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
    KW_PERSIST_NAME = 10302,
    KW_READ_OLD_RECORDS = 10304,
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
    KW_REWRITE = 10370,
    KW_YES = 10380,
    KW_NO = 10381,
    KW_IFDEF = 10410,
    KW_ENDIF = 10411,
    LL_DOTDOT = 10420,
    LL_DOTDOTDOT = 10421,
    LL_IDENTIFIER = 10422,
    LL_NUMBER = 10423,
    LL_FLOAT = 10424,
    LL_STRING = 10425,
    LL_TOKEN = 10426,
    LL_BLOCK = 10427,
    LL_PRAGMA = 10428,
    LL_EOL = 10429,
    LL_ERROR = 10430,
    KW_VALUE_PAIRS = 10500,
    KW_EXCLUDE = 10502,
    KW_PAIR = 10503,
    KW_KEY = 10504,
    KW_SCOPE = 10505,
    KW_SHIFT = 10506,
    KW_SHIFT_LEVELS = 10507,
    KW_REKEY = 10508,
    KW_ADD_PREFIX = 10509,
    KW_REPLACE_PREFIX = 10510,
    KW_ON_ERROR = 10511,
    KW_RETRIES = 10512
  };
#endif
/* Tokens.  */
#define KW_UNIX_STREAM 20000
#define KW_UNIX_DGRAM 20002
#define KW_TCP 20003
#define KW_UDP 20004
#define KW_TCP6 20005
#define KW_UDP6 20006
#define KW_NETWORK 20007
#define KW_TRANSPORT 20008
#define KW_IP_PROTOCOL 20009
#define KW_SYSTEMD_SYSLOG 20010
#define KW_IP_TTL 20011
#define KW_SO_BROADCAST 20012
#define KW_IP_TOS 20013
#define KW_IP_FREEBIND 20014
#define KW_SO_SNDBUF 20015
#define KW_SO_RCVBUF 20016
#define KW_SO_KEEPALIVE 20017
#define KW_TCP_KEEPALIVE_TIME 20018
#define KW_TCP_KEEPALIVE_PROBES 20019
#define KW_TCP_KEEPALIVE_INTVL 20020
#define KW_LISTEN_BACKLOG 20021
#define KW_SPOOF_SOURCE 20022
#define KW_KEEP_ALIVE 20023
#define KW_MAX_CONNECTIONS 20024
#define KW_LOCALIP 20025
#define KW_IP 20026
#define KW_LOCALPORT 20027
#define KW_DESTPORT 20028
#define KW_FAILOVER_SERVERS 20029
#define KW_FAILOVER 20030
#define KW_SERVERS 20031
#define KW_FAILBACK 20032
#define KW_TCP_PROBE_INTERVAL 20033
#define KW_SUCCESSFUL_PROBES_REQUIRED 20034
#define KW_TLS 20035
#define KW_PEER_VERIFY 20036
#define KW_KEY_FILE 20037
#define KW_CERT_FILE 20038
#define KW_DHPARAM_FILE 20039
#define KW_PKCS12_FILE 20040
#define KW_CA_DIR 20041
#define KW_CRL_DIR 20042
#define KW_TRUSTED_KEYS 20043
#define KW_TRUSTED_DN 20044
#define KW_CIPHER_SUITE 20045
#define KW_ECDH_CURVE_LIST 20046
#define KW_SSL_OPTIONS 20047
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
#define LL_CONTEXT_OPTIONS 19
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
#define KW_IF 10010
#define KW_ELSE 10011
#define KW_ELIF 10012
#define KW_INTERNAL 10020
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
#define KW_ENCODING 10082
#define KW_TYPE 10083
#define KW_STATS_MAX_DYNAMIC 10084
#define KW_MIN_IW_SIZE_PER_READER 10085
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
#define KW_PERSIST_NAME 10302
#define KW_READ_OLD_RECORDS 10304
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
#define KW_REWRITE 10370
#define KW_YES 10380
#define KW_NO 10381
#define KW_IFDEF 10410
#define KW_ENDIF 10411
#define LL_DOTDOT 10420
#define LL_DOTDOTDOT 10421
#define LL_IDENTIFIER 10422
#define LL_NUMBER 10423
#define LL_FLOAT 10424
#define LL_STRING 10425
#define LL_TOKEN 10426
#define LL_BLOCK 10427
#define LL_PRAGMA 10428
#define LL_EOL 10429
#define LL_ERROR 10430
#define KW_VALUE_PAIRS 10500
#define KW_EXCLUDE 10502
#define KW_PAIR 10503
#define KW_KEY 10504
#define KW_SCOPE 10505
#define KW_SHIFT 10506
#define KW_SHIFT_LEVELS 10507
#define KW_REKEY 10508
#define KW_ADD_PREFIX 10509
#define KW_REPLACE_PREFIX 10510
#define KW_ON_ERROR 10511
#define KW_RETRIES 10512

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



int afsocket_parse (CfgLexer *lexer, LogDriver **instance, gpointer arg);

#endif /* !YY_AFSOCKET_MODULES_AFSOCKET_AFSOCKET_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 521 "modules/afsocket/afsocket-grammar.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 30 "modules/afsocket/afsocket-grammar.y" /* yacc.c:359  */


#include "afsocket.h"
#include "cfg-parser.h"
#include "afsocket-grammar.h"
#include "afunix-source.h"
#include "afunix-dest.h"
#include "afinet-source.h"
#include "afinet-dest.h"
#include "messages.h"
#include "syslog-names.h"
#include "plugin.h"
#include "cfg-grammar.h"
#include "socket-options-inet.h"
#include "transport-mapper-inet.h"
#include "service-management.h"

#include "systemd-syslog-source.h"
#include "afsocket-systemd-override.h"

#include "tlscontext.h"


static SocketOptions *last_sock_options;
static TransportMapper *last_transport_mapper;

TLSContext *last_tls_context;


#if ! SYSLOG_NG_ENABLE_IPV6
#undef AF_INET6
#define AF_INET6 0; g_assert_not_reached()

#endif

static void
afsocket_grammar_set_source_driver(AFSocketSourceDriver *sd)
{
  last_driver = &sd->super.super;

  last_reader_options = &((AFSocketSourceDriver *) last_driver)->reader_options;
  last_sock_options = ((AFSocketSourceDriver *) last_driver)->socket_options;
  last_transport_mapper = ((AFSocketSourceDriver *) last_driver)->transport_mapper;
  last_proto_server_options = &last_reader_options->proto_options.super;
}

static void
afsocket_grammar_set_dest_driver(AFSocketDestDriver *dd)
{
  last_driver = &dd->super.super;

  last_writer_options = &((AFSocketDestDriver *) last_driver)->writer_options;
  last_sock_options = ((AFSocketDestDriver *) last_driver)->socket_options;
  last_transport_mapper = ((AFSocketDestDriver *) last_driver)->transport_mapper;
  last_proto_client_options = &last_writer_options->proto_options.super;
}

void
afunix_grammar_set_source_driver(AFUnixSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
  last_file_perm_options = &sd->file_perm_options;
}

static void
afinet_grammar_set_source_driver(AFInetSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
}

static void
afunix_grammar_set_dest_driver(AFUnixDestDriver *dd)
{
  afsocket_grammar_set_dest_driver(&dd->super);
}

static void
afinet_grammar_set_dest_driver(AFInetDestDriver *dd)
{
  afsocket_grammar_set_dest_driver(&dd->super);
}

void
systemd_syslog_grammar_set_source_driver(SystemDSyslogSourceDriver *sd)
{
  afsocket_grammar_set_source_driver(&sd->super);
}

#line 191 "modules/afsocket/afsocket-grammar.y" /* yacc.c:359  */


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



#line 673 "modules/afsocket/afsocket-grammar.c" /* yacc.c:359  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  198
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  648

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   20047

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     192,   193,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   197,   196,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   194,     2,   195,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     2,     2,     2,     2,     2,     2,     2,
      82,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      83,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     2,     2,     2,     2,
      99,   100,   101,   102,   103,     2,     2,     2,     2,     2,
     104,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     105,   106,   107,     2,     2,     2,     2,     2,     2,     2,
     108,   109,     2,     2,     2,     2,     2,     2,     2,     2,
     110,   111,   112,     2,     2,     2,     2,     2,     2,     2,
     113,   114,   115,     2,     2,     2,     2,     2,     2,     2,
     116,   117,   118,     2,     2,     2,     2,     2,     2,     2,
     119,     2,   120,   121,   122,   123,   124,     2,     2,     2,
     125,   126,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     130,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     131,   132,   133,   134,   135,   136,     2,     2,     2,     2,
     137,   138,   139,     2,     2,     2,     2,     2,     2,     2,
     140,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     141,   127,     2,     2,     2,     2,     2,     2,     2,     2,
     142,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     143,   144,   145,     2,     2,     2,     2,     2,     2,     2,
     146,   147,   148,     2,     2,     2,     2,     2,     2,     2,
     149,   150,   151,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     152,   153,   128,     2,   129,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   154,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     155,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     156,   157,   158,   159,   160,   161,   162,   163,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     164,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     165,   166,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     167,   168,     2,     2,     2,     2,     2,     2,     2,     2,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     180,     2,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   547,   547,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   570,   571,   576,   575,   584,   583,   592,   593,
     597,   598,   599,   600,   601,   602,   603,   608,   616,   617,
     618,   619,   624,   624,   634,   634,   643,   644,   648,   652,
     653,   654,   655,   656,   657,   658,   663,   663,   673,   673,
     682,   683,   687,   689,   688,   698,   702,   703,   704,   708,
     713,   713,   723,   724,   728,   729,   730,   734,   739,   739,
     749,   750,   754,   755,   756,   760,   762,   761,   780,   779,
     792,   796,   796,   811,   812,   816,   817,   818,   822,   823,
     828,   827,   838,   837,   847,   848,   852,   853,   854,   855,
     859,   860,   861,   862,   867,   866,   877,   876,   887,   888,
     893,   894,   895,   896,   897,   897,   898,   898,   899,   900,
     901,   902,   906,   906,   910,   911,   915,   915,   919,   920,
     924,   925,   930,   931,   936,   935,   946,   945,   955,   956,
     960,   962,   961,   973,   978,   982,   981,   992,   993,   997,
     998,  1002,  1007,  1006,  1016,  1017,  1021,  1022,  1026,  1028,
    1027,  1045,  1047,  1046,  1059,  1060,  1061,  1062,  1067,  1068,
    1072,  1075,  1080,  1086,  1091,  1096,  1101,  1106,  1111,  1116,
    1120,  1124,  1129,  1134,  1139,  1145,  1150,  1155,  1156,  1160,
    1161,  1162,  1163,  1164,  1165,  1166,  1170,  1443,  1444,  1448,
    1449,  1450,  1454,  1455,  1459,  1466,  1473,  1480,  1487,  1488,
    1489,  1493,  1497,  1501,  1502,  1511,  1522,  1530,  1546,  1551,
    1573,  1580,  1581,  1582,  1604,  1637,  1638,  1639,  1640,  1641,
    1642,  1643,  1644,  1645,  1646,  1646,  1653,  1654,  1655,  1656,
    1657,  1657,  1658,  1658,  1659,  1659,  1663,  1664,  1665,  1670,
    1677,  1681,  1682,  1683,  1684,  1688,  1689,  1695,  1711,  1712,
    1713,  1714,  1715,  1722,  1723,  1724,  1725,  1726,  1732,  1732,
    1736,  1737,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,  1756,  1757,  1758,  1759,  1760,  1761
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_UNIX_STREAM", "KW_UNIX_DGRAM",
  "KW_TCP", "KW_UDP", "KW_TCP6", "KW_UDP6", "KW_NETWORK", "KW_TRANSPORT",
  "KW_IP_PROTOCOL", "KW_SYSTEMD_SYSLOG", "KW_IP_TTL", "KW_SO_BROADCAST",
  "KW_IP_TOS", "KW_IP_FREEBIND", "KW_SO_SNDBUF", "KW_SO_RCVBUF",
  "KW_SO_KEEPALIVE", "KW_TCP_KEEPALIVE_TIME", "KW_TCP_KEEPALIVE_PROBES",
  "KW_TCP_KEEPALIVE_INTVL", "KW_LISTEN_BACKLOG", "KW_SPOOF_SOURCE",
  "KW_KEEP_ALIVE", "KW_MAX_CONNECTIONS", "KW_LOCALIP", "KW_IP",
  "KW_LOCALPORT", "KW_DESTPORT", "KW_FAILOVER_SERVERS", "KW_FAILOVER",
  "KW_SERVERS", "KW_FAILBACK", "KW_TCP_PROBE_INTERVAL",
  "KW_SUCCESSFUL_PROBES_REQUIRED", "KW_TLS", "KW_PEER_VERIFY",
  "KW_KEY_FILE", "KW_CERT_FILE", "KW_DHPARAM_FILE", "KW_PKCS12_FILE",
  "KW_CA_DIR", "KW_CRL_DIR", "KW_TRUSTED_KEYS", "KW_TRUSTED_DN",
  "KW_CIPHER_SUITE", "KW_ECDH_CURVE_LIST", "KW_SSL_OPTIONS",
  "LL_CONTEXT_ROOT", "LL_CONTEXT_DESTINATION", "LL_CONTEXT_SOURCE",
  "LL_CONTEXT_PARSER", "LL_CONTEXT_REWRITE", "LL_CONTEXT_FILTER",
  "LL_CONTEXT_LOG", "LL_CONTEXT_BLOCK_DEF", "LL_CONTEXT_BLOCK_REF",
  "LL_CONTEXT_BLOCK_CONTENT", "LL_CONTEXT_BLOCK_ARG", "LL_CONTEXT_PRAGMA",
  "LL_CONTEXT_FORMAT", "LL_CONTEXT_TEMPLATE_FUNC", "LL_CONTEXT_INNER_DEST",
  "LL_CONTEXT_INNER_SRC", "LL_CONTEXT_CLIENT_PROTO",
  "LL_CONTEXT_SERVER_PROTO", "LL_CONTEXT_OPTIONS", "KW_SOURCE",
  "KW_FILTER", "KW_PARSER", "KW_DESTINATION", "KW_LOG", "KW_OPTIONS",
  "KW_INCLUDE", "KW_BLOCK", "KW_JUNCTION", "KW_CHANNEL", "KW_IF",
  "KW_ELSE", "KW_ELIF", "KW_INTERNAL", "KW_SYSLOG", "KW_MARK_FREQ",
  "KW_STATS_FREQ", "KW_STATS_LEVEL", "KW_STATS_LIFETIME", "KW_FLUSH_LINES",
  "KW_SUPPRESS", "KW_FLUSH_TIMEOUT", "KW_LOG_MSG_SIZE", "KW_FILE_TEMPLATE",
  "KW_PROTO_TEMPLATE", "KW_MARK_MODE", "KW_ENCODING", "KW_TYPE",
  "KW_STATS_MAX_DYNAMIC", "KW_MIN_IW_SIZE_PER_READER",
  "KW_CHAIN_HOSTNAMES", "KW_NORMALIZE_HOSTNAMES", "KW_KEEP_HOSTNAME",
  "KW_CHECK_HOSTNAME", "KW_BAD_HOSTNAME", "KW_KEEP_TIMESTAMP",
  "KW_USE_DNS", "KW_USE_FQDN", "KW_CUSTOM_DOMAIN", "KW_DNS_CACHE",
  "KW_DNS_CACHE_SIZE", "KW_DNS_CACHE_EXPIRE", "KW_DNS_CACHE_EXPIRE_FAILED",
  "KW_DNS_CACHE_HOSTS", "KW_PERSIST_ONLY", "KW_USE_RCPTID",
  "KW_USE_UNIQID", "KW_TZ_CONVERT", "KW_TS_FORMAT", "KW_FRAC_DIGITS",
  "KW_LOG_FIFO_SIZE", "KW_LOG_FETCH_LIMIT", "KW_LOG_IW_SIZE",
  "KW_LOG_PREFIX", "KW_PROGRAM_OVERRIDE", "KW_HOST_OVERRIDE",
  "KW_THROTTLE", "KW_THREADED", "KW_PASS_UNIX_CREDENTIALS",
  "KW_PERSIST_NAME", "KW_READ_OLD_RECORDS", "KW_FLAGS", "KW_PAD_SIZE",
  "KW_TIME_ZONE", "KW_RECV_TIME_ZONE", "KW_SEND_TIME_ZONE",
  "KW_LOCAL_TIME_ZONE", "KW_FORMAT", "KW_TIME_REOPEN", "KW_TIME_REAP",
  "KW_TIME_SLEEP", "KW_TMPL_ESCAPE", "KW_OPTIONAL", "KW_CREATE_DIRS",
  "KW_OWNER", "KW_GROUP", "KW_PERM", "KW_DIR_OWNER", "KW_DIR_GROUP",
  "KW_DIR_PERM", "KW_TEMPLATE", "KW_TEMPLATE_ESCAPE",
  "KW_TEMPLATE_FUNCTION", "KW_DEFAULT_FACILITY", "KW_DEFAULT_LEVEL",
  "KW_PORT", "KW_USE_TIME_RECVD", "KW_FACILITY", "KW_LEVEL", "KW_HOST",
  "KW_MATCH", "KW_MESSAGE", "KW_NETMASK", "KW_TAGS", "KW_NETMASK6",
  "KW_REWRITE", "KW_YES", "KW_NO", "KW_IFDEF", "KW_ENDIF", "LL_DOTDOT",
  "LL_DOTDOTDOT", "LL_IDENTIFIER", "LL_NUMBER", "LL_FLOAT", "LL_STRING",
  "LL_TOKEN", "LL_BLOCK", "LL_PRAGMA", "LL_EOL", "LL_ERROR",
  "KW_VALUE_PAIRS", "KW_EXCLUDE", "KW_PAIR", "KW_KEY", "KW_SCOPE",
  "KW_SHIFT", "KW_SHIFT_LEVELS", "KW_REKEY", "KW_ADD_PREFIX",
  "KW_REPLACE_PREFIX", "KW_ON_ERROR", "KW_RETRIES", "'('", "')'", "'{'",
  "'}'", "';'", "':'", "$accept", "start", "driver", "source_afunix",
  "source_afunix_dgram_params", "$@1", "source_afunix_stream_params",
  "$@2", "source_afunix_options", "source_afunix_option", "source_afinet",
  "source_afinet_udp_params", "$@3", "source_afinet_udp6_params", "$@4",
  "source_afinet_udp_options", "source_afinet_udp_option",
  "source_afinet_option", "source_afinet_tcp_params", "$@5",
  "source_afinet_tcp6_params", "$@6", "source_afinet_tcp_options",
  "source_afinet_tcp_option", "$@7", "source_afsocket_stream_params",
  "source_afsyslog", "source_afsyslog_params", "$@8",
  "source_afsyslog_options", "source_afsyslog_option", "source_afnetwork",
  "source_afnetwork_params", "$@9", "source_afnetwork_options",
  "source_afnetwork_option", "source_afsocket_transport", "$@10", "$@11",
  "source_systemd_syslog", "source_systemd_syslog_params", "$@12",
  "source_systemd_syslog_options", "source_systemd_syslog_option",
  "dest_afunix", "dest_afunix_dgram_params", "$@13",
  "dest_afunix_stream_params", "$@14", "dest_afunix_options",
  "dest_afunix_option", "dest_afinet", "dest_afinet_udp_params", "$@15",
  "dest_afinet_udp6_params", "$@16", "dest_afinet_udp_options",
  "dest_afinet_option", "$@17", "$@18", "dest_failover_options", "$@19",
  "dest_failover_modes_options", "dest_failback_options", "$@20",
  "dest_failback_probe_options", "dest_failback_probe_option",
  "dest_afinet_udp_option", "dest_afinet_tcp_params", "$@21",
  "dest_afinet_tcp6_params", "$@22", "dest_afinet_tcp_options",
  "dest_afinet_tcp_option", "$@23", "dest_afsocket_option",
  "dest_afsyslog", "dest_afsyslog_params", "$@24", "dest_afsyslog_options",
  "dest_afsyslog_option", "dest_afnetwork", "dest_afnetwork_params",
  "$@25", "dest_afnetwork_options", "dest_afnetwork_option",
  "dest_afsocket_transport", "$@26", "$@27", "afsocket_transport",
  "tls_options", "tls_option", "socket_option", "inet_socket_option",
  "inet_ip_protocol_option", "string", "yesno", "dnsmode",
  "nonnegative_integer64", "nonnegative_integer", "positive_integer64",
  "positive_integer", "string_or_number", "normalized_flag", "string_list",
  "string_list_build", "level_string", "facility_string", "driver_option",
  "source_driver_option", "dest_driver_option", "source_option", "$@36",
  "source_reader_option", "$@37", "$@38", "$@39",
  "source_reader_option_flags", "source_proto_option",
  "host_resolve_option", "msg_format_option", "dest_writer_option", "$@40",
  "dest_writer_options_flags", "file_perm_option", "template_option", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256, 20001, 20000, 20002, 20003, 20004, 20005, 20006, 20007,
   20008, 20009, 20010, 20011, 20012, 20013, 20014, 20015, 20016, 20017,
   20018, 20019, 20020, 20021, 20022, 20023, 20024, 20025, 20026, 20027,
   20028, 20029, 20030, 20031, 20032, 20033, 20034, 20035, 20036, 20037,
   20038, 20039, 20040, 20041, 20042, 20043, 20044, 20045, 20046, 20047,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19, 10000,
   10001, 10002, 10003, 10004, 10005, 10006, 10007, 10008, 10009, 10010,
   10011, 10012, 10020, 10060, 10071, 10072, 10073, 10074, 10075, 10076,
   10077, 10078, 10079, 10080, 10081, 10082, 10083, 10084, 10085, 10090,
   10091, 10092, 10093, 10094, 10100, 10110, 10111, 10112, 10120, 10121,
   10130, 10131, 10132, 10140, 10141, 10142, 10150, 10151, 10152, 10160,
   10162, 10163, 10164, 10165, 10166, 10170, 10171, 10231, 10302, 10304,
   10190, 10200, 10201, 10202, 10203, 10204, 10205, 10210, 10211, 10212,
   10220, 10230, 10240, 10250, 10251, 10252, 10260, 10261, 10262, 10270,
   10271, 10272, 10300, 10301, 10323, 10340, 10350, 10351, 10352, 10353,
   10354, 10355, 10356, 10357, 10370, 10380, 10381, 10410, 10411, 10420,
   10421, 10422, 10423, 10424, 10425, 10426, 10427, 10428, 10429, 10430,
   10500, 10502, 10503, 10504, 10505, 10506, 10507, 10508, 10509, 10510,
   10511, 10512,    40,    41,   123,   125,    59,    58
};
# endif

#define YYPACT_NINF -465

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-465)))

#define YYTABLE_NINF -245

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     123,   131,    63,    38,  -465,  -152,  -132,  -109,  -107,   -97,
     -95,   -81,   -77,  -465,  -465,  -465,  -465,   -63,   -50,   -44,
     -30,   -16,    -5,     4,     7,    31,  -465,  -465,  -465,  -465,
    -465,  -465,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,   -84,  -465,   -71,  -465,   -42,  -465,    -1,  -465,    14,
    -465,    32,  -465,    34,  -465,    37,  -465,    53,  -465,    60,
    -465,    69,   973,    71,  1017,    85,   973,    99,  1017,   105,
     530,   111,   163,   112,   572,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  1055,  -465,  1055,  -465,    52,    64,    74,   122,
     125,   127,   132,   133,   134,   136,   141,   143,   150,   152,
     153,   155,  -465,   160,   162,   167,   173,   174,   177,  -465,
    -465,  -465,   973,  -465,  -465,  -465,  -465,  -465,  -465,   256,
      15,   -29,  -465,  -465,  1017,  -465,  -465,  -465,  -465,  -465,
    -465,   178,   179,  -465,  -465,  -465,  -465,   530,  -465,  -465,
    -465,  -465,   163,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
     572,  -465,     0,   742,   622,   765,   792,   935,   218,   383,
     181,   182,   194,   195,   196,   198,   199,   200,   203,  -465,
    1055,  -465,  -465,  -465,  -465,  -465,  -465,   234,   -79,   234,
     -79,   234,   234,   -79,   234,   234,   234,   237,   -79,   237,
     -98,   -98,   262,   224,   -79,   237,   -98,    41,   -98,   262,
    -465,   225,   227,   229,   230,   231,   245,   246,   247,   248,
    -465,   116,   249,   250,  -465,   254,   255,   257,  -465,  -465,
      27,   273,   258,  -465,  -465,  -465,   259,   260,   261,   264,
     265,   266,   267,   269,   274,   276,   278,   282,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,   -36,   283,   284,   286,  -465,
    -465,  -465,   287,  -465,  -465,  -465,  -465,  -465,  -465,   288,
    -465,  -465,   289,   290,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   -79,   -79,   -79,    97,   101,  -130,   158,   190,
    -115,  -465,  -465,  -465,   291,  -465,  -465,  -465,   292,   305,
     306,   307,   308,   310,   311,   312,   313,  -465,  -465,   314,
     316,   317,   319,   322,  -465,  -465,  -465,   323,     5,   324,
     325,   326,    41,    41,   327,   328,   329,   -79,   -79,   -79,
     237,   -98,   -98,   -98,   -79,   -98,   331,   332,   333,   334,
    -465,   237,   -98,   -98,   -70,   -98,   335,   336,   337,  -465,
    -465,   338,     5,   -79,   234,   234,   234,   237,    -8,   237,
     234,   -98,   234,   -98,   -79,   342,   343,   344,   346,   347,
     350,  -465,   -98,   262,   262,   368,   369,   370,   262,   -79,
      27,   -79,   371,   372,   373,   375,  -465,   376,  -465,   377,
     378,  -465,  -465,   379,  -465,   380,   381,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,   385,   386,   388,   389,   392,   404,
     410,   411,   412,   413,   414,   415,  -465,  -465,   382,     5,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   417,   418,
     419,   420,   421,   422,   423,   424,   -98,   425,  -465,   -79,
      54,   -79,   -79,   426,   427,   429,  -465,  -465,   430,  -465,
     431,  -465,  -465,  -465,   433,  -465,   434,   435,   436,   437,
     438,   440,   441,   452,   453,   455,  -465,   -98,   462,   463,
     464,   468,   -98,   234,   -98,   -98,   -98,   -98,   471,   472,
     475,   -98,   270,     5,   476,   477,  -465,   478,     5,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   210,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   479,  -465,  -465,   480,   482,   483,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   484,
     485,   486,   487,   488,   492,  -465,  -465,  -465,   493,   416,
     494,   495,  -465,  -465,   496,  -465,   497,   498,   500,   501,
     502,   503,   504,   505,   506,   510,   512,   514,   516,   520,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,   -98,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   521,
    -465,   449,  -465,  -465,  -465,   523,  -465,   -24,   525,   526,
    -465,  -465,   237,   237,   527,   528,  -465,  -465
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    32,    48,    34,    68,    81,    60,   197,
     198,     0,    92,     0,    90,     0,   134,     0,   104,     0,
     136,     0,   106,     0,   152,     0,   145,     0,    16,     0,
      14,     0,   240,     0,   240,     0,   240,     0,   240,     0,
     240,     0,   240,     0,   240,    89,    95,    88,    95,   101,
     139,   100,   109,   103,   139,   102,   109,   151,   155,   144,
     148,    13,   240,    12,   240,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,   219,
      52,    47,   240,    55,   189,    45,   220,    44,    43,   234,
       0,     0,    28,    33,   240,    38,    31,    49,    30,    35,
      67,     0,     0,    78,    72,    74,    69,   240,    73,    75,
      80,    82,   240,    86,    87,    85,    59,    64,    66,    61,
     240,    65,   268,   268,   268,   268,   268,   268,   268,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
     240,    21,    24,    23,    22,    20,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   243,     0,     0,     0,   245,    36,
       0,     0,     0,    70,    83,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,    94,
      97,    98,   224,    99,    96,     0,     0,     0,     0,   114,
     116,   141,     0,   140,   138,   120,   118,   121,   119,     0,
     132,   108,     0,     0,   162,   156,   154,   157,   158,   149,
     147,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   204,   205,     0,   199,   200,   201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,     0,
       0,     0,     0,     0,   209,   210,   208,     0,   169,     0,
       0,     0,   248,   248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,     0,     0,    76,
     196,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,   275,     0,
       0,   277,   279,     0,   281,     0,     0,   283,   190,   187,
     191,   192,   185,   186,   188,   193,   195,   194,    58,    56,
      57,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   184,     0,   169,
     236,   238,   218,   247,   246,   237,   239,    42,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,   212,     0,
       0,     0,     0,     0,     0,     0,   217,   216,     0,   215,
       0,   164,   165,   166,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,   169,     0,     0,   159,     0,   169,    26,
      25,    27,   272,   274,   276,   278,   280,   282,     0,     0,
       0,     0,     0,     0,     0,   214,   214,     0,     0,   214,
      54,   168,   226,   227,   231,   225,   230,   228,   229,   232,
     213,   233,     0,   203,   202,     0,     0,     0,   250,   249,
     255,   257,   256,    77,    79,   143,   265,   259,   261,   260,
     266,   267,   221,   222,   270,   258,   264,   262,   263,     0,
       0,     0,     0,     0,     0,   110,   111,   113,     0,     0,
       0,     0,   112,   133,     0,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     254,   252,   251,   253,   284,   285,   286,   287,   288,   289,
     115,   214,   117,   142,   160,   163,   172,   171,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
     122,   125,   126,   123,   124,     0,   129,     0,     0,     0,
     127,   128,     0,     0,     0,     0,   130,   131
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   -83,  -465,
    -465,  -465,  -465,  -465,  -465,   -39,  -465,   183,  -465,  -465,
    -465,  -465,   -41,  -465,  -465,   -25,  -465,  -465,  -465,   357,
    -465,  -465,  -465,  -465,   297,  -465,   -62,  -465,  -465,  -465,
    -465,  -465,   402,  -465,  -465,  -465,  -465,  -465,  -465,   360,
    -465,  -465,  -465,  -465,  -465,  -465,   623,    25,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   628,  -465,  -465,    45,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,   548,  -465,  -465,    73,
    -347,  -465,   -46,   110,  -465,   -32,  -180,  -465,  -465,  -175,
    -465,  -199,  -178,  -465,  -464,   272,  -465,  -465,   253,    -2,
      87,  -465,  -465,    51,  -465,  -465,  -465,   -56,  -465,  -465,
    -465,   124,  -465,   242,  -465,  -465
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    26,    69,   104,    67,   102,   189,   190,
      27,    73,    74,    77,    78,   143,   144,   130,    71,    72,
      75,    76,   131,   132,   213,   133,    28,    83,    84,   169,
     170,    29,    79,    80,   156,   157,   158,   474,   242,    30,
      81,    82,   161,   162,    13,    53,    88,    51,    86,   172,
     259,    14,    57,    92,    61,    96,   175,   273,   385,   386,
     580,   631,   633,   634,   635,   637,   641,   281,    55,    90,
      59,    94,   174,   274,   387,   275,    15,    65,   100,   179,
     290,    16,    63,    98,   178,   286,   287,   584,   392,   159,
     438,   439,   134,   135,   361,   326,   308,   545,   303,   304,
     318,   319,   327,   487,   457,   458,   470,   468,   136,   137,
     277,   230,   231,   138,   139,   140,   141,   334,   234,   350,
     238,   278,   265,   488,   195,   381
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
     321,   638,   639,   466,   107,   476,   330,   110,   111,   112,
     310,   196,   171,   313,   309,   246,   311,   312,   320,   314,
     315,   316,   356,   357,   329,   147,   163,   578,    31,   149,
      32,   336,   400,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   155,   192,   406,   192,   168,
      33,   595,   596,   401,   358,   599,    17,    18,    19,    20,
      21,    22,    23,    49,   482,    24,    50,   191,   407,   191,
     164,   375,   376,    34,   247,    35,   305,   306,   248,   249,
     250,   220,   531,   307,   251,    36,   377,    37,   378,   379,
     193,    49,   193,   235,    50,   239,   232,   301,   171,    85,
     233,    38,   393,   394,   395,    39,   163,   397,   399,   252,
     403,   405,    87,   236,   237,   253,   261,   261,   125,    40,
     254,   255,   155,   165,     5,     6,     7,     8,     9,    10,
      11,   451,    41,   332,   192,   168,    25,   629,    42,   256,
     257,    89,   463,   194,   380,   194,   581,   448,   449,   450,
     164,   586,    43,    49,   455,   191,    50,   543,   481,   640,
     484,   258,   436,   437,     1,     2,    44,   107,   322,   323,
     110,   111,   112,   477,   331,   333,   335,    45,   193,   478,
     479,   480,    91,   -93,   491,   485,    46,   489,    49,    47,
     280,    50,   280,   285,   289,   499,   500,    93,   359,   505,
     504,   507,    49,   165,    12,    50,   346,   260,   260,   305,
     306,   347,   348,    48,   349,    95,   307,    97,   282,   152,
      99,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   194,   283,   246,   197,   266,   101,   267,   268,   269,
     270,   288,   288,   103,  -242,   284,   198,   145,  -242,   263,
     263,   145,   105,   154,   142,   123,   199,   167,    49,   324,
     325,    50,    49,   324,   325,    50,   443,   444,   146,   542,
     544,   546,   547,   124,   276,   276,   276,   276,   276,   276,
     396,   125,   148,   126,   398,  -244,   264,   264,   150,   127,
     333,   333,   247,   579,   160,   166,   248,   249,   250,   452,
     453,   454,   251,   456,   200,  -244,  -244,   201,   570,   202,
     464,   465,   467,   469,   203,   204,   205,   145,   206,    49,
     324,   325,    50,   207,   129,   208,   483,   252,   588,   486,
     154,   490,   209,   253,   210,   211,   125,   212,   254,   255,
     498,   402,   214,   167,   215,   221,   -84,   222,   506,   216,
     223,    49,   324,   325,    50,   217,   218,   256,   257,   219,
     240,   241,   272,   292,   293,   305,   306,   224,   225,   226,
     227,    49,   307,   404,    50,   228,   294,   295,   296,   258,
     297,   298,   299,   282,   152,   300,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   302,   283,   246,   317,
     266,  -153,   267,   268,   269,   270,   328,   337,   229,   338,
     284,   339,   340,   341,   456,   262,   262,   262,   262,   262,
     262,   262,   262,    49,   324,   325,    50,   342,   343,   344,
     345,   351,   352,   644,   645,   360,   353,   354,   173,   355,
     362,   363,   364,   365,   243,   486,   366,   367,   368,   369,
     569,   370,   571,   572,   573,   574,   371,   247,   372,   456,
     373,   248,   249,   250,   374,   382,   383,   251,   384,   388,
     389,   390,   391,   632,   408,   409,   587,   589,   590,   591,
     592,   593,   594,   456,   456,   597,   598,   456,   410,   411,
     412,   413,   252,   414,   415,   416,   417,   418,   253,   419,
     420,   125,   421,   254,   255,   422,   423,   440,   441,   442,
     445,   446,   447,   459,   460,   461,   462,   245,   471,   472,
     473,   475,   256,   257,   492,   493,   494,   272,   495,   496,
     151,   152,   497,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   258,   117,   118,   119,   120,   121,
     501,   502,   503,   508,   244,   509,   510,   153,   511,   512,
     513,   514,   515,   516,   517,   530,  -146,   518,   519,   456,
     520,   521,   151,   152,   522,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   523,   117,   118,   119,
     120,   121,   524,   525,   526,   527,   528,   529,   611,   153,
     532,   533,   534,   535,   536,   537,   538,   539,   541,   548,
     549,  -242,   550,   551,   552,  -242,   553,   554,   555,   556,
     557,   558,   123,   559,   560,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   561,   562,   246,   563,   266,
     124,   267,   268,   269,   270,   565,   566,   567,   125,   271,
     126,   568,  -244,  -242,   575,   576,   127,  -242,   577,   582,
     583,   585,   600,   601,   123,   602,   603,   604,   605,   606,
     607,   608,  -244,  -244,   128,   609,   610,   612,   613,   614,
     615,   616,   124,   617,   618,   619,   620,   621,   622,   623,
     125,   129,   126,   624,  -244,   625,   247,   626,   127,   627,
     248,   249,   250,   628,   630,   636,   251,   642,   643,   177,
     646,   647,   176,   -71,  -244,  -244,   128,   291,   540,   564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   129,     0,     0,     0,   253,     0,     0,
     125,     0,   254,   255,     0,     0,   107,     0,     0,   110,
     111,   112,     0,     0,     0,   -63,     0,   246,     0,     0,
       0,   256,   257,     0,     0,     0,   272,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   279,
     246,     0,   266,   258,   267,   268,   269,   270,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,  -135,     0,   246,     0,   266,
       0,   267,   268,   269,   270,     0,   247,     0,     0,   271,
     248,   249,   250,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,     0,     0,   248,   249,   250,     0,     0,     0,   251,
       0,   252,     0,     0,     0,     0,     0,   253,     0,     0,
     125,     0,   254,   255,     0,     0,   247,     0,     0,     0,
     248,   249,   250,     0,   252,     0,   251,     0,     0,     0,
     253,   256,   257,   125,     0,   254,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   258,   256,   257,     0,   253,     0,   272,
     125,     0,   254,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -91,   258,     0,     0,     0,
       0,   256,   257,     0,     0,     0,   272,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,  -105,   279,
     246,     0,   266,   258,   267,   268,   269,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -137,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,     0,     0,   248,   249,   250,     0,     0,     0,   251,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     0,     0,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,   252,     0,     0,     0,     0,     0,
     253,     0,     0,   125,  -242,   254,   255,     0,  -242,   107,
       0,     0,   110,   111,   112,   123,     0,     0,   116,     0,
     117,   118,     0,     0,   256,   257,     0,     0,     0,   272,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,     0,   126,     0,  -244,   258,     0,  -242,   127,
       0,     0,  -242,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,  -244,  -244,   128,  -107,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,   129,   125,  -242,   126,     0,  -244,
    -242,     0,     0,   127,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   -51,     0,     0,  -244,
    -244,   128,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,   180,   125,     0,   126,     0,  -244,   129,     0,
       0,   127,     0,     0,     0,     0,   181,   182,   183,   184,
     185,   186,   187,   188,     0,     0,     0,  -244,  -244,     0,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -19
};

static const yytype_int16 yycheck[] =
{
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     209,    35,    36,    83,    14,   362,   215,    17,    18,    19,
     200,   104,    84,   203,   199,    25,   201,   202,   208,   204,
     205,   206,     5,     6,   214,    76,    82,   501,     0,    78,
     192,   219,   172,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    80,   102,   172,   104,    84,
     192,   525,   526,   193,    37,   529,     3,     4,     5,     6,
       7,     8,     9,   171,    82,    12,   174,   102,   193,   104,
      82,   117,   118,   192,    84,   192,   165,   166,    88,    89,
      90,   132,   439,   172,    94,   192,   132,   192,   134,   135,
     102,   171,   104,   132,   174,   144,    91,   190,   170,   193,
      95,   192,   292,   293,   294,   192,   162,   295,   296,   119,
     298,   299,   193,   152,   153,   125,   172,   173,   128,   192,
     130,   131,   157,    82,     3,     4,     5,     6,     7,     8,
       9,   340,   192,   102,   190,   170,    83,   611,   192,   149,
     150,   193,   351,   102,   190,   104,   503,   337,   338,   339,
     162,   508,   192,   171,   344,   190,   174,   113,   367,   193,
     369,   171,   167,   168,    51,    52,   192,    14,   210,   211,
      17,    18,    19,   363,   216,   217,   218,   192,   190,   364,
     365,   366,   193,   193,   374,   370,   192,   372,   171,   192,
     175,   174,   177,   178,   179,   383,   384,   193,   240,   389,
     388,   391,   171,   162,    83,   174,   100,   172,   173,   165,
     166,   105,   106,   192,   108,   193,   172,   193,    10,    11,
     193,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   190,    24,    25,   192,    27,   193,    29,    30,    31,
      32,   178,   179,   193,    91,    37,   192,    74,    95,   172,
     173,    78,   193,    80,   193,   102,   192,    84,   171,   172,
     173,   174,   171,   172,   173,   174,   332,   333,   193,   459,
     460,   461,   462,   120,   174,   175,   176,   177,   178,   179,
     193,   128,   193,   130,   193,   132,   172,   173,   193,   136,
     332,   333,    84,    33,   193,   193,    88,    89,    90,   341,
     342,   343,    94,   345,   192,   152,   153,   192,   493,   192,
     352,   353,   354,   355,   192,   192,   192,   144,   192,   171,
     172,   173,   174,   192,   171,   192,   368,   119,   518,   371,
     157,   373,   192,   125,   192,   192,   128,   192,   130,   131,
     382,   193,   192,   170,   192,    99,   193,   101,   390,   192,
     104,   171,   172,   173,   174,   192,   192,   149,   150,   192,
     192,   192,   154,   192,   192,   165,   166,   121,   122,   123,
     124,   171,   172,   193,   174,   129,   192,   192,   192,   171,
     192,   192,   192,    10,    11,   192,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   172,    24,    25,   172,
      27,   193,    29,    30,    31,    32,   192,   192,   162,   192,
      37,   192,   192,   192,   456,   172,   173,   174,   175,   176,
     177,   178,   179,   171,   172,   173,   174,   192,   192,   192,
     192,   192,   192,   642,   643,   172,   192,   192,    88,   192,
     192,   192,   192,   192,   157,   487,   192,   192,   192,   192,
     492,   192,   494,   495,   496,   497,   192,    84,   192,   501,
     192,    88,    89,    90,   192,   192,   192,    94,   192,   192,
     192,   192,   192,    34,   193,   193,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   193,   193,
     193,   193,   119,   193,   193,   193,   193,   193,   125,   193,
     193,   128,   193,   130,   131,   193,   193,   193,   193,   193,
     193,   193,   193,   192,   192,   192,   192,   170,   193,   193,
     193,   193,   149,   150,   192,   192,   192,   154,   192,   192,
      10,    11,   192,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   171,    25,    26,    27,    28,    29,
     192,   192,   192,   192,   162,   193,   193,    37,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   192,   192,   611,
     192,   192,    10,    11,   192,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   192,    25,    26,    27,
      28,    29,   192,   192,   192,   192,   192,   192,   192,    37,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,    91,   193,   193,   193,    95,   193,   193,   193,   193,
     193,   193,   102,   193,   193,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   193,   193,    25,   193,    27,
     120,    29,    30,    31,    32,   193,   193,   193,   128,    37,
     130,   193,   132,    91,   193,   193,   136,    95,   193,   193,
     193,   193,   193,   193,   102,   193,   193,   193,   193,   193,
     193,   193,   152,   153,   154,   193,   193,   193,   193,   193,
     193,   193,   120,   193,   193,   193,   193,   193,   193,   193,
     128,   171,   130,   193,   132,   193,    84,   193,   136,   193,
      88,    89,    90,   193,   193,   192,    94,   192,   192,    96,
     193,   193,    94,   193,   152,   153,   154,   179,   456,   487,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   171,    -1,    -1,    -1,   125,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    14,    -1,    -1,    17,
      18,    19,    -1,    -1,    -1,   193,    -1,    25,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,   154,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    24,
      25,    -1,    27,   171,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   193,    -1,    25,    -1,    27,
      -1,    29,    30,    31,    32,    -1,    84,    -1,    -1,    37,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    84,    -1,    -1,    -1,
      88,    89,    90,    -1,   119,    -1,    94,    -1,    -1,    -1,
     125,   149,   150,   128,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   171,   149,   150,    -1,   125,    -1,   154,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   171,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,   154,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   193,    24,
      25,    -1,    27,   171,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,   128,    91,   130,   131,    -1,    95,    14,
      -1,    -1,    17,    18,    19,   102,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    -1,   130,    -1,   132,   171,    -1,    91,   136,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,   152,   153,   154,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,   171,   128,    91,   130,    -1,   132,
      95,    -1,    -1,   136,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,   152,
     153,   154,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,    -1,   132,   171,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,    -1,    -1,   152,   153,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    51,    52,   199,   200,     3,     4,     5,     6,     7,
       8,     9,    83,   242,   249,   274,   279,     3,     4,     5,
       6,     7,     8,     9,    12,    83,   201,   208,   224,   229,
     237,     0,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   171,
     174,   245,   293,   243,   293,   266,   293,   250,   293,   268,
     293,   252,   293,   280,   293,   275,   293,   204,   293,   202,
     293,   216,   217,   209,   210,   218,   219,   211,   212,   230,
     231,   238,   239,   225,   226,   193,   246,   193,   244,   193,
     267,   193,   251,   193,   269,   193,   253,   193,   281,   193,
     276,   193,   205,   193,   203,   193,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    25,    26,    27,
      28,    29,    37,   102,   120,   128,   130,   136,   154,   171,
     215,   220,   221,   223,   290,   291,   306,   307,   311,   312,
     313,   314,   193,   213,   214,   215,   193,   220,   193,   213,
     193,    10,    11,    37,   215,   223,   232,   233,   234,   287,
     193,   240,   241,   290,   307,   311,   193,   215,   223,   227,
     228,   234,   247,   247,   270,   254,   270,   254,   282,   277,
     127,   141,   142,   143,   144,   145,   146,   147,   148,   206,
     207,   223,   290,   307,   311,   322,   206,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   222,   192,   192,   192,   192,   192,   192,
     220,    99,   101,   104,   121,   122,   123,   124,   129,   162,
     309,   310,    91,    95,   316,   132,   152,   153,   318,   213,
     192,   192,   236,   232,   240,   227,    25,    84,    88,    89,
      90,    94,   119,   125,   130,   131,   149,   150,   171,   248,
     273,   290,   306,   308,   319,   320,    27,    29,    30,    31,
      32,    37,   154,   255,   271,   273,   291,   308,   319,    24,
     255,   265,    10,    24,    37,   255,   283,   284,   287,   255,
     278,   284,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   206,   172,   296,   297,   165,   166,   172,   294,   297,
     294,   297,   297,   294,   297,   297,   297,   172,   298,   299,
     294,   299,   293,   293,   172,   173,   293,   300,   192,   294,
     299,   293,   102,   293,   315,   293,   300,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   100,   105,   106,   108,
     317,   192,   192,   192,   192,   192,     5,     6,    37,   293,
     172,   292,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   117,   118,   132,   134,   135,
     190,   323,   192,   192,   192,   256,   257,   272,   192,   192,
     192,   192,   286,   294,   294,   294,   193,   300,   193,   300,
     172,   193,   193,   300,   193,   300,   172,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   167,   168,   288,   289,
     193,   193,   193,   315,   315,   193,   193,   193,   294,   294,
     294,   299,   293,   293,   293,   294,   293,   302,   303,   192,
     192,   192,   192,   299,   293,   293,    83,   293,   305,   293,
     304,   193,   193,   193,   235,   193,   288,   294,   297,   297,
     297,   299,    82,   293,   299,   297,   293,   301,   321,   297,
     293,   294,   192,   192,   192,   192,   192,   192,   293,   300,
     300,   192,   192,   192,   300,   294,   293,   294,   192,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     193,   288,   193,   193,   193,   193,   193,   193,   193,   193,
     303,   193,   294,   113,   294,   295,   294,   294,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   321,   193,   193,   193,   193,   293,
     297,   293,   293,   293,   293,   193,   193,   193,   302,    33,
     258,   288,   193,   193,   285,   193,   288,   293,   294,   293,
     293,   293,   293,   293,   293,   302,   302,   293,   293,   302,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   192,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   302,
     193,   259,    34,   260,   261,   262,   192,   263,    35,    36,
     193,   264,   192,   192,   299,   299,   193,   193
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   198,   199,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   201,   201,   203,   202,   205,   204,   206,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   208,   208,
     208,   208,   210,   209,   212,   211,   213,   213,   214,   215,
     215,   215,   215,   215,   215,   215,   217,   216,   219,   218,
     220,   220,   221,   222,   221,   221,   223,   223,   223,   224,
     226,   225,   227,   227,   228,   228,   228,   229,   231,   230,
     232,   232,   233,   233,   233,   234,   235,   234,   236,   234,
     237,   239,   238,   240,   240,   241,   241,   241,   242,   242,
     244,   243,   246,   245,   247,   247,   248,   248,   248,   248,
     249,   249,   249,   249,   251,   250,   253,   252,   254,   254,
     255,   255,   255,   255,   256,   255,   257,   255,   255,   255,
     255,   255,   259,   258,   260,   260,   262,   261,   263,   263,
     264,   264,   265,   265,   267,   266,   269,   268,   270,   270,
     271,   272,   271,   273,   274,   276,   275,   277,   277,   278,
     278,   279,   281,   280,   282,   282,   283,   283,   284,   285,
     284,   284,   286,   284,   287,   287,   287,   287,   288,   288,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   290,   290,   290,   290,   291,
     291,   291,   291,   291,   291,   291,   292,   293,   293,   294,
     294,   294,   295,   295,   296,   297,   298,   299,   300,   300,
     300,   301,   302,   303,   303,   304,   305,   305,   306,   307,
     307,   308,   308,   308,   308,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   310,   309,   311,   311,   311,   311,
     312,   311,   313,   311,   314,   311,   315,   315,   315,   316,
     316,   317,   317,   317,   317,   318,   318,   318,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   320,   319,
     321,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   323,   323,   323,   323,   323,   323
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     0,     3,     0,     3,     2,     0,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     0,     2,     0,     2,     2,     0,     1,     4,
       4,     4,     4,     1,     1,     1,     0,     2,     0,     2,
       2,     0,     1,     0,     5,     1,     4,     4,     4,     4,
       0,     2,     2,     0,     1,     1,     1,     4,     0,     2,
       2,     0,     1,     1,     1,     1,     0,     5,     0,     5,
       4,     0,     2,     2,     0,     1,     1,     1,     4,     4,
       0,     3,     0,     3,     2,     0,     1,     1,     1,     1,
       4,     4,     4,     4,     0,     3,     0,     3,     2,     0,
       4,     4,     4,     4,     0,     5,     0,     5,     1,     1,
       1,     1,     0,     6,     1,     0,     0,     5,     2,     0,
       4,     4,     1,     4,     0,     3,     0,     3,     2,     0,
       1,     0,     5,     4,     4,     0,     3,     2,     0,     1,
       1,     4,     0,     3,     2,     0,     1,     1,     1,     0,
       5,     4,     0,     5,     4,     4,     4,     4,     2,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     4,     4,     4,     4,     1,
       4,     4,     4,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     1,     1,     4,     1,
       1,     4,     4,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     2,     4,     4,     4,     4,
       0,     2,     0,     2,     0,     2,     2,     2,     0,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     2,
       2,     0,     4,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     4,     3,     4,     4,     4,     4,     4,     4
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
      yyerror (&yylloc, lexer, instance, arg, YY_("syntax error: cannot back up")); \
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
                  Type, Value, Location, lexer, instance, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (instance);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, lexer, instance, arg);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, CfgLexer *lexer, LogDriver **instance, gpointer arg)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , lexer, instance, arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, instance, arg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, CfgLexer *lexer, LogDriver **instance, gpointer arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (instance);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 171: /* LL_IDENTIFIER  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4195 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 174: /* LL_STRING  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4201 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 176: /* LL_BLOCK  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4207 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 293: /* string  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4213 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 300: /* string_or_number  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4219 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;

    case 301: /* normalized_flag  */
#line 434 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1257  */
      { free(((*yyvaluep).cptr)); }
#line 4225 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CfgLexer *lexer, LogDriver **instance, gpointer arg)
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
        case 2:
#line 548 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            *instance = (yyvsp[0].ptr);
            if (yychar != YYEMPTY)
              cfg_lexer_unput_token(lexer, &yylval);
            YYACCEPT;
          }
#line 4524 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 3:
#line 557 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4530 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 558 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4536 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 559 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4542 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 560 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4548 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 7:
#line 561 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4554 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 8:
#line 562 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4560 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 563 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4566 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 10:
#line 564 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4572 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 565 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 4578 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 570 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4584 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 571 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4590 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 576 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            create_and_set_unix_dgram_or_systemd_syslog_source((yyvsp[0].cptr), configuration);
	  }
#line 4598 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 579 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4604 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 584 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            create_and_set_unix_stream_or_systemd_syslog_source((yyvsp[0].cptr), configuration);
	  }
#line 4612 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 587 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4618 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 598 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4624 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 599 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4630 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 601 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4636 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 602 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_driver->optional = (yyvsp[-1].num); }
#line 4642 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 604 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixSourceDriver *self = (AFUnixSourceDriver*) last_driver;
	    afunix_sd_set_pass_unix_credentials(self, (yyvsp[-1].num));
	  }
#line 4651 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 609 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixSourceDriver *self = (AFUnixSourceDriver*) last_driver;
	    afunix_sd_set_create_dirs(self, (yyvsp[-1].num));
	  }
#line 4660 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 616 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4666 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 617 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4672 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 618 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4678 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 619 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4684 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 624 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetSourceDriver *d = afinet_sd_new_udp(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4694 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 629 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4700 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 634 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetSourceDriver *d = afinet_sd_new_udp6(configuration);

            afinet_grammar_set_source_driver(d);
          }
#line 4710 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 639 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4716 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 652 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4722 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 653 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4728 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 654 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4734 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 655 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_sd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 4740 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 663 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetSourceDriver *d = afinet_sd_new_tcp(configuration);

	    afinet_grammar_set_source_driver(d);
	  }
#line 4750 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 668 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4756 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 673 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetSourceDriver *d = afinet_sd_new_tcp6(configuration);

	    afinet_grammar_set_source_driver(d);
	  }
#line 4766 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 678 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4772 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 689 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            gchar buf[256];

	    last_tls_context = tls_context_new(TM_SERVER, cfg_lexer_format_location(lexer, &(yylsp[0]), buf, sizeof(buf)));
	  }
#line 4782 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 695 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_sd_set_tls_context(last_driver, last_tls_context);
          }
#line 4790 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 698 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4796 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 702 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_sd_set_keep_alive(last_driver, (yyvsp[-1].num)); }
#line 4802 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 703 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_sd_set_max_connections(last_driver, (yyvsp[-1].num)); }
#line 4808 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 704 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_sd_set_listen_backlog(last_driver, (yyvsp[-1].num)); }
#line 4814 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 708 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4820 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 713 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* we use transport(tcp) transport by default */
            AFInetSourceDriver *d = afinet_sd_new_syslog(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4831 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 719 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4837 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 730 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4843 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 734 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4849 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 739 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* we use transport(tcp) transport by default */
            AFInetSourceDriver *d = afinet_sd_new_network(configuration);

            afinet_grammar_set_source_driver(d);
	  }
#line 4860 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 745 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4866 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 756 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {}
#line 4872 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 762 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_SERVER_PROTO;

            p = cfg_find_plugin(configuration, context, (yyvsp[0].cptr));
            if (p)
              {
                /* for transports with grammar */
                if (p->parser)
                  {
                    LogProtoServerFactory *sf = cfg_parse_plugin(configuration, p, &(yylsp[0]), last_proto_server_options);
                    ((AFSocketSourceDriver *) last_driver)->proto_factory = sf;
                  }
              }
            transport_mapper_set_transport(last_transport_mapper, (yyvsp[0].cptr));
          }
#line 4893 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 778 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { free((yyvsp[-2].cptr)); }
#line 4899 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 78:
#line 780 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            gchar buf[256];

	    last_tls_context = tls_context_new(TM_SERVER, cfg_lexer_format_location(lexer, &(yylsp[0]), buf, sizeof(buf)));
	  }
#line 4909 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 786 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_sd_set_tls_context(last_driver, last_tls_context);
          }
#line 4917 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 792 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4923 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 796 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
#if ! SYSLOG_NG_ENABLE_SYSTEMD
            msg_error("systemd-syslog() source cannot be enabled and it is not"
                      " functioning. Please compile your syslog-ng with --enable-systemd"
                      " flag", cfg_lexer_format_location_tag(lexer, &(yylsp[0])));
            YYERROR;
#else
            SystemDSyslogSourceDriver *d = systemd_syslog_sd_new(configuration, FALSE);
            systemd_syslog_grammar_set_source_driver(d);
#endif
          }
#line 4939 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 807 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; }
#line 4945 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 822 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4951 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 823 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4957 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 90:
#line 828 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixDestDriver *d = afunix_dd_new_dgram((yyvsp[0].cptr), configuration);

      afunix_grammar_set_dest_driver(d);
	  }
#line 4967 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 833 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4973 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 838 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFUnixDestDriver *d = afunix_dd_new_stream((yyvsp[0].cptr), configuration);

      afunix_grammar_set_dest_driver(d);
	  }
#line 4983 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 843 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 4989 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 859 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 4995 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 860 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5001 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 861 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5007 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 862 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5013 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 867 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_udp((yyvsp[0].cptr), configuration);

      afinet_grammar_set_dest_driver(d);
	  }
#line 5023 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 872 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5029 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 877 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_udp6((yyvsp[0].cptr), configuration);

	    afinet_grammar_set_dest_driver(d);
	  }
#line 5039 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 882 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5045 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 893 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_localip(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5051 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 894 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_localport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5057 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 895 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_destport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5063 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 896 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_destport(last_driver, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5069 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 897 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_enable_failover(last_driver); }
#line 5075 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 897 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_add_failovers(last_driver, (yyvsp[-1].ptr)); }
#line 5081 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 898 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_enable_failover(last_driver); }
#line 5087 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 898 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5093 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 906 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_add_failovers(last_driver, (yyvsp[-1].ptr)); }
#line 5099 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 126:
#line 915 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_enable_failback(last_driver); }
#line 5105 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 130:
#line 924 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_failback_tcp_probe_interval(last_driver, (yyvsp[-1].num)); }
#line 5111 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 925 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_failback_successful_probes_required(last_driver, (yyvsp[-1].num)); }
#line 5117 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 133:
#line 931 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_spoof_source(last_driver, (yyvsp[-1].num)); }
#line 5123 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 134:
#line 936 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_tcp((yyvsp[0].cptr), configuration);

      afinet_grammar_set_dest_driver(d);
	  }
#line 5133 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 135:
#line 941 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5139 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 946 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    AFInetDestDriver *d = afinet_dd_new_tcp6((yyvsp[0].cptr), configuration);

	    afinet_grammar_set_dest_driver(d);
	  }
#line 5149 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 951 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5155 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 962 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            gchar buf[256];
	    last_tls_context = tls_context_new(TM_CLIENT, cfg_lexer_format_location(lexer, &(yylsp[0]), buf, sizeof(buf)));
	  }
#line 5164 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 142:
#line 967 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    afinet_dd_set_tls_context(last_driver, last_tls_context);
          }
#line 5172 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 973 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afsocket_dd_set_keep_alive(last_driver, (yyvsp[-1].num)); }
#line 5178 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 144:
#line 978 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5184 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 982 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetDestDriver *d = afinet_dd_new_syslog((yyvsp[0].cptr), configuration);

            afinet_grammar_set_dest_driver(d);
	  }
#line 5194 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 146:
#line 987 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5200 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1002 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 5206 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1007 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            AFInetDestDriver *d = afinet_dd_new_network((yyvsp[0].cptr), configuration);

            afinet_grammar_set_dest_driver(d);
	  }
#line 5216 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1012 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = last_driver; free((yyvsp[-2].cptr)); }
#line 5222 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1028 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_CLIENT_PROTO;

            p = cfg_find_plugin(configuration, context, (yyvsp[0].cptr));
            if (p)
              {
                /* for transports with grammar */
                if (p->parser)
                  {
                    LogProtoClientFactory *cf = cfg_parse_plugin(configuration, p, &(yylsp[0]), last_proto_client_options);
                    ((AFSocketDestDriver *) last_driver)->proto_factory = cf;
                  }
              }
            transport_mapper_set_transport(last_transport_mapper, (yyvsp[0].cptr));
          }
#line 5243 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1044 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { free((yyvsp[-2].cptr)); }
#line 5249 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1045 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { afinet_dd_set_spoof_source(last_driver, (yyvsp[-1].num)); }
#line 5255 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1047 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            gchar buf[256];

            last_tls_context = tls_context_new(TM_CLIENT, cfg_lexer_format_location(lexer, &(yylsp[0]), buf, sizeof(buf)));
          }
#line 5265 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1053 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            afinet_dd_set_tls_context(last_driver, last_tls_context);
          }
#line 5273 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1059 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "tcp"); }
#line 5279 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1060 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "udp"); }
#line 5285 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1061 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_transport(last_transport_mapper, "tls"); }
#line 5291 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1062 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { transport_mapper_set_address_family(last_transport_mapper, (yyvsp[-1].num)); }
#line 5297 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1072 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
}
#line 5304 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1076 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    gint verify_mode = (yyvsp[-1].num) ? (TVM_REQUIRED | TVM_TRUSTED) : (TVM_OPTIONAL | TVM_UNTRUSTED);
	    tls_context_set_verify_mode(last_tls_context, verify_mode);
          }
#line 5313 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1081 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    CHECK_ERROR(tls_context_set_verify_mode_by_name(last_tls_context, (yyvsp[-1].cptr)), (yylsp[-1]),
	                "unknown peer-verify() argument");
            free((yyvsp[-1].cptr));
          }
#line 5323 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1087 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    tls_context_set_key_file(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5332 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1092 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    tls_context_set_cert_file(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5341 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1097 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_context_set_dhparam_file(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5350 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1102 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_context_set_pkcs12_file(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5359 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1107 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    tls_context_set_ca_dir(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5368 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1112 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    tls_context_set_crl_dir(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5377 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1117 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_session_set_trusted_fingerprints(last_tls_context, (yyvsp[-1].ptr));
          }
#line 5385 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1121 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_session_set_trusted_dn(last_tls_context, (yyvsp[-1].ptr));
          }
#line 5393 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1125 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_context_set_cipher_suite(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
	  }
#line 5402 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1130 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            tls_context_set_ecdh_curve_list(last_tls_context, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5411 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1135 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(tls_context_set_ssl_options_by_name(last_tls_context, (yyvsp[-1].ptr)), (yylsp[-1]),
                        "unknown ssl-options() argument");
	  }
#line 5420 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1139 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
}
#line 5427 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1146 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
		CHECK_ERROR((yyvsp[-1].num) <= G_MAXINT, (yylsp[-1]), "Invalid so_sndbuf, it has to be less than %d", G_MAXINT);
		last_sock_options->so_sndbuf = (yyvsp[-1].num);
	}
#line 5436 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1151 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
		CHECK_ERROR((yyvsp[-1].num) <= G_MAXINT, (yylsp[-1]), "Invalid so_rcvbuf, it has to be less than %d", G_MAXINT);
		last_sock_options->so_rcvbuf = (yyvsp[-1].num);
	}
#line 5445 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1155 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_broadcast = (yyvsp[-1].num); }
#line 5451 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1156 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_sock_options->so_keepalive = (yyvsp[-1].num); }
#line 5457 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1161 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->ip_ttl = (yyvsp[-1].num); }
#line 5463 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1162 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->ip_tos = (yyvsp[-1].num); }
#line 5469 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1163 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->ip_freebind = (yyvsp[-1].num); }
#line 5475 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1164 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_time = (yyvsp[-1].num); }
#line 5481 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1165 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_intvl = (yyvsp[-1].num); }
#line 5487 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1166 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((SocketOptionsInet *) last_sock_options)->tcp_keepalive_probes = (yyvsp[-1].num); }
#line 5493 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1171 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
          CHECK_ERROR((yyvsp[0].num) == 4 || (yyvsp[0].num) == 6, (yylsp[0]), "ip-protocol option can only be 4 or 6!");
          if ((yyvsp[0].num) == 4)
            {
              (yyval.num) = AF_INET;
            }
          else
            {
              (yyval.num) = AF_INET6;
            }
        }
#line 5509 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1448 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 1; }
#line 5515 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1449 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 5521 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1450 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5527 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1454 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5533 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1455 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 2; }
#line 5539 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1460 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(((yyvsp[0].num) >= 0), (yylsp[0]), "It cannot be negative");
          }
#line 5547 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1467 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(((yyvsp[0].num) <= G_MAXINT32), (yylsp[0]), "Must be smaller than 2^31");
          }
#line 5555 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1474 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(((yyvsp[0].num) > 0), (yylsp[0]), "Must be positive");
          }
#line 5563 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1481 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(((yyvsp[0].num) <= G_MAXINT32), (yylsp[0]), "Must be smaller than 2^31");
          }
#line 5571 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1487 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 5577 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1488 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 5583 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1489 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = strdup(lexer->token_text->str); }
#line 5589 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1493 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.cptr) = normalize_flag((yyvsp[0].cptr)); free((yyvsp[0].cptr)); }
#line 5595 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1497 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 5601 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1501 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = g_list_prepend((yyvsp[0].ptr), g_strdup((yyvsp[-1].cptr))); free((yyvsp[-1].cptr)); }
#line 5607 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1502 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 5613 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1512 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    /* return the numeric value of the "level" */
	    int n = syslog_name_lookup_level_by_name((yyvsp[0].cptr));
	    CHECK_ERROR((n != -1), (yylsp[0]), "Unknown priority level\"%s\"", (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
            (yyval.num) = n;
	  }
#line 5625 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1523 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            /* return the numeric value of facility */
	    int n = syslog_name_lookup_facility_by_name((yyvsp[0].cptr));
	    CHECK_ERROR((n != -1), (yylsp[0]), "Unknown facility \"%s\"", (yyvsp[0].cptr));
	    free((yyvsp[0].cptr));
	    (yyval.num) = n;
	  }
#line 5637 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1530 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = LOG_SYSLOG; }
#line 5643 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1546 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_pipe_set_persist_name(&last_driver->super, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5649 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1552 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_INNER_SRC;
            gpointer value;

            p = cfg_find_plugin(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            value = cfg_parse_plugin(configuration, p, &(yylsp[0]), last_driver);

            free((yyvsp[0].cptr));
            if (!value)
              {
                YYERROR;
              }
            if (!log_driver_add_plugin(last_driver, (LogDriverPlugin *) value))
              {
                log_driver_plugin_free(value);
                CHECK_ERROR(TRUE, (yylsp[0]), "Error while registering the plugin %s in this destination", (yyvsp[0].cptr));
              }
          }
#line 5675 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1580 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((LogDestDriver *) last_driver)->log_fifo_size = (yyvsp[-1].num); }
#line 5681 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1581 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { ((LogDestDriver *) last_driver)->throttle = (yyvsp[-1].num); }
#line 5687 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1583 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            Plugin *p;
            gint context = LL_CONTEXT_INNER_DEST;
            gpointer value;

            p = cfg_find_plugin(configuration, context, (yyvsp[0].cptr));
            CHECK_ERROR(p, (yylsp[0]), "%s plugin %s not found", cfg_lexer_lookup_context_name_by_type(context), (yyvsp[0].cptr));

            value = cfg_parse_plugin(configuration, p, &(yylsp[0]), last_driver);

            free((yyvsp[0].cptr));
            if (!value)
              {
                YYERROR;
              }
            if (!log_driver_add_plugin(last_driver, (LogDriverPlugin *) value))
              {
                log_driver_plugin_free(value);
                CHECK_ERROR(TRUE, (yylsp[0]), "Error while registering the plugin %s in this destination", (yyvsp[0].cptr));
              }
          }
#line 5713 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1637 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->init_window_size = (yyvsp[-1].num); }
#line 5719 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1638 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->chain_hostnames = (yyvsp[-1].num); }
#line 5725 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1639 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_hostname = (yyvsp[-1].num); }
#line 5731 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1640 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5737 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1641 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->host_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5743 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1642 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { gchar *p = strrchr((yyvsp[-1].cptr), ':'); if (p) *p = 0; last_source_options->program_override = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5749 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1643 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->keep_timestamp = (yyvsp[-1].num); }
#line 5755 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1644 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options->read_old_records = (yyvsp[-1].num); }
#line 5761 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1645 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_source_options_set_tags(last_source_options, (yyvsp[-1].ptr)); }
#line 5767 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1646 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options = &last_source_options->host_resolve_options; }
#line 5773 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1653 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->check_hostname = (yyvsp[-1].num); }
#line 5779 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1655 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->fetch_limit = (yyvsp[-1].num); }
#line 5785 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1656 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_reader_options->parse_options.format = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5791 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1657 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_source_options = &last_reader_options->super; }
#line 5797 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1658 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_proto_server_options = &last_reader_options->proto_options.super; }
#line 5803 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1659 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_msg_format_options = &last_reader_options->parse_options; }
#line 5809 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1663 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { CHECK_ERROR(log_reader_options_process_flag(last_reader_options, (yyvsp[-1].cptr)), (yylsp[-1]), "Unknown flag %s", (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5815 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1664 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_reader_options_process_flag(last_reader_options, "check-hostname"); }
#line 5821 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1671 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
            CHECK_ERROR(log_proto_server_options_set_encoding(last_proto_server_options, (yyvsp[-1].cptr)),
                        (yylsp[-1]),
                        "unknown encoding %s", (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5832 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1677 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_proto_server_options->max_msg_size = (yyvsp[-1].num); }
#line 5838 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1681 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_fqdn = (yyvsp[-1].num); }
#line 5844 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1682 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns = (yyvsp[-1].num); }
#line 5850 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1683 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->use_dns_cache = (yyvsp[-1].num); }
#line 5856 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1684 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_host_resolve_options->normalize_hostnames = (yyvsp[-1].num); }
#line 5862 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1688 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_msg_format_options->recv_time_zone = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5868 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1690 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    if (last_msg_format_options->default_pri == 0xFFFF)
	      last_msg_format_options->default_pri = LOG_USER;
	    last_msg_format_options->default_pri = (last_msg_format_options->default_pri & ~7) | (yyvsp[-1].num);
          }
#line 5878 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1696 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    if (last_msg_format_options->default_pri == 0xFFFF)
	      last_msg_format_options->default_pri = LOG_NOTICE;
	    last_msg_format_options->default_pri = (last_msg_format_options->default_pri & 7) | (yyvsp[-1].num);
          }
#line 5888 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1711 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->options = (yyvsp[-1].num); }
#line 5894 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1712 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->flush_lines = (yyvsp[-1].num); }
#line 5900 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1713 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->flush_timeout = (yyvsp[-1].num); }
#line 5906 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1714 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->suppress = (yyvsp[-1].num); }
#line 5912 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1715 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
                                                  GError *error = NULL;

                                                  last_writer_options->template = cfg_tree_check_inline_template(&configuration->tree, (yyvsp[-1].cptr), &error);
                                                  CHECK_ERROR_GERROR(last_writer_options->template != NULL, (yylsp[-1]), error, "Error compiling template");
	                                          free((yyvsp[-1].cptr));
	                                        }
#line 5924 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1722 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_writer_options_set_template_escape(last_writer_options, (yyvsp[-1].num)); }
#line 5930 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1723 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->padding = (yyvsp[-1].num); }
#line 5936 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1724 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_writer_options->mark_freq = (yyvsp[-1].num); }
#line 5942 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1725 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { log_writer_options_set_mark_mode(last_writer_options, "internal"); }
#line 5948 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1727 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
	    CHECK_ERROR(cfg_lookup_mark_mode((yyvsp[-1].cptr)) != -1, (yylsp[-1]), "illegal mark mode: %s", (yyvsp[-1].cptr));
            log_writer_options_set_mark_mode(last_writer_options, (yyvsp[-1].cptr));
            free((yyvsp[-1].cptr));
          }
#line 5958 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1732 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options = &last_writer_options->template_options; }
#line 5964 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1736 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = log_writer_options_lookup_flag((yyvsp[-1].cptr)) | (yyvsp[0].num); free((yyvsp[-1].cptr)); }
#line 5970 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1737 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 5976 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1741 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_uid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5982 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1742 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_file_uid(last_file_perm_options); }
#line 5988 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1743 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_gid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 5994 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1744 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_file_gid(last_file_perm_options); }
#line 6000 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1745 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_file_perm(last_file_perm_options, (yyvsp[-1].num)); }
#line 6006 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1746 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_file_perm(last_file_perm_options); }
#line 6012 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1747 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_uid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6018 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1748 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_dir_uid(last_file_perm_options); }
#line 6024 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1749 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_gid(last_file_perm_options, (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6030 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1750 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_dir_gid(last_file_perm_options); }
#line 6036 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1751 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_set_dir_perm(last_file_perm_options, (yyvsp[-1].num)); }
#line 6042 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1752 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { file_perm_options_dont_change_dir_perm(last_file_perm_options); }
#line 6048 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1756 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->ts_format = cfg_ts_format_value((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6054 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1757 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->frac_digits = (yyvsp[-1].num); }
#line 6060 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1758 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6066 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1759 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_SEND] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6072 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1760 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    { last_template_options->time_zone[LTZ_LOCAL] = g_strdup((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 6078 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1762 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1646  */
    {
          gint on_error;

          CHECK_ERROR(log_template_on_error_parse((yyvsp[-1].cptr), &on_error), (yylsp[-1]), "Invalid on-error() setting");
          free((yyvsp[-1].cptr));

          log_template_options_set_on_error(last_template_options, on_error);
        }
#line 6091 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
    break;


#line 6095 "modules/afsocket/afsocket-grammar.c" /* yacc.c:1646  */
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
      yyerror (&yylloc, lexer, instance, arg, YY_("syntax error"));
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
        yyerror (&yylloc, lexer, instance, arg, yymsgp);
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
                      yytoken, &yylval, &yylloc, lexer, instance, arg);
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
                  yystos[yystate], yyvsp, yylsp, lexer, instance, arg);
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
  yyerror (&yylloc, lexer, instance, arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, lexer, instance, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, lexer, instance, arg);
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
#line 1843 "modules/afsocket/afsocket-grammar.y" /* yacc.c:1906  */

