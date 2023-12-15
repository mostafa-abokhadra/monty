#include "monty.h"

int stack_size(stack_t **head)
{
		stack_t *t = (*head);
		int size;

		if (!(*head))
			return (0);
		for (size = 0 ; t ; t = t->next, size++){}
		return (size);
}
