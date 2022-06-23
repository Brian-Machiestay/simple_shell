#include "main.h"

/**
 * errormsg - check the code
 * @ac: str no. of file
 * @str: the executable
 * @av: the number of inputs
 */
void errormsg(int ac, char *str, char **av)
{
	write(2, av[ac - 1], strlen(av[ac - 1]));
	write(2, ": 1:", 4);
	write(2, str, strlen(str));
	write(2, ": not found\n", 12);
}
