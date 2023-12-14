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
		{
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
			invalide(str, cp, fily);
		}
		(*head) = (*head)->next;
		free(t);
}
