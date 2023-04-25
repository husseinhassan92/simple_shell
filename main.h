#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char **tokenize(char *line);
void execmd(char **argv);
char *path(char *cmd);
void print_env();
int _strlen(char *s);
int _strcmp(const char *s1, const char *s2);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, const char *src);
int main(void);

#endif

