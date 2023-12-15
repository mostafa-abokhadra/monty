#include "monty.h"

void rotl(stack_t **head, FILE **fily, char *cp, char *line)
{
		stack_t *nody;
		stack_t *last = (*head);

		if (!(*head) || !(*head)->next)
			return;
		nody = malloc(sizeof(stack_t));
		if (!nody)
		{
			fprintf(stderr, "Error: malloc failed\n");
			invalide(cp, line, fily);
		}
		nody->n = (*head)->n;
		nody->next = NULL;
		for (; last->next ; last = last->next){}
		nody->prev = last;
		last->next = nody;
		last = (*head);
		(*head) = (*head)->next;
		free(last);
}
