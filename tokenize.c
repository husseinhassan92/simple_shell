#include "main.h"



char **tokenize(char *line)
{
	char *token, **argv, *line_cp = NULL, *delim = " \n";
	int token_num = 0, i;

	line_cp = malloc(sizeof(char) * (strlen(line) + 1));
	if (line_cp == NULL)
		return (NULL);
	strcpy(line_cp, line);
	token = strtok(line_cp, delim);
	while (token != NULL)
	{
		token_num++;
		token = strtok(NULL, delim);

	}
	token_num++;
	argv = malloc(sizeof(char *) * token_num);
	strcpy(line_cp, line);
	token = strtok(line_cp, delim);
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(token) + 1);
		if (argv == NULL)
		{
			free(line_cp);
			free(argv);
			return (NULL);
		}
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
	free(line_cp);
	return (argv);

}
