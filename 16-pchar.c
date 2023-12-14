#include "monty.h"

void pchar(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		if (!(*head) || !((*head)->n >= 0 && (*head)->n <= 127))
		{
			if (!(*head))
				fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
			else
				fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
			invalide(str, cp, fily);
		}
		printf("%c\n", (*head)->n);
}
