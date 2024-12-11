%{
#include <stdio.h>
#include <stdlib.h>
%}

%%

([1-9]+[0-9]*)|[0]	ECHO;
[0-9]+\.[0-9]+		
[a-zA-Z]+
.

%%

void process_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    yyin = file;
    while(yylex());
    fclose(yyin);
}

int main(int argc, char **argv)
{
  if (argc != 2) {
    yylex();
  }else{
    process_file(argv[1]);
  }
  yywrap();
}
int yywrap()
{
	return 1;
}

