#include "shell.h"

/**
 * _getline - reads line from terminal
 *
 * Return: 0 on success else 1
 */
int _getline(void)
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
	{
		perror("Error");
		return (1);
	}

	tokenize(&line);
	return (0);
}
