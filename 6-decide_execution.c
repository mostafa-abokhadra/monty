#include "monty.h"

void decide_execution(char *str, stack_t **head, unsigned int line_num)
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
		else if (strcmp(token, "pop") == 0)
			pop(head, line_num);
		else if (strcmp(token, "swap") == 0)
			swap(head, line_num);
		free(cp);

}
