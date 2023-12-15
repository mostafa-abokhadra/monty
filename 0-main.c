#define _GNU_SOURCE
#include "monty.h"

stack_t *head = NULL;

/**
 * main - entry point
 * @argc: arg count
 * @argv: list of args
 *
 * Description: entry to pocodes
 * Return: 0
 */
int main(int argc, char **argv)
{
		FILE *fily;
		unsigned int line_num = 0;
		char *buffer = NULL;
		size_t size = 0;

		if (argc < 2)
			less_than_2();
		fily = fopen(argv[1], "r");
		if (!fily)
			can_not_open(argv[1]);
		for (; getline(&buffer, &size, fily) != -1 ;)
		{
			line_num++;
			if (decide_validity(buffer, line_num, &fily))
				continue;
			decide_arg_validity(buffer, line_num, &fily);
			decide_execution(buffer, &head, line_num, &fily);
		}
		free_stack(&head);
		free(buffer);
		fclose(fily);
		return (0);
}
