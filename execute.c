#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * executable - check the code
 * @prog: the program to execute
 * @and_args: the program and arguments
 */
void executable(char *prog, char **and_args)
{
	int child;
	int waitid;

	child = fork();
	if (child == 0)
		execve(prog, and_args, NULL);
	else
		(wait(&waitid));
}
