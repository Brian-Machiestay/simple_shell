#include "main.h"

/**
 * main - fork & wait example
 * @ac: the no. of arguments to the func
 * @av: an array of the arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (!isatty(0))
	{
		non_interactive(ac, av);
		exit(98);
	}
	interactive(ac, av);
	exit(98);
}
