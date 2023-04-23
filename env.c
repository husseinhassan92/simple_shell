#include "main.h"

/**
 * print_env - print the enviroment var
 *
 * @envp: env argument passed from main function
*/

extern char **environ;

void print_env()
{
	char **env = environ;

	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}
