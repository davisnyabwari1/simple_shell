#include "shell.h"

/**
 * _getline - reads line from terminal
 *
 * Return: 0 on success else -1
 */
int _getline(char ***av)
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
	{
		perror(*av[0]);
		exit(EXIT_FAILURE);
	}

	tokenize(&line, &av);
	exit(EXIT_SUCCESS);
}
