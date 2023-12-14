#include "monty.h"

void decide_execution(char *str, stack_t **head, unsigned int line_num, FILE **fily)
{
		char *token;
		char *cp;

		cp = _strdup(str);
		token = strtok(cp, " \n\t");
		
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " \n\t");
			push(head, token, cp, str, fily);
		}
		else if (strcmp(token, "pall") == 0)
			print(head);
		else if (strcmp(token, "pint") == 0)
			pint(head);
		else if (strcmp(token, "pop") == 0)
			pop(head, line_num, fily, str, cp);
		else if (strcmp(token, "swap") == 0)
			swap(head, line_num, fily, str, cp);
		else if (strcmp(token, "add") == 0)
			add(head, line_num, fily, str, cp);
		else if (strcmp(token, "sub") == 0)
			sub(head, line_num, fily, str, cp);
		else if (strcmp(token, "div") == 0)
			division(head, line_num, fily, str, cp);
		free(cp);

}
