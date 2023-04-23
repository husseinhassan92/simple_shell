#include "main.h"

void execmd(char **argv)
{
	char *cmd = NULL;
	char *f_cmd = NULL;

	if (argv)
	{
		cmd = argv[0];
		f_cmd = path(cmd);

		if (execve(f_cmd, argv, NULL) == -1)
		{
			perror("ERROR: ");
		}
	}
}
