//This Flex program reads an input file and identifies tokens like keywords, numbers, identifiers, and symbols.

%{
#include <stdio.h>
%}

%%

"int"|"float"|"return"|"if"|"else" { printf("Keyword: %s\n", yytext); }
[0-9]+ { printf("Number: %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]* { printf("Identifier: %s\n", yytext); }
"="|"+"|"-"|"*"|"/" { printf("Operator: %s\n", yytext); }
[ \t\n] ;  // Ignore whitespace
. { printf("Symbol: %s\n", yytext); }  // Any other symbol

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            printf("Error: Cannot open file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }
    yylex();
    return 0;
}
