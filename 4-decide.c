#include "monty.h"

/**
 *
 *
 *
 *
 */
int decide_validity(char *str, unsigned int line_num, FILE **fily)
{
		char *orders[] = {"push", "pall", "pint", "pop", "swap",
			"add","sub", "div", "mul", "mod", NULL};
		char *cp = _strdup(str);
		char *token;
		bool valid = 0;
		int i;

		token = strtok(cp, " \t\n");
		if (!token || strcmp(token, "nop") == 0 || token[0] == '#')
		{
			free(cp);
			return (1);
		}
		for (i = 0; orders[i]; i++)
		{
			if (strcmp(token, orders[i]) == 0)
			{
				valid = 1;
				break;
			}
		}
		if (!valid)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_num, token);
			invalide(cp, str, fily);
		}
		free(cp);
		return (0);
}
