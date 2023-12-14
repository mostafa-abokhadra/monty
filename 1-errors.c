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
void invalide(unsigned int line_num, char *opcode, char *cp, char *line)
{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
		free(cp);
		free(line);
		free_stack(&head);
		exit(EXIT_FAILURE);
}

/**
 *
 *
 *
 *
 */
void invalid_arg(unsigned int line_num, char *line, FILE **fily)
{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		free_stack(&head);
		free(line);
		fclose(*fily);
		exit(EXIT_FAILURE);
}
/**
 *
 *
 *
 *
 */
void not_enough(FILE **fily, char *cp, char *line)
{
		fprintf(stderr, "Error: malloc failed\n");
		free(line);
		free(cp);
		fclose(*fily);
		free_stack(&head);
		exit(EXIT_FAILURE);
}

/**
 *
 *
 *
 *
 *
 */
void empty_stack(unsigned int line_num, FILE **fily, char *str, char *cp)
{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		free(str);
		free(cp);
		fclose(*fily);
		exit(EXIT_FAILURE);
}
void can_not_swap(unsigned int line_num, FILE **fily, char *str, char *cp)
{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		free(cp);
		free(str);
		fclose(*fily);
		free_stack(&head);
		exit(EXIT_FAILURE);
}
void can_not_add(unsigned int line_num, FILE **fily, char *str, char *cp)
{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		free(cp);
		free(str);
		fclose(*fily);
		free_stack(&head);
		exit(EXIT_FAILURE);
}
