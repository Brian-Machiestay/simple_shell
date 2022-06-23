#include "main.h"

/**
 * non_interactive - check the code
 * @ac: the no. of args
 * @av: the actual args
 * @envp: the environ
 */

void non_interactive(int ac, char **av, char **envp)
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
		if (strcmp(newprog[0], "ls") == 0)
			newprog[0] = "/bin/ls";
		str_info = lstat(newprog[0], statbuf);
		if (str_info == -1)
		{
			errormsg(ac, newprog[0], av);
		}
		else
			executable(newprog, envp);
	}
}
