#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * freepointers - check the code
 * @s: the string
 * @statbuf: free statbuf
 */
void freepointers(char *s, struct stat *statbuf)
{
	free(s);
	free(statbuf);
}

/**
 * arrayinit - check the code
 * @s: the array
 * @size: the string
 */
void arrayinit(char **s, int size)
{
	int i = 0;

	while (i < size)
		s[i++] = NULL;
}
