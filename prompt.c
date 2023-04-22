#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
	char *prompt = "cisfun$ ";
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char **token;
	int i;

	while (1)
	{
		printf("%s", prompt);
		nread = getline(&line, &len, stdin);
		if (nread == -1)
			break;
		if (strcmp(line, "exit\n") == 0)
			break;
		pid_t pid = fork();
		if (pid == 0)
		{
			execmd(tokenize(line));
			exit(0);
		}
		else if (pid > 0)
			wait(NULL);
		else
		{
		    perror("fork");
		    exit(1);
		}
	}
	free(line);
	return (0);
}
