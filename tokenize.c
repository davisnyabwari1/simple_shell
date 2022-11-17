#include "shell.h"

/**
 * tokenize - tokenizes text to individual text
 * @line: buffer containing command
 */
void tokenize(char **line)
{
	char *argv[2];

	argv[0] = strtok(*line, "\n");
	argv[1] = NULL;

	exec(argv);
	free(line);
}
