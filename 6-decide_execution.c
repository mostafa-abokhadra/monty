#include "monty.h"

void decide_execution(char *str, stack_t *head, unsigned int line_num)
{
		char *token;
		char *cp;
		int i;
		instruction_t ptr[2] = {
			{"push", push},
			{"pall", print},
			};

		cp = _strdup(str);
		token = strtok(cp, " \n\t$");

		for (i = 0; i < 2; i++)
		{
			if (strcmp(token, ptr[i].opcode) == 0)
				(ptr[i].f)(&head, line_num);
		}
		free(cp);
}
