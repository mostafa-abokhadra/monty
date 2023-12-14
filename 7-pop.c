#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
void pop(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		stack_t *t = *head;
		if (!(*head))
			empty_stack(line_num, fily, str, cp);
		(*head) = (*head)->next;
		free(t);
}
