#include "shell.h"

/**
 * main - Entry point
 * @ac: command line argument count
 * @av: command line argument vector
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int mode = 1;
	while (mode)
	{
		mode = isatty(STDIN_FILENO);
		if (mode == 1)
			prompt();

		_getline();
	}
	return (0);
}
