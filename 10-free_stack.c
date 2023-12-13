#include "monty.h"

void free_stack(stack_t **head)
{
		stack_t *t = (*head);

		while (t)
		{
			(*head) = (*head)->next;
			free(t);
			t = (*head);
		}
		free(t);
}
