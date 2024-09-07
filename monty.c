#include "monty.h"

void execute_instruction(char *opcode, stack_t **stack, unsigned int line_number)
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
   


{
    if (opcode == NULL || stack == NULL)
        return;

    // Implement your opcode handling logic here
    if (strcmp(opcode, "push") == 0)
        push(stack, line_number);
    else if (strcmp(opcode, "pall") == 0)
        pall(stack, line_number);
    else if (strcmp(opcode, "pint") == 0)
        pint(stack, line_number);
    else if (strcmp(opcode, "pop") == 0)
        pop(stack, line_number);
    else if (strcmp(opcode, "swap") == 0)
        swap(stack, line_number);
    else
        fprintf(stderr, "Unknown instruction %s at line %u\n", opcode, line_number);
}

