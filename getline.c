#include "shell.h"

/**
 * getline - reads line from terminal
 *
 * Return: buffer containing command
 */
int _getline(void)
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
		return (1);

	tokenize(&line);
	return (0);
}
