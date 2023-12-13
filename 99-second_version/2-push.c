#include "monty.h"
/**
 * 
 *
 *
 *
 *
 */
void push(stack_t **stack, char *str_num)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	int num;

	if (!new_node)
		not_enough();
	num = atoi(str_num);
	new_node->n = num;
	new_node->next = *(stack);
	new_node->prev = NULL;
	*(stack) = new_node;	
}
