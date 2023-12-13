#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
void print(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
		stack_t *t = *(stack);

		for (; t != NULL; t = t->next)
			printf("%d\n", t->n);
}
