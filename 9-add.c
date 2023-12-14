#include "monty.h"

void add(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		stack_t *t;

		if (!(*head) || !(*head)->next)
		{
			fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
			invalide(str, cp, fily);
		}
		(*head)->n += (*head)->next->n;
		t = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(t);
}
