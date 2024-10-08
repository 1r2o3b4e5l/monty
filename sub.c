void sub(stack_t **stack, unsigned int line_number)
{
    int difference;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    difference = (*stack)->next->n - (*stack)->n;
    pop(stack, line_number); // Remove the top element
    (*stack)->n = difference; // Update the new top element with the difference
}

