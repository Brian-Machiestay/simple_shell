#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - fork & wait example
 * @ac: the no. of arguments to the func
 * @av: an array of the arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int line = 1;
	size_t n = 0;
	char *str;
	char *newprog[3];
	struct stat *statbuf = NULL;
	int str_info;
	int prog_name_length;


	statbuf = malloc(sizeof(struct stat));
	write(1, "#cisfun$ ", 9);
	line = getline(&str, &n, stdin);
	*(str + (line - 1)) = '\0';
	newprog[0] = str;
	newprog[1] = NULL;
	newprog[3] = NULL;
	prog_name_length = strlen(av[0]);
	while (line != -1)
	{
		str_info = lstat(str, statbuf);
		if (str_info == -1)
		{
			write(1, av[ac - 1], prog_name_length);
			write(1, ": No such file or directory\n", 29);
		}
		else
			executable(newprog[0], newprog);

		write(1, "#cisfun$ ", 9);
		line = getline(&str, &n, stdin);
		*(str + (line - 1)) = '\0';
	}
	free(str);
	free(statbuf);
	exit(98);
}
