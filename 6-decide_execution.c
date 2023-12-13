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
		else if (strcmp(token, "pint") == 0)
			printf("%d\n", (*head)->n);
		free(cp);

}
