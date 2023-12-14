#include "monty.h"

void swap(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		int num;

		if (!(*head) || (*head)->next == NULL)
		{
			fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
			invalide(str, cp, fily);
		}
		num = (*head)->n;
		(*head)->n = (*head)->next->n;
		(*head)->next->n = num;
}
