%{
    void yyerror (char *s);
    #include <stdlib.h>
    #include <stdio.h>
    extern int yylex();
    extern FILE * yyin;
%}
%start Program
%token BOOLEAN BREAK CLASS DOUBLE ELSE EXTENDS FALSE FOR ID
%token IF IMPLEMENTS INT INTERFACE NEWARRAY PRINTLN READLN RETURN
%token STRING TRUE VOID WHILE PLUS MINUS MULTIPLICATION DIVISION
%token MOD LESS LESSEQUAL GREATER GREATEREQUAL EQUAL NOTEQUAL
%token AND OR NOT ASSIGNOP SEMICOLON COMMA PERIOD LEFTPAREN
%token RIGHTPAREN LEFTBRACKET RIGHTBRACKET LEFTBRACE RIGHTBRACE
%token INTCONSTANT DOUBLECONSTANT STRINGCONSTANT BOOLEANCONSTANT

%%
Program             : Decl                  {printf("[reduce 1]"); printf("[accept]\n");}
                    | Decl Program          {printf("[reduce 2]");}
                    ;
Decl                : VariableDecl          {printf("[reduce 3]");}
                    | FunctionDecl {printf("[reduce 4]");}
                    | ClassDecl {printf("[reduce 5]");}
                    | InterfaceDecl {printf("[reduce 6]");}
                    ;
VariableDecl        : Variable SEMICOLON    {printf("[reduce 7]");}
                    ;
Variable            : Type ID               {printf("[reduce 8]");}
                    ;
Type                : INT                   {printf("[reduce 9]");}
                    | DOUBLE {printf("[reduce 10]");}
                    | BOOLEAN {printf("[reduce 11]");}
                    | STRING {printf("[reduce 12]");}
                    | Type LEFTBRACKET RIGHTBRACKET {printf("[reduce 13]");}
                    | ID {printf("[reduce 14]");}
                    ;
FunctionDecl        : Type ID LEFTPAREN Formals RIGHTPAREN StmtBlock {printf("[reduce 15]");}
                    | VOID ID LEFTPAREN Formals RIGHTPAREN StmtBlock {printf("[reduce 16]");}
                    ;
Formals             : _VariableList {printf("[reduce 17]");}
                    | /* empty */ {printf("[reduce 18]");}
                    ;
_VariableList       : Variable COMMA _VariableList {printf("[reduce 19]");}
                    | Variable {printf("[reduce 20]");}
                    ;
ClassDecl           : CLASS ID _MaybeExtends _MaybeImplements LEFTBRACE _Fields RIGHTBRACE {printf("[reduce 21]");}
                    | CLASS ID _MaybeExtends _MaybeImplements LEFTBRACE RIGHTBRACE {printf("[reduce 22]");}
                    ;
_Fields             : Field _Fields {printf("[reduce 23]");}
                    | Field {printf("[reduce 24]");}
                    ;
_MaybeExtends       : EXTENDS ID {printf("[reduce 25]");}
                    | /* empty */ {printf("[reduce 26]");}
                    ;
_MaybeImplements    : IMPLEMENTS _IDList {printf("[reduce 27]");}
                    | /* empty */ {printf("[reduce 28]");}
                    ;
_IDList             : ID COMMA _IDList {printf("[reduce 29]");}
                    | ID {printf("[reduce 30]");}
                    ;
Field               : VariableDecl {printf("[reduce 31]");}
                    | FunctionDecl {printf("[reduce 32]");}
                    ;
InterfaceDecl       : INTERFACE ID LEFTBRACE _MaybePrototypes RIGHTBRACE {printf("[reduce 33]");}
                    ;
_MaybePrototypes    : Prototype _MaybePrototypes {printf("[reduce 34]");}
                    | /* empty */ {printf("[reduce 35]");}
                    ;
Prototype           : Type ID LEFTPAREN Formals RIGHTPAREN SEMICOLON {printf("[reduce 36]");}
                    | VOID ID LEFTPAREN Formals RIGHTPAREN SEMICOLON {printf("[reduce 37]");}
                    ;
StmtBlock           : LEFTBRACE _MaybeVariableDecls _MaybeStmts RIGHTBRACE {printf("[reduce 38]");}
                    ;
_MaybeVariableDecls : VariableDecl _MaybeVariableDecls {printf("[reduce 39]");}
                    | /* empty */ {printf("[reduce 40]");}
                    ;
_MaybeStmts         : Stmt _MaybeStmts {printf("[reduce 41]");}
                    | /* empty */ {printf("[reduce 42]");}
                    ;
Stmt                : _MaybeExpr SEMICOLON {printf("[reduce 43]");}
                    | IfStmt {printf("[reduce 44]");}
                    | WhileStmt {printf("[reduce 45]");}
                    | ForStmt {printf("[reduce 46]");}
                    | BreakStmt {printf("[reduce 47]");}
                    | ReturnStmt {printf("[reduce 48]");}
                    | PrintStmt {printf("[reduce 49]");}
                    | StmtBlock {printf("[reduce 50]");}
                    ;
_MaybeExpr          : Expr {printf("[reduce 51]");}
                    | /* empty */ {printf("[reduce 52]");}
                    ;
IfStmt              : _MatchedIfStmt {printf("[reduce 53]");}
                    | _UnmatchedIfStmt  {printf("[reduce 54]");}
                    ;
_UnmatchedIfStmt    : IF LEFTPAREN Expr RIGHTPAREN Stmt {printf("[reduce 55]");}
                    ;
_MatchedIfStmt      : IF LEFTPAREN Expr RIGHTPAREN _MatchedIfStmt ELSE _MatchedIfStmt {printf("[reduce 56]");}
                    ;
WhileStmt           : WHILE LEFTPAREN Expr RIGHTPAREN Stmt {printf("[reduce 57]");}
                    ;
ForStmt             : FOR LEFTPAREN _MaybeExpr SEMICOLON Expr SEMICOLON _MaybeExpr RIGHTPAREN Stmt {printf("[reduce 58]");}
                    ;
BreakStmt           : BREAK SEMICOLON {printf("[reduce 59]");}
                    ;
ReturnStmt          : RETURN _MaybeExpr SEMICOLON {printf("[reduce 60]");}
                    ;
PrintStmt           : PRINTLN LEFTPAREN _ExprList RIGHTPAREN SEMICOLON {printf("[reduce 61]");}
                    ;
_ExprList           : Expr COMMA _ExprList {printf("[reduce 62]");}
                    | Expr {printf("[reduce 63]");}
                    ;
Expr                : LEFTPAREN _Expr1 RIGHTPAREN {printf("[reduce 64]");}
                    | _Expr1 {printf("[reduce 65]");}
                    ;
_Expr1              : MINUS _Expr2 {printf("[reduce 66]");}
                    | NOT _Expr2 {printf("[reduce 67]");}
                    | _Expr2 {printf("[reduce 68]");}
                    ;
_Expr2              : _Expr2 MULTIPLICATION _Expr3 {printf("[reduce 69]");}
                    | _Expr2 DIVISION _Expr3 {printf("[reduce 70]");}
                    | _Expr2 MOD _Expr3 {printf("[reduce 71]");}
                    | _Expr3 {printf("[reduce 72]");}
                    ;
_Expr3              : _Expr3 PLUS _Expr4 {printf("[reduce 73]");}
                    | _Expr3 MINUS _Expr4 {printf("[reduce 74]");}
                    | _Expr4 {printf("[reduce 75]");}
                    ;
_Expr4              : _Expr4 LESS _Expr5 {printf("[reduce 76]");}
                    | _Expr4 LESSEQUAL _Expr5 {printf("[reduce 77]");}
                    | _Expr4 GREATER _Expr5 {printf("[reduce 78]");}
                    | _Expr4 GREATEREQUAL _Expr5 {printf("[reduce 79]");}
                    | _Expr5  {printf("[reduce 80]");}
                    ;
_Expr5              : _Expr5 EQUAL _Expr6 {printf("[reduce 81]");}
                    | _Expr5 NOTEQUAL _Expr6 {printf("[reduce 82]");}
                    | _Expr6 {printf("[reduce 83]");}
                    ;
_Expr6              : _Expr6 AND _Expr7 {printf("[reduce 84]");}
                    | _Expr7 {printf("[reduce 85]");}
                    ;
_Expr7              : _Expr7 OR _Expr8 {printf("[reduce 86]");}
                    | _Expr8  {printf("[reduce 87]");}
                    ;
_Expr8              : Lvalue ASSIGNOP _Expr9 {printf("[reduce 88]");}
                    | _Expr9 {printf("[reduce 89]");}
                    ;
_Expr9              : READLN LEFTPAREN RIGHTPAREN {printf("[reduce 90]");}
                    | NEWARRAY LEFTPAREN INTCONSTANT COMMA Type RIGHTPAREN {printf("[reduce 91]");}
                    | Constant {printf("[reduce 92]");}
                    | Lvalue {printf("[reduce 93]");}
                    | Call {printf("[reduce 94]");}
                    ;
Lvalue              : ID {printf("[reduce 95]");}
                    | Lvalue LEFTBRACKET Expr RIGHTBRACKET {printf("[reduce 96]");}
                    | Lvalue PERIOD ID {printf("[reduce 97]");}
                    ;
Call                : ID LEFTPAREN Actuals RIGHTPAREN {printf("[reduce 98]");}
                    | ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN {printf("[reduce 99]");}
                    ;
Actuals             : _ExprList {printf("[reduce 100]");}
                    | /* empty */ {printf("[reduce 101]");}
                    ;
Constant            : INTCONSTANT {printf("[reduce 102]");}
                    | DOUBLECONSTANT {printf("[reduce 103]");}
                    | STRINGCONSTANT {printf("[reduce 104]");}
                    | BOOLEANCONSTANT {printf("[reduce 105]");}
                    ;
%%
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
