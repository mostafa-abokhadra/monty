#include "monty.h"

void swap(stack_t **head, unsigned int line_num)
{
		int num;

		if (!head || (*head)->next == NULL)
			can_not_swap(line_num);
		num = (*head)->n;
		(*head)->n = (*head)->next->n;
		(*head)->next->n = num;
}
