#include "monty.h"

void decide_execution(char *str, stack_t **head)
{
		char *token;
		char *cp;

		cp = _strdup(str);
		token = strtok(cp, " \n\t");
		
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " \n\t");
			push(head, token);
			return;
		}
		else if (strcmp(token, "pall") == 0)
			print(head);
		free(cp);

}
