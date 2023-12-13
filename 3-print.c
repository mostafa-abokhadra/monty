#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
void print(stack_t **stack)
{
		stack_t *t = *(stack);

		for (; t != NULL; t = t->next)
			printf("%d\n", t->n);
}
