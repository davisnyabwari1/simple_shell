#include "shell.h"

/**
 * main - Entry point
 * @ac: command line argument count
 * @av: command line argument vector
 *
 * Return: Always 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	int mode = STDOUT_FILENO;

	while (mode)
	{
		mode = isatty(STDIN_FILENO);
		if (mode == 1)
			prompt();
		_getline(&av);
	}
	return (0);
}
