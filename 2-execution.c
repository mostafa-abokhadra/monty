#include "monty.h"

int execution(char *line, unsigned int line_num __attribute__((unused)))
{
		char *cpy = _strdup(line);
		char *token = strtok(cpy, " \n\t");

		if (!token)
			return (1);
		return (0);
}
