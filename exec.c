#include "shell.h"

/**
 * exec - executes a command
 * @argv: command to be executed
 *
 * Return: 0 if success else 1
 */
int exec(char *argv[], char *****av)
{
	int status;

	if (fork() == 0)
	{
		if (execve(argv[0], argv, environ) == -1)
		{
			perror(***av[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
	exit(EXIT_SUCCESS);
}
