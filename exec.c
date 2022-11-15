#include "shell.h"

/**
 * exec - executes a command
 * @argv: command to be executed
 *
 * Return: 0 if success else 1
 */
int exec(char *argv[])
{
	int status;

	if (fork() == 0)
	{
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("Error");
			return (1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
