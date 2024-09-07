void add(stack_t **stack, unsigned int line_number)
{
    int sum;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    sum = (*stack)->n + (*stack)->next->n;
    pop(stack, line_number); // Remove the top element
    (*stack)->n = sum;       // Update the new top element with the sum
}

