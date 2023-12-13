#include "monty.h"

/**
 *
 *
 *
 *
 */
void decide_validity(char *str, unsigned int line_num)
{
		char *orders[] = {"push", "pall", NULL};
		char *cp = _strdup(str);
		char *token;
		bool valid = 0;
		int i;

		token = strtok(cp, " \t\n");
		for (i = 0; orders[i]; i++)
		{
			if (strcmp(token, orders[i]) == 0)
			{
				valid = 1;
				break;
			}
		}
		free(cp);
		if (!valid)
			invalide(line_num, token);
}
