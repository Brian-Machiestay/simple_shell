#ifndef MAIN_H
#define MAIN_H

/* headers */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/* functions prototype */
void arrayinit(char **s, char *str);
void executable(char *, char **);
void freepointers(char *s, struct stat *statbuf);
void non_interactive(int ac, char **av);
void interactive(int ac, char **av);

#endif /* MAIN_H */
