#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char **tokenize(char *line);
char **tokenize2(char *lineptr, const char *delim);
void execmd(char **argv);
int main();

