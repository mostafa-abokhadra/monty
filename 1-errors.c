#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
void less_than_2()
{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
}

/**
 *
 *
 *
 *
 *
 */
void can_not_open(char *file_name)
{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
}

/**
 *
 *
 *
 *
 *
 */
void invalide(char *cp, char *line, FILE **fily)
{
		
		free(cp);
		free(line);
		free_stack(&head);
		fclose(*fily);
		exit(EXIT_FAILURE);
}
