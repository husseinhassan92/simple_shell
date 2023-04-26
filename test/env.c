#include "main.h"

/**
 * print_env - print environment variables
 *
 * Return: void
*/

void print_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
