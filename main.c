#include <stdio.h>

int main(int ac, char **av)
{
	av++;
	while (*av != NULL)
	{
		printf("%s\n",*av);
		av++;
	}

	return (0);
}
