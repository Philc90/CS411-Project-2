%{
    void yyerror (char *s);
    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>
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
Program             : Decl                  {printf("[reduce 1]");}
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
_MaybeImplements    : IMPLEMENTS _IDList {printf("[reduce 28]");}
                    | /* empty */ {printf("[reduce 29]");}
                    ;
_IDList             : ID COMMA _IDList {printf("[reduce 30]");}
                    | ID {printf("[reduce 31]");}
                    ;
Field               : VariableDecl {printf("[reduce 32]");}
                    | FunctionDecl {printf("[reduce 33]");}
                    ;
InterfaceDecl       : INTERFACE ID LEFTBRACE _MaybePrototypes RIGHTBRACE {printf("[reduce 34]");}
                    ;
_MaybePrototypes    : Prototype _MaybePrototypes {printf("[reduce 35]");}
                    | /* empty */ {printf("[reduce 36]");}
                    ;
Prototype           : Type ID LEFTPAREN Formals RIGHTPAREN SEMICOLON {printf("[reduce 37]");}
                    | VOID ID LEFTPAREN Formals RIGHTPAREN SEMICOLON {printf("[reduce 38]");}
                    ;
StmtBlock           : LEFTBRACE _MaybeVariableDecls _MaybeStmts RIGHTBRACE {printf("[reduce 39]");}
                    ;
_MaybeVariableDecls : VariableDecl _MaybeVariableDecls {printf("[reduce 40]");}
                    | /* empty */ {printf("[reduce 41]");}
                    ;
_MaybeStmts         : Stmt _MaybeStmts {printf("[reduce 42]");}
                    | /* empty */ {printf("[reduce 43]");}
                    ;
Stmt                : _MaybeExpr SEMICOLON {printf("[reduce 44]");}
                    | IfStmt {printf("[reduce 45]");}
                    | WhileStmt {printf("[reduce 46]");}
                    | ForStmt {printf("[reduce 47]");}
                    | BreakStmt {printf("[reduce 48]");}
                    | ReturnStmt {printf("[reduce 49]");}
                    | PrintStmt {printf("[reduce 50]");}
                    | StmtBlock {printf("[reduce 51]");}
                    ;
_MaybeExpr          : Expr {printf("[reduce 52]");}
                    | /* empty */ {printf("[reduce 53]");}
                    ;
IfStmt              : _MatchedIfStmt {printf("[reduce 54]");}
                    | _UnmatchedIfStmt  {printf("[reduce 55]");}
                    ;
_UnmatchedIfStmt    : IF LEFTPAREN Expr RIGHTPAREN Stmt {printf("[reduce ]");}
                    ;
_MatchedIfStmt      : IF LEFTPAREN Expr RIGHTPAREN _MatchedIfStmt ELSE _MatchedIfStmt {printf("[reduce ]");}
                    ;
WhileStmt           : WHILE LEFTPAREN Expr RIGHTPAREN Stmt {printf("[reduce 56]");}
                    ;
ForStmt             : FOR LEFTPAREN _MaybeExpr SEMICOLON Expr SEMICOLON _MaybeExpr RIGHTPAREN Stmt {printf("[reduce 57]");}
                    ;
BreakStmt           : BREAK SEMICOLON {printf("[reduce 58]");}
                    ;
ReturnStmt          : RETURN _MaybeExpr SEMICOLON {printf("[reduce 59]");}
                    ;
PrintStmt           : PRINTLN LEFTPAREN _ExprList RIGHTPAREN SEMICOLON {printf("[reduce 61]");}
                    ;
_ExprList           : Expr COMMA _ExprList {printf("[reduce 62]");}
                    | Expr {printf("[reduce 63]");}
                    ;
Expr                : LEFTPAREN _Expr1 RIGHTPAREN {printf("[reduce 68]");}
                    | _Expr1
                    ;
_Expr1              : MINUS _Expr2 {printf("[reduce 74]");}
                    | NOT _Expr2 {printf("[reduce 83]");}
                    | _Expr2
                    ;
_Expr2              : _Expr2 MULTIPLICATION _Expr3 {printf("[reduce 71]");}
                    | _Expr2 DIVISION _Expr3 {printf("[reduce 72]");}
                    | _Expr2 MOD _Expr3 {printf("[reduce 73]");}
                    | _Expr3
                    ;
_Expr3              : _Expr3 PLUS _Expr4 {printf("[reduce 69]");}
                    | _Expr3 MINUS _Expr4 {printf("[reduce 70]");}
                    | _Expr4
                    ;
_Expr4              : _Expr4 LESS _Expr5 {printf("[reduce 75]");}
                    | _Expr4 LESSEQUAL _Expr5 {printf("[reduce 76]");}
                    | _Expr4 GREATER _Expr5 {printf("[reduce 77]");}
                    | _Expr4 GREATEREQUAL _Expr5 {printf("[reduce 78]");}
                    | _Expr5
                    ;
_Expr5              : _Expr5 EQUAL _Expr6 {printf("[reduce 79]");}
                    | _Expr5 NOTEQUAL _Expr6 {printf("[reduce 80]");}
                    | _Expr6
                    ;
_Expr6              : _Expr6 AND _Expr7 {printf("[reduce 81]");}
                    | _Expr7
                    ;
_Expr7              : _Expr7 OR _Expr8 {printf("[reduce 82]");}
                    | _Expr8
                    ;
_Expr8              : Lvalue ASSIGNOP _Expr9 {printf("[reduce 64]");}
                    | _Expr9
                    ;
_Expr9              : READLN LEFTPAREN RIGHTPAREN {printf("[reduce 84]");}
                    | NEWARRAY LEFTPAREN INTCONSTANT COMMA Type RIGHTPAREN {printf("[reduce 85]");}
                    | Constant {printf("[reduce 65]");}
                    | Lvalue {printf("[reduce 66]");}
                    | Call {printf("[reduce 67]");}
                    ;
Lvalue              : ID {printf("[reduce 86]");}
                    | Lvalue LEFTBRACKET Expr RIGHTBRACKET {printf("[reduce 87]");}
                    | Lvalue PERIOD ID {printf("[reduce 88]");}
                    ;
Call                : ID LEFTPAREN Actuals RIGHTPAREN {printf("[reduce 89]");}
                    | ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN {printf("[reduce 90]");}
                    ;
Actuals             : _ExprList {printf("[reduce 91]");}
                    | /* empty */ {printf("[reduce 92]");}
                    ;
Constant            : INTCONSTANT {printf("[reduce 93]");}
                    | DOUBLECONSTANT {printf("[reduce 94]");}
                    | STRINGCONSTANT {printf("[reduce 95]");}
                    | BOOLEANCONSTANT {printf("[reduce 96]");}
                    ;
%%
int main() {while(1) {yyparse();} return 0;}
void yyerror (char *s) { fprintf (stderr, "%s\n", s);}
