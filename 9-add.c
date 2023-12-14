#include "monty.h"

void add(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		stack_t *t;

		if (!(*head) || !(*head)->next)
			can_not_add(line_num, fily, str, cp);
		(*head)->n += (*head)->next->n;
		t = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(t);
}
