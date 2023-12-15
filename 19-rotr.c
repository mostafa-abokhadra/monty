#include "monty.h"

void rotr(stack_t **head, FILE **fily, char *cp, char *line)
{
		stack_t *nody, *erase_it;
		stack_t *last = (*head);

		if (!(*head) || !(*head)->next)
			return;
		nody = malloc(sizeof(stack_t));
		if (!nody)
		{
			fprintf(stderr, "Error: malloc failed\n");
			invalide(cp, line, fily);
		}
		for (; last->next->next ; last = last->next){}
		nody->n = last->next->n;
		nody->next = (*head);
		nody->prev = NULL;
		(*head) = nody;
		erase_it = last->next;
		last->next = NULL;
		free(erase_it);
}
