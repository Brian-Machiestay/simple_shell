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
void arrayinit(char **s, int i);
void executable(char **, char **);
void freepointers(char *s, struct stat *statbuf);
void non_interactive(int ac, char **av, char **);
void interactive(int ac, char **av, char **);
void strseperate(char **str, char *);
void errormsg(int, char *, char **);
#endif /* MAIN_H */
