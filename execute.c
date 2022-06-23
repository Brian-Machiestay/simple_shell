#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * executable - check the code
 * @and_args: the program and arguments
 * @env: the environ
 */
void executable(char **and_args, char **env)
{
	int child;
	int waitid;

	child = fork();
	if (child == 0)
		execve(and_args[0], and_args, env);
	else
		(wait(&waitid));
}
