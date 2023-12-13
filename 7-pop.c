#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
void pop(stack_t **head, unsigned int line_num)
{
		stack_t *t = *head;
		if (!head)
			empty_stack(line_num);
		(*head) = (*head)->next;
		free(t);
}
