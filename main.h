#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

char **tokenize(char *line);
void execmd(char **argv);
char *path(char *cmd);
void print_env();
int _strcmp(const char *s1, const char *s2);
int main();

#endif

