#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define your stack structure here
typedef struct stack_s {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

// Function prototypes
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void execute_instruction(char *opcode, stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

