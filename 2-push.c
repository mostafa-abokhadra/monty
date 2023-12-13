#include "monty.h"
/**
 * 
 *
 *
 *
 *
 */
void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node = malloc(sizeof(stack_t));
	
	if (!new_node)
		not_enough();
	new_node->next = *(stack);
	new_node->prev = NULL;
	*(stack) = new_node;	
}
