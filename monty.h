#ifndef MONTY_H
#define MONTY_H

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

extern stack_t *head;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_strdup(char *str);
int stack_size(stack_t **head);

void less_than_2();
void can_not_open();
void invalide(char *cp, char *line, FILE **fily);

void push(stack_t **stack, char *str_num, char *cp, char *line, FILE **fily);
void print(stack_t **stack);
int decide_validity(char *str, unsigned int line_num, FILE **fily);
void decide_arg_validity(char *str, unsigned int line_num, FILE **fily);
void pop(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void decide_execution(char *str, stack_t **head, unsigned int line_num, FILE **fily);
void swap(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void add(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void free_stack(stack_t **head);
void pint(stack_t **head, char *str, char *cp, FILE **fily, unsigned int line_num);
void sub(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void division(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void mul(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void mod(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void pchar(stack_t **head, unsigned int line_num, FILE **fily, char *str, char *cp);
void pstr(stack_t **head, FILE **fily, char *str, char *cp);
void rotl(stack_t **head, FILE **fily, char *cp, char *line);
void rotr(stack_t **head, FILE **fily, char *cp, char *line);
#endif
