#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void prompt(void);
int _getline(char ***av);
void tokenize(char **line, char ****av);
int exec(char *argv[], char *****av);


#endif /* #ifndef SHELL H */
