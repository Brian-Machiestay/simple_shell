#include "main.h"

/**
 * interactive - check the code
 * @ac: the number of args
 * @av: the actual args
 */

void interactive(int ac, char **av)
{
	int line = 1;
	size_t n = 0;
	char *str = NULL;
	char *newprog[3];
	struct stat *statbuf;
	int str_info = 0;
	int prog_name_length;

	statbuf = malloc(sizeof(struct stat));
	arrayinit(newprog, 3);
	prog_name_length = strlen(av[0]);
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
		str_info = lstat(str, statbuf);
		if (str_info == -1)
		{
			write(1, av[ac - 1], prog_name_length);
			write(1, ": No such file or directory\n", 28);
		}
		else
			executable(newprog);
	}
}
