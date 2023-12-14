#include "monty.h"

void division(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp)
{
		stack_t *t = *(head);

		if (!(*head) || !(*head)->next || (*head)->n == 0)
		{
			if ((*head)->n == 0)
				fprintf(stderr, "L%d: division by zero\n", line_num);
			else
				fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
			invalide(str, cp, fily);
		}
		t = *(head);
		(*head)->next->n -= (*head)->n;
		(*head) = (*head)->next;
		free(t);
}
