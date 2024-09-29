#include <stdio.h>
#include "lex.yy.c"

int main(int argc,char* argv[]) {
    printf("\n----------- Parsing Line Number 1 -----------\n");
    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    yyin=input_file;

    yyparse();
    return 0;
}