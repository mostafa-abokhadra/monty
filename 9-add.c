#include "monty.h"

void add(stack_t **head, unsigned int line_num)
{
		stack_t *t;

		if (!head || !(*head)->next)
			can_not_add(line_num);
		(*head)->n += (*head)->next->n;
		t = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(t);
}
