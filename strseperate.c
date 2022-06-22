#include "main.h"
/**
 * strseperate - check the code
 * @arr: the array to init
 * @str: the string to seperate
 */

void strseperate(char **arr, char *str)
{
	int i = 0;

	str = strtok(str, " ");
	while (str != NULL)
	{
		arr[i++] = str;
		str = strtok(NULL, " ");
	}
}
