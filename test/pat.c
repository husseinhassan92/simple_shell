# include "main.h"
/**
 * path - return the path of the command
 * @cmd: the command from the user
 * Return: string of the path
 */


char *path(char *cmd)
{
	char *pth, *c_pth, *p_tok, *f_pth;
	int cmd_len, pth_len;
	struct stat buff;

	if (stat(cmd, &buff) == 0)
		return (cmd);
	if (stat(cmd, &buff) != 0)
	{
		pth = getenv("PATH");

		if (pth != NULL)
		{
			c_pth = _strdup(pth);
			cmd_len = _strlen(cmd);
			p_tok = strtok(c_pth, ":");
			while (p_tok != NULL)
			{
				pth_len = _strlen(p_tok);
				f_pth = malloc(cmd_len + pth_len + 2);
				if (f_pth == NULL)
					return (NULL);
				_strcpy(f_pth, p_tok);
				_strcat(f_pth, "/");
				_strcat(f_pth, cmd);
				_strcat(f_pth, "\0");
				if (stat(f_pth, &buff) == 0)
				{
					free(c_pth);
					return (f_pth);
				}
				else
				{
					free(f_pth);
					p_tok = strtok(NULL, ":");
				}
			}
		}
		free(c_pth);
	}
	return (NULL);
}


