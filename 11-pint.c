#include "monty.h"

void pint(stack_t **head)
{
		if (!head)
			return;
		printf("%d\n", (*head)->n);
}
