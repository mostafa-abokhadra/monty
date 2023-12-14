#include "monty.h"

void mul(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		stack_t *t = *(head);

		if (!(*head) || !(*head)->next)
		{
			if (!(*head) || !(*head)->next)
				fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
			invalide(str, cp, fily);
		}
		t = *(head);
		(*head)->next->n *= (*head)->n;
		(*head) = (*head)->next;
		free(t);
}
