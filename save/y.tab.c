/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "toyParser.y"
    void yyerror (char *s);
    #include <stdlib.h>
    #include <stdio.h>
    extern int yylex();
    extern FILE * yyin;
#line 27 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define BOOLEAN 257
#define BREAK 258
#define CLASS 259
#define DOUBLE 260
#define ELSE 261
#define EXTENDS 262
#define FALSE 263
#define FOR 264
#define ID 265
#define IF 266
#define IMPLEMENTS 267
#define INT 268
#define INTERFACE 269
#define NEWARRAY 270
#define PRINTLN 271
#define READLN 272
#define RETURN 273
#define STRING 274
#define TRUE 275
#define VOID 276
#define WHILE 277
#define PLUS 278
#define MINUS 279
#define MULTIPLICATION 280
#define DIVISION 281
#define MOD 282
#define LESS 283
#define LESSEQUAL 284
#define GREATER 285
#define GREATEREQUAL 286
#define EQUAL 287
#define NOTEQUAL 288
#define AND 289
#define OR 290
#define NOT 291
#define ASSIGNOP 292
#define SEMICOLON 293
#define COMMA 294
#define PERIOD 295
#define LEFTPAREN 296
#define RIGHTPAREN 297
#define LEFTBRACKET 298
#define RIGHTBRACKET 299
#define LEFTBRACE 300
#define RIGHTBRACE 301
#define INTCONSTANT 302
#define DOUBLECONSTANT 303
#define STRINGCONSTANT 304
#define BOOLEANCONSTANT 305
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    2,    6,    7,    7,
    7,    7,    7,    7,    3,    3,    8,    8,   10,   10,
    4,    4,   13,   13,   11,   11,   12,   12,   15,   15,
   14,   14,    5,   16,   16,   17,   17,    9,   18,   18,
   19,   19,   20,   20,   20,   20,   20,   20,   20,   20,
   21,   21,   22,   22,   30,   29,   23,   24,   25,   26,
   27,   31,   31,   28,   28,   32,   32,   32,   33,   33,
   33,   33,   34,   34,   34,   35,   35,   35,   35,   35,
   36,   36,   36,   37,   37,   38,   38,   39,   39,   41,
   41,   41,   41,   41,   40,   40,   40,   43,   43,   44,
   44,   42,   42,   42,   42,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    2,    2,    1,    1,
    1,    1,    3,    1,    6,    6,    1,    0,    3,    1,
    7,    6,    2,    1,    2,    0,    2,    0,    3,    1,
    1,    1,    5,    2,    0,    6,    6,    4,    2,    0,
    2,    0,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    0,    1,    1,    5,    7,    5,    9,    2,    3,
    5,    3,    1,    3,    1,    2,    2,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    6,    1,    1,    1,    1,    4,    3,    4,    6,    1,
    0,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   11,    0,   10,   14,    9,    0,   12,    0,    0,    0,
    3,    4,    5,    6,    0,    0,    0,    0,    0,    2,
    7,    0,    0,    0,    0,    0,    0,    0,   13,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   17,
    0,    0,   27,    0,    0,    0,   33,   34,    0,    8,
    0,    0,    0,   22,   31,   32,    0,    0,    0,    0,
   19,    0,   16,   15,   29,   21,   23,    0,    0,    0,
    0,    0,    0,   39,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  102,  103,  104,  105,
   50,    0,    0,    0,   44,   45,   46,   47,   48,   49,
   51,   53,   54,   65,    0,    0,    0,    0,    0,    0,
   87,    0,   89,   92,   94,   37,   36,   59,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   38,   41,   43,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  100,    0,    0,    0,    0,   90,   60,    0,
   64,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   86,    0,   88,   97,    0,    0,    0,
    0,   98,    0,    0,    0,    0,   96,    0,    0,   62,
   55,    0,    0,   61,   57,    0,   99,    0,   91,    0,
    0,   56,    0,    0,   58,    0,    0,    0,
};
static const YYINT yydgoto[] = {                          9,
   10,   11,   12,   13,   14,   15,   38,   39,   91,   40,
   25,   32,   57,   58,   43,   35,   36,   71,   92,   93,
   94,   95,   96,   97,   98,   99,  100,  101,  102,  103,
  153,  104,  105,  106,  107,  108,  109,  110,  111,  112,
  113,  114,  115,  154,
};
static const YYINT yysindex[] = {                       241,
    0, -207,    0,    0,    0, -199,    0, -195,    0,  241,
    0,    0,    0,    0, -280, -260, -202, -217, -209,    0,
    0, -192, -210, -166, -132, -107,  276,  276,    0,    0,
 -109, -140, -103, -248, -160, -107, -123, -246, -127,    0,
 -117, -121,    0, -250, -115, -114,    0,    0,  276,    0,
  -94,  -94, -109,    0,    0,    0,  -93,  303,  276,  276,
    0,  276,    0,    0,    0,    0,    0, -110,  -90,  276,
 -128, -105,  -82,    0,  -81,  -63, -275,  -59,  -41,  -40,
  -37, -113,  -34, -197, -197,  -86,    0,    0,    0,    0,
    0,  -87, -128,  -55,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -159, -249, -172, -252,  -29,  -13,
    0,   27,    0,    0,    0,    0,    0,    0, -113,   11,
 -113, -113,  -24, -113,  -15,  -12, -113, -159, -159,    2,
    0,    0,    0, -197, -197, -197, -197, -197, -197, -197,
 -197, -197, -197, -197, -197, -197, -197,   19, -113,    7,
   10,    4,    0,    6,   23,   32,   24,    0,    0,   31,
    0, -249, -249, -249, -172, -172, -252, -252, -252, -252,
  -29,  -29,  -13,    0, -273,    0,    0,   42, -113, -113,
 -113,    0, -128,  276,   49, -128,    0,   50,   47,    0,
    0,   43, -205,    0,    0, -113,    0,   81,    0,   51,
   54,    0, -128, -113,    0,   64,   81,   43,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  362,
    0,    0,    0,    0,    0,    0, -244,    0,    0,    0,
    0,   70,    0,    0,   65,   63,   69,   69,    0,    0,
    0,    0,    0,    0,    0,   63,   72,    0,    0,    0,
    0,   83,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   71,   69,   69,
    0, -176,    0,    0,    0,    0,    0,    0,    0, -176,
 -285,    0,    0,    0,    0,    0,  -58,    0,    0,    0,
    0,   77,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -285,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  273,  231,  171,   74,  -84,  -14,
    0,  -36,    0,    0,    0,    0,    0,    0,   77,    0,
   87,    0,    0,    0,    0,    0,    0,  281,  288,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   88,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  238,  258,  265,  193,  200,   96,  118,  140,  162,
   30,   52,    8,    0,  -36,    0,    0,    0,    0,   87,
    0,    0,   77,    0,    0,   77,    0,    0,    0,    0,
    0, -224,    0,    0,    0, -117,    0,    0,    0,    0,
    0,    0,   77,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                       376,
    0,   40,  -30,    0,    0,    5,    1,  -16,   67,  338,
    0,    0,  330,    0,  339,  355,    0,  324,  312, -112,
  -80,    0,    0,    0,    0,    0,    0, -118,  -98,    0,
 -124,  320,   55,   12,   17,   -8,   21,  262,  263,  261,
  266,    0,    0,  230,
};
#define YYTABLESIZE 587
static const YYINT yytable[] = {                        157,
   16,  126,  152,  155,   22,  152,    1,   52,  160,    3,
   16,   41,   21,   56,    4,   42,   46,    5,   50,  120,
  121,  148,   26,    7,  149,    8,   34,   56,  137,  138,
  178,   37,   37,   53,  143,  144,   34,   23,  150,   53,
   53,   53,   68,   69,   16,   53,   53,   53,   53,   23,
   54,   23,   53,   37,   53,   26,  190,   17,   16,   24,
  188,  152,  152,   37,   37,   18,   53,   77,   53,   19,
  191,   53,   79,  195,   81,   53,   53,   53,   53,   53,
   53,   40,   26,   55,  192,  206,   27,   40,   29,   40,
  205,  199,   23,   40,   40,   40,   40,   55,   30,  202,
   40,   70,   40,   28,   87,   88,   89,   90,  208,   70,
  139,  140,  141,  142,   40,  200,   40,   63,   64,   40,
  134,  135,  136,   40,   40,   40,   40,   40,   40,   75,
  167,  168,  169,  170,   31,   76,   77,   78,  128,  129,
   47,   79,   80,   81,   82,  162,  163,  164,   83,    1,
   84,   77,    3,  165,  166,   42,   79,    4,   81,   44,
    5,   45,   85,  171,  172,   84,    7,   86,   33,   51,
   49,   62,   53,   87,   88,   89,   90,   85,   77,   52,
   59,   60,   86,   79,  193,   81,   72,  116,   87,   88,
   89,   90,   84,   83,   83,   83,   83,   83,   83,   83,
   83,   83,   83,   83,   85,   62,   73,   66,   83,   83,
  117,  118,   83,  131,   83,   87,   88,   89,   90,   95,
   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,
   95,   95,  119,   95,   95,   95,  122,  133,   95,   95,
   95,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,  123,  124,   93,   93,  125,  145,
   93,  127,   93,   85,   85,   85,   85,   85,   85,   85,
   85,   85,   85,   85,   85,  151,  146,  156,   85,   85,
  159,  158,   85,  177,   85,   84,   84,   84,   84,   84,
   84,   84,   84,   84,   84,   84,   84,  181,  161,  179,
   84,   84,  182,  198,   84,  180,   84,   81,   81,   81,
   81,   81,   81,   81,   81,   81,   81,   81,  147,  183,
  185,  148,   81,   81,  149,  184,   81,  186,   81,   82,
   82,   82,   82,   82,   82,   82,   82,   82,   82,   82,
  187,  194,  196,  197,   82,   82,  201,  203,   82,  204,
   82,   80,   80,   80,   80,   80,   80,   80,   80,   80,
  207,    1,    8,   35,   28,   18,   80,   80,   20,   52,
   80,   24,   80,   76,   76,   76,   76,   76,   76,   76,
   76,   76,   30,  101,   63,   20,   61,   67,   76,   76,
   48,   65,   76,   74,   76,   77,   77,   77,   77,   77,
   77,   77,   77,   77,  132,  130,  173,  175,  174,  189,
   77,   77,  176,    0,   77,    0,   77,   78,   78,   78,
   78,   78,   78,   78,   78,   78,    0,    0,    0,    0,
    0,    0,   78,   78,    0,    0,   78,    0,   78,   79,
   79,   79,   79,   79,   79,   79,   79,   79,   75,   75,
   75,   75,   75,    0,   79,   79,    0,    0,   79,    0,
   79,    0,    0,   75,   75,    0,    0,   75,    0,   75,
   73,   73,   73,   73,   73,    0,    0,   74,   74,   74,
   74,   74,    0,    0,    0,   73,   73,    0,    0,   73,
    0,   73,   74,   74,    0,    0,   74,    1,   74,    2,
    3,    0,    0,    0,    0,    4,    0,    0,    5,    6,
   72,   72,   72,    0,    7,    0,    8,   69,   69,   69,
    0,    0,    0,   72,   72,    0,    0,   72,    0,   72,
   69,   69,    1,    0,   69,    3,   69,   70,   70,   70,
    4,    0,    0,    5,   71,   71,   71,    0,    0,    7,
   70,   70,    0,    0,   70,    0,   70,   71,   71,    1,
    0,   71,    3,   71,    0,   68,   68,    4,    0,   68,
    5,   68,    0,   66,   66,    0,    7,   66,    8,   66,
   67,   67,    0,    0,   67,    0,   67,
};
static const YYINT yycheck[] = {                        124,
    0,   82,  121,  122,  265,  124,  257,  293,  127,  260,
   10,   28,  293,   44,  265,  301,  265,  268,  265,  295,
  296,  295,  267,  274,  298,  276,   26,   58,  278,  279,
  149,   27,   28,  258,  287,  288,   36,  298,  119,  264,
  265,  266,   59,   60,   44,  270,  271,  272,  273,  298,
  301,  298,  277,   49,  279,  300,  181,  265,   58,  262,
  179,  180,  181,   59,   60,  265,  291,  265,  293,  265,
  183,  296,  270,  186,  272,  300,  301,  302,  303,  304,
  305,  258,  300,   44,  183,  204,  296,  264,  299,  266,
  203,  297,  298,  270,  271,  272,  273,   58,  265,  198,
  277,   62,  279,  296,  302,  303,  304,  305,  207,   70,
  283,  284,  285,  286,  291,  196,  293,   51,   52,  296,
  280,  281,  282,  300,  301,  302,  303,  304,  305,  258,
  139,  140,  141,  142,  267,  264,  265,  266,   84,   85,
  301,  270,  271,  272,  273,  134,  135,  136,  277,  257,
  279,  265,  260,  137,  138,  265,  270,  265,  272,  300,
  268,  265,  291,  143,  144,  279,  274,  296,  276,  297,
  294,  300,  294,  302,  303,  304,  305,  291,  265,  297,
  296,  296,  296,  270,  184,  272,  297,  293,  302,  303,
  304,  305,  279,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,  291,  300,  297,  301,  293,  294,
  293,  293,  297,  301,  299,  302,  303,  304,  305,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  289,  290,  296,  292,  293,  294,  296,  293,  297,  298,
  299,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  290,  296,  296,  293,  294,  296,  289,
  297,  296,  299,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,  289,  265,  290,  302,  293,  294,
  293,  297,  297,  265,  299,  278,  279,  280,  281,  282,
  283,  284,  285,  286,  287,  288,  289,  294,  297,  293,
  293,  294,  297,  261,  297,  296,  299,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  287,  288,  292,  297,
  297,  295,  293,  294,  298,  294,  297,  297,  299,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  299,  293,  293,  297,  293,  294,  266,  297,  297,  296,
  299,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  297,    0,  293,  301,  300,  297,  293,  294,  297,  293,
  297,  301,  299,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  300,  297,  297,   10,   49,   58,  293,  294,
   36,   53,  297,   70,  299,  278,  279,  280,  281,  282,
  283,  284,  285,  286,   93,   86,  145,  147,  146,  180,
  293,  294,  147,   -1,  297,   -1,  299,  278,  279,  280,
  281,  282,  283,  284,  285,  286,   -1,   -1,   -1,   -1,
   -1,   -1,  293,  294,   -1,   -1,  297,   -1,  299,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  278,  279,
  280,  281,  282,   -1,  293,  294,   -1,   -1,  297,   -1,
  299,   -1,   -1,  293,  294,   -1,   -1,  297,   -1,  299,
  278,  279,  280,  281,  282,   -1,   -1,  278,  279,  280,
  281,  282,   -1,   -1,   -1,  293,  294,   -1,   -1,  297,
   -1,  299,  293,  294,   -1,   -1,  297,  257,  299,  259,
  260,   -1,   -1,   -1,   -1,  265,   -1,   -1,  268,  269,
  280,  281,  282,   -1,  274,   -1,  276,  280,  281,  282,
   -1,   -1,   -1,  293,  294,   -1,   -1,  297,   -1,  299,
  293,  294,  257,   -1,  297,  260,  299,  280,  281,  282,
  265,   -1,   -1,  268,  280,  281,  282,   -1,   -1,  274,
  293,  294,   -1,   -1,  297,   -1,  299,  293,  294,  257,
   -1,  297,  260,  299,   -1,  293,  294,  265,   -1,  297,
  268,  299,   -1,  293,  294,   -1,  274,  297,  276,  299,
  293,  294,   -1,   -1,  297,   -1,  299,
};
#define YYFINAL 9
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#define YYUNDFTOKEN 352
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"BOOLEAN","BREAK","CLASS",
"DOUBLE","ELSE","EXTENDS","FALSE","FOR","ID","IF","IMPLEMENTS","INT",
"INTERFACE","NEWARRAY","PRINTLN","READLN","RETURN","STRING","TRUE","VOID",
"WHILE","PLUS","MINUS","MULTIPLICATION","DIVISION","MOD","LESS","LESSEQUAL",
"GREATER","GREATEREQUAL","EQUAL","NOTEQUAL","AND","OR","NOT","ASSIGNOP",
"SEMICOLON","COMMA","PERIOD","LEFTPAREN","RIGHTPAREN","LEFTBRACKET",
"RIGHTBRACKET","LEFTBRACE","RIGHTBRACE","INTCONSTANT","DOUBLECONSTANT",
"STRINGCONSTANT","BOOLEANCONSTANT",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Program",
"Program : Decl",
"Program : Decl Program",
"Decl : VariableDecl",
"Decl : FunctionDecl",
"Decl : ClassDecl",
"Decl : InterfaceDecl",
"VariableDecl : Variable SEMICOLON",
"Variable : Type ID",
"Type : INT",
"Type : DOUBLE",
"Type : BOOLEAN",
"Type : STRING",
"Type : Type LEFTBRACKET RIGHTBRACKET",
"Type : ID",
"FunctionDecl : Type ID LEFTPAREN Formals RIGHTPAREN StmtBlock",
"FunctionDecl : VOID ID LEFTPAREN Formals RIGHTPAREN StmtBlock",
"Formals : _VariableList",
"Formals :",
"_VariableList : Variable COMMA _VariableList",
"_VariableList : Variable",
"ClassDecl : CLASS ID _MaybeExtends _MaybeImplements LEFTBRACE _Fields RIGHTBRACE",
"ClassDecl : CLASS ID _MaybeExtends _MaybeImplements LEFTBRACE RIGHTBRACE",
"_Fields : Field _Fields",
"_Fields : Field",
"_MaybeExtends : EXTENDS ID",
"_MaybeExtends :",
"_MaybeImplements : IMPLEMENTS _IDList",
"_MaybeImplements :",
"_IDList : ID COMMA _IDList",
"_IDList : ID",
"Field : VariableDecl",
"Field : FunctionDecl",
"InterfaceDecl : INTERFACE ID LEFTBRACE _MaybePrototypes RIGHTBRACE",
"_MaybePrototypes : Prototype _MaybePrototypes",
"_MaybePrototypes :",
"Prototype : Type ID LEFTPAREN Formals RIGHTPAREN SEMICOLON",
"Prototype : VOID ID LEFTPAREN Formals RIGHTPAREN SEMICOLON",
"StmtBlock : LEFTBRACE _MaybeVariableDecls _MaybeStmts RIGHTBRACE",
"_MaybeVariableDecls : VariableDecl _MaybeVariableDecls",
"_MaybeVariableDecls :",
"_MaybeStmts : Stmt _MaybeStmts",
"_MaybeStmts :",
"Stmt : _MaybeExpr SEMICOLON",
"Stmt : IfStmt",
"Stmt : WhileStmt",
"Stmt : ForStmt",
"Stmt : BreakStmt",
"Stmt : ReturnStmt",
"Stmt : PrintStmt",
"Stmt : StmtBlock",
"_MaybeExpr : Expr",
"_MaybeExpr :",
"IfStmt : _MatchedIfStmt",
"IfStmt : _UnmatchedIfStmt",
"_UnmatchedIfStmt : IF LEFTPAREN Expr RIGHTPAREN Stmt",
"_MatchedIfStmt : IF LEFTPAREN Expr RIGHTPAREN _MatchedIfStmt ELSE _MatchedIfStmt",
"WhileStmt : WHILE LEFTPAREN Expr RIGHTPAREN Stmt",
"ForStmt : FOR LEFTPAREN _MaybeExpr SEMICOLON Expr SEMICOLON _MaybeExpr RIGHTPAREN Stmt",
"BreakStmt : BREAK SEMICOLON",
"ReturnStmt : RETURN _MaybeExpr SEMICOLON",
"PrintStmt : PRINTLN LEFTPAREN _ExprList RIGHTPAREN SEMICOLON",
"_ExprList : Expr COMMA _ExprList",
"_ExprList : Expr",
"Expr : LEFTPAREN _Expr1 RIGHTPAREN",
"Expr : _Expr1",
"_Expr1 : MINUS _Expr2",
"_Expr1 : NOT _Expr2",
"_Expr1 : _Expr2",
"_Expr2 : _Expr2 MULTIPLICATION _Expr3",
"_Expr2 : _Expr2 DIVISION _Expr3",
"_Expr2 : _Expr2 MOD _Expr3",
"_Expr2 : _Expr3",
"_Expr3 : _Expr3 PLUS _Expr4",
"_Expr3 : _Expr3 MINUS _Expr4",
"_Expr3 : _Expr4",
"_Expr4 : _Expr4 LESS _Expr5",
"_Expr4 : _Expr4 LESSEQUAL _Expr5",
"_Expr4 : _Expr4 GREATER _Expr5",
"_Expr4 : _Expr4 GREATEREQUAL _Expr5",
"_Expr4 : _Expr5",
"_Expr5 : _Expr5 EQUAL _Expr6",
"_Expr5 : _Expr5 NOTEQUAL _Expr6",
"_Expr5 : _Expr6",
"_Expr6 : _Expr6 AND _Expr7",
"_Expr6 : _Expr7",
"_Expr7 : _Expr7 OR _Expr8",
"_Expr7 : _Expr8",
"_Expr8 : Lvalue ASSIGNOP _Expr9",
"_Expr8 : _Expr9",
"_Expr9 : READLN LEFTPAREN RIGHTPAREN",
"_Expr9 : NEWARRAY LEFTPAREN INTCONSTANT COMMA Type RIGHTPAREN",
"_Expr9 : Constant",
"_Expr9 : Lvalue",
"_Expr9 : Call",
"Lvalue : ID",
"Lvalue : Lvalue LEFTBRACKET Expr RIGHTBRACKET",
"Lvalue : Lvalue PERIOD ID",
"Call : ID LEFTPAREN Actuals RIGHTPAREN",
"Call : ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN",
"Actuals : _ExprList",
"Actuals :",
"Constant : INTCONSTANT",
"Constant : DOUBLECONSTANT",
"Constant : STRINGCONSTANT",
"Constant : BOOLEANCONSTANT",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 169 "toyParser.y"
int main(int argc, char * argv[]) {
    if(argv[1] == NULL)
    {
        printf("Usage: ./toyParser filename.txt\n");
        return 1;
    }
    yyin = fopen(argv[1], "r");
    int ntoken = yyparse();
    while(ntoken) {
        ntoken = yyparse();
    }

    return 0;
}
void yyerror (char *s) {
    fprintf (stderr, "%s\n", s);
    exit(EXIT_FAILURE);
}
#line 538 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 18 "toyParser.y"
	{printf("[reduce 1]"); printf("[accept]\n");}
break;
case 2:
#line 19 "toyParser.y"
	{printf("[reduce 2]");}
break;
case 3:
#line 21 "toyParser.y"
	{printf("[reduce 3]");}
break;
case 4:
#line 22 "toyParser.y"
	{printf("[reduce 4]");}
break;
case 5:
#line 23 "toyParser.y"
	{printf("[reduce 5]");}
break;
case 6:
#line 24 "toyParser.y"
	{printf("[reduce 6]");}
break;
case 7:
#line 26 "toyParser.y"
	{printf("[reduce 7]");}
break;
case 8:
#line 28 "toyParser.y"
	{printf("[reduce 8]");}
break;
case 9:
#line 30 "toyParser.y"
	{printf("[reduce 9]");}
break;
case 10:
#line 31 "toyParser.y"
	{printf("[reduce 10]");}
break;
case 11:
#line 32 "toyParser.y"
	{printf("[reduce 11]");}
break;
case 12:
#line 33 "toyParser.y"
	{printf("[reduce 12]");}
break;
case 13:
#line 34 "toyParser.y"
	{printf("[reduce 13]");}
break;
case 14:
#line 35 "toyParser.y"
	{printf("[reduce 14]");}
break;
case 15:
#line 37 "toyParser.y"
	{printf("[reduce 15]");}
break;
case 16:
#line 38 "toyParser.y"
	{printf("[reduce 16]");}
break;
case 17:
#line 40 "toyParser.y"
	{printf("[reduce 17]");}
break;
case 18:
#line 41 "toyParser.y"
	{printf("[reduce 18]");}
break;
case 19:
#line 43 "toyParser.y"
	{printf("[reduce 19]");}
break;
case 20:
#line 44 "toyParser.y"
	{printf("[reduce 20]");}
break;
case 21:
#line 46 "toyParser.y"
	{printf("[reduce 21]");}
break;
case 22:
#line 47 "toyParser.y"
	{printf("[reduce 22]");}
break;
case 23:
#line 49 "toyParser.y"
	{printf("[reduce 23]");}
break;
case 24:
#line 50 "toyParser.y"
	{printf("[reduce 24]");}
break;
case 25:
#line 52 "toyParser.y"
	{printf("[reduce 25]");}
break;
case 26:
#line 53 "toyParser.y"
	{printf("[reduce 26]");}
break;
case 27:
#line 55 "toyParser.y"
	{printf("[reduce 28]");}
break;
case 28:
#line 56 "toyParser.y"
	{printf("[reduce 29]");}
break;
case 29:
#line 58 "toyParser.y"
	{printf("[reduce 30]");}
break;
case 30:
#line 59 "toyParser.y"
	{printf("[reduce 31]");}
break;
case 31:
#line 61 "toyParser.y"
	{printf("[reduce 32]");}
break;
case 32:
#line 62 "toyParser.y"
	{printf("[reduce 33]");}
break;
case 33:
#line 64 "toyParser.y"
	{printf("[reduce 34]");}
break;
case 34:
#line 66 "toyParser.y"
	{printf("[reduce 35]");}
break;
case 35:
#line 67 "toyParser.y"
	{printf("[reduce 36]");}
break;
case 36:
#line 69 "toyParser.y"
	{printf("[reduce 37]");}
break;
case 37:
#line 70 "toyParser.y"
	{printf("[reduce 38]");}
break;
case 38:
#line 72 "toyParser.y"
	{printf("[reduce 39]");}
break;
case 39:
#line 74 "toyParser.y"
	{printf("[reduce 40]");}
break;
case 40:
#line 75 "toyParser.y"
	{printf("[reduce 41]");}
break;
case 41:
#line 77 "toyParser.y"
	{printf("[reduce 42]");}
break;
case 42:
#line 78 "toyParser.y"
	{printf("[reduce 43]");}
break;
case 43:
#line 80 "toyParser.y"
	{printf("[reduce 44]");}
break;
case 44:
#line 81 "toyParser.y"
	{printf("[reduce 45]");}
break;
case 45:
#line 82 "toyParser.y"
	{printf("[reduce 46]");}
break;
case 46:
#line 83 "toyParser.y"
	{printf("[reduce 47]");}
break;
case 47:
#line 84 "toyParser.y"
	{printf("[reduce 48]");}
break;
case 48:
#line 85 "toyParser.y"
	{printf("[reduce 49]");}
break;
case 49:
#line 86 "toyParser.y"
	{printf("[reduce 50]");}
break;
case 50:
#line 87 "toyParser.y"
	{printf("[reduce 51]");}
break;
case 51:
#line 89 "toyParser.y"
	{printf("[reduce 52]");}
break;
case 52:
#line 90 "toyParser.y"
	{printf("[reduce 53]");}
break;
case 53:
#line 92 "toyParser.y"
	{printf("[reduce 54]");}
break;
case 54:
#line 93 "toyParser.y"
	{printf("[reduce 55]");}
break;
case 55:
#line 95 "toyParser.y"
	{printf("[reduce ]");}
break;
case 56:
#line 97 "toyParser.y"
	{printf("[reduce ]");}
break;
case 57:
#line 99 "toyParser.y"
	{printf("[reduce 56]");}
break;
case 58:
#line 101 "toyParser.y"
	{printf("[reduce 57]");}
break;
case 59:
#line 103 "toyParser.y"
	{printf("[reduce 58]");}
break;
case 60:
#line 105 "toyParser.y"
	{printf("[reduce 59]");}
break;
case 61:
#line 107 "toyParser.y"
	{printf("[reduce 61]");}
break;
case 62:
#line 109 "toyParser.y"
	{printf("[reduce 62]");}
break;
case 63:
#line 110 "toyParser.y"
	{printf("[reduce 63]");}
break;
case 64:
#line 112 "toyParser.y"
	{printf("[reduce 68]");}
break;
case 66:
#line 115 "toyParser.y"
	{printf("[reduce 74]");}
break;
case 67:
#line 116 "toyParser.y"
	{printf("[reduce 83]");}
break;
case 69:
#line 119 "toyParser.y"
	{printf("[reduce 71]");}
break;
case 70:
#line 120 "toyParser.y"
	{printf("[reduce 72]");}
break;
case 71:
#line 121 "toyParser.y"
	{printf("[reduce 73]");}
break;
case 73:
#line 124 "toyParser.y"
	{printf("[reduce 69]");}
break;
case 74:
#line 125 "toyParser.y"
	{printf("[reduce 70]");}
break;
case 76:
#line 128 "toyParser.y"
	{printf("[reduce 75]");}
break;
case 77:
#line 129 "toyParser.y"
	{printf("[reduce 76]");}
break;
case 78:
#line 130 "toyParser.y"
	{printf("[reduce 77]");}
break;
case 79:
#line 131 "toyParser.y"
	{printf("[reduce 78]");}
break;
case 81:
#line 134 "toyParser.y"
	{printf("[reduce 79]");}
break;
case 82:
#line 135 "toyParser.y"
	{printf("[reduce 80]");}
break;
case 84:
#line 138 "toyParser.y"
	{printf("[reduce 81]");}
break;
case 86:
#line 141 "toyParser.y"
	{printf("[reduce 82]");}
break;
case 88:
#line 144 "toyParser.y"
	{printf("[reduce 64]");}
break;
case 90:
#line 147 "toyParser.y"
	{printf("[reduce 84]");}
break;
case 91:
#line 148 "toyParser.y"
	{printf("[reduce 85]");}
break;
case 92:
#line 149 "toyParser.y"
	{printf("[reduce 65]");}
break;
case 93:
#line 150 "toyParser.y"
	{printf("[reduce 66]");}
break;
case 94:
#line 151 "toyParser.y"
	{printf("[reduce 67]");}
break;
case 95:
#line 153 "toyParser.y"
	{printf("[reduce 86]");}
break;
case 96:
#line 154 "toyParser.y"
	{printf("[reduce 87]");}
break;
case 97:
#line 155 "toyParser.y"
	{printf("[reduce 88]");}
break;
case 98:
#line 157 "toyParser.y"
	{printf("[reduce 89]");}
break;
case 99:
#line 158 "toyParser.y"
	{printf("[reduce 90]");}
break;
case 100:
#line 160 "toyParser.y"
	{printf("[reduce 91]");}
break;
case 101:
#line 161 "toyParser.y"
	{printf("[reduce 92]");}
break;
case 102:
#line 163 "toyParser.y"
	{printf("[reduce 93]");}
break;
case 103:
#line 164 "toyParser.y"
	{printf("[reduce 94]");}
break;
case 104:
#line 165 "toyParser.y"
	{printf("[reduce 95]");}
break;
case 105:
#line 166 "toyParser.y"
	{printf("[reduce 96]");}
break;
#line 1124 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
    printf("[shift]");
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
