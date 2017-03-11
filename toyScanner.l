%{
#include "y.tab.h"
extern void yyerror (char *s);
%}

%%
"boolean"               { printf("\nboolean "); return BOOLEAN; }
"break"                 { printf("\nbreak "); return BREAK; }
"class"                 { printf("\nclass "); return CLASS; }
"double"                { printf("\ndouble "); return DOUBLE; }
"else"                  { printf("\nelse "); return ELSE; }
"extends"               { printf("\nextends "); return EXTENDS; }
"false"                 { printf("\nfalse "); return FALSE; }
"true"                  { printf("\ntrue "); return TRUE; }
"for"                   { printf("\nfor "); return FOR; }
"if"                    { printf("\nif "); return IF; }
"implements"            { printf("\nimplements "); return IMPLEMENTS; }
"int"                   { printf("\nint "); return INT; }
"interface"             { printf("\ninterface "); return INTERFACE; }
"newarray"              { printf("\nnewarray "); return NEWARRAY; }
"println"               { printf("\nprintln "); return PRINTLN; }
"readln"                { printf("\nreadln "); return READLN; }
"return"                { printf("\nreturn "); return RETURN; }
"string"                { printf("\nstring "); return STRING; }
"void"                  { printf("\nvoid "); return VOID; }
"while"                 { printf("\nwhile "); return WHILE; }
"//"(.)*[\n]                           ; // singleline comments
"/*"([^*]|(\*+[^*/]))*\*+\/            ; // multiline comments
"+"                     { printf("\nplus "); return PLUS; }
"-"                     { printf("\nminus "); return MINUS; }
"*"                     { printf("\nmultiplication "); return MULTIPLICATION; }
"/"                     { printf("\ndivision "); return DIVISION; }
"%"                     { printf("\nmod "); return MOD; }
"<"                     { printf("\nless "); return LESS; }
"<="                    { printf("\nlessequal "); return LESSEQUAL; }
">"                     { printf("\ngreater "); return GREATER; }
">="                    { printf("\ngreaterequal "); return GREATEREQUAL; }
"=="                    { printf("\nequal "); return EQUAL; }
"!="                    { printf("\nnotequal "); return NOTEQUAL; }
"&&"                    { printf("\nand "); return AND; }
"||"                    { printf("\nor "); return OR; }
"!"                     { printf("\nnot "); return NOT; }
"="                     { printf("\nassignop "); return ASSIGNOP; }
";"                     { printf("\nsemicolon "); return SEMICOLON; }
","                     { printf("\ncomma "); return COMMA; }
"."                     { printf("\nperiod "); return PERIOD; }
"("                     { printf("\nleftparen "); return LEFTPAREN; }
")"                     { printf("\nrightparen "); return RIGHTPAREN; }
"["                     { printf("\nleftbracket "); return LEFTBRACKET; }
"{"                     { printf("\nleftbrace "); return LEFTBRACE; }
"}"                     { printf("\nrightbrace "); return RIGHTBRACE; }
"]"                     { printf("\nrightbracket "); return RIGHTBRACKET; }
[0-9]+([.]?[eE][-+]?[0-9]+)|([.][0-9]*)    { printf("\ndoubleconstant "); return DOUBLECONSTANT; }
([0-9]+)|(0[xX][0-9a-fA-F]+)               { printf("\nintconstant "); return INTCONSTANT; }
\"(\\.|[^"])*\"         { printf("\nstringconstant "); return STRINGCONSTANT; }
[a-zA-Z][a-zA-Z0-9_]*   { printf("\nid "); return ID; }
[\n]                    { printf("\n"); }
[ \t]*                  { ; }
.                       { ECHO; yyerror ("unexpected character"); }
%%

int yywrap(void) { return 1; }
