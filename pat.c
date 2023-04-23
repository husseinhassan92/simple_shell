# include "main.h"


char *path(char *cmd)
{
	char *pth, *c_pth, *p_tok, *f_pth;
	int cmd_len, pth_len;
	struct stat buff;

	if(stat(cmd, &buff) == 0)
		return (cmd);
	else
	{
		pth = getenv("PATH");

		if(pth != NULL)
		{
			c_pth = strdup(pth);
			cmd_len = strlen(cmd);
			p_tok = strtok(c_pth, ":");
			while(p_tok != NULL)
			{
				pth_len = strlen(p_tok);
				f_pth = malloc(cmd_len + pth_len + 2);
				if (f_pth == NULL)
					return(NULL);
				strcpy(f_pth, p_tok);
				strcat(f_pth, "/");
				strcat(f_pth, cmd);
				strcat(f_pth, "\0");
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


