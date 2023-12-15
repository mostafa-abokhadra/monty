#include "monty.h"

void pint(stack_t **head, char *str, char *cp, FILE **fily, unsigned int line_num)
{
		if (!(*head))
		{
			fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
			invalide(cp, str, fily);
		}
		printf("%d\n", (*head)->n);
}
