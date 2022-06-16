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
 * @str: the string
 */
void arrayinit(char **s, char *str)
{
	s[0] = str;
	s[1] = NULL;
	s[2] = NULL;
}
