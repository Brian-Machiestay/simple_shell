#include "main.h"

/**
 * main - fork & wait example
 * @ac: the no. of arguments to the func
 * @av: an array of the arguments
 * @env: the environ
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	if (!isatty(0))
	{
		non_interactive(ac, av, env);
		return (0);
	}
	interactive(ac, av, env);
	return (0);
}
