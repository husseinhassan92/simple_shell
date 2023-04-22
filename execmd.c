#include "main.h"

void execmd(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("ERROR: ");
		}
	}
}
