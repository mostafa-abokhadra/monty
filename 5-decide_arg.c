#include "monty.h"

void decide_arg_validity(char *str, unsigned int line_num)
{
	char *token;
	char *cp = _strdup(str);
	bool valid = 1;

	token = strtok(cp, " \n\t$");
	if (strcmp(token, "pall") != 0)
	{
		token = strtok(NULL, " \n\t$");
		for (; *token ; token++)
		{
			if ((*token) >= '0' && (*token) <= '9')
				continue;
			valid = 0;
		}
	}
	free(cp);
	if (!valid)
		invalid_arg(line_num);
}
