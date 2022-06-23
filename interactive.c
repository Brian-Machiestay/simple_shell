#include "main.h"

/**
 * interactive - check the code
 * @ac: the number of args
 * @av: the actual args
 * @envp: the environ
 */

void interactive(int ac, char **av, char **envp)
{
	int line = 1;
	size_t n = 0;
	char *str = NULL;
	char *newprog[3];
	struct stat *statbuf;
	int str_info = 0;

	statbuf = malloc(sizeof(struct stat));
	arrayinit(newprog, 3);
	while (1)
	{
		write(1, "#cisfun$ ", 9);
		line = getline(&str, &n, stdin);
		if (line == -1)
		{
			freepointers(str, statbuf);
			break;
		}
		*(str + (line - 1)) = '\0';
		strseperate(newprog, str);
		if (newprog[0] == NULL)
			continue;
		str_info = lstat(str, statbuf);
		if (str_info == -1)
		{
			errormsg(ac, newprog[0], av);
		}
		else
			executable(newprog, envp);
	}
}
