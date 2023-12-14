#include "monty.h"
/**
 * 
 *
 *
 *
 *
 */
void push(stack_t **stack, char *str_num, char *cp, char *line, FILE **fily)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	int num;

	if (!new_node)
		not_enough(fily, cp, line);
	num = atoi(str_num);
	new_node->n = num;
	new_node->next = *(stack);
	new_node->prev = NULL;
	*(stack) = new_node;	
}
