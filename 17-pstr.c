#include "monty.h"

void pstr(stack_t **head, FILE **fily, char *str, char *cp)
{
		stack_t *t = *(head);
		char *asci_str = NULL;
		int size;
		int i = 0;

		if (!(*head))
		{
			printf("\n");
			return;
		}
		size = stack_size(head);
		asci_str = malloc(sizeof(char) * size + 1);
		if (!asci_str)
		{
			fprintf(stderr, "Error: malloc failed\n");
			invalide(cp, str, fily);
		}
		while (t != NULL && (t->n >= 0 && t->n <=127) && t->n != 0)
		{
			asci_str[i] = (char)t->n;
			t = t->next;
			i++;
		}
		asci_str[i] = '\0';
		printf("%s\n", asci_str);
		free(asci_str);
}
