#include "main.h"

/**
 * print_env - print the enviroment var
 *environ : a pointer of array of string enviroment
 * @env: env argument passed from main function
*/


extern char **environ;
void print_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
