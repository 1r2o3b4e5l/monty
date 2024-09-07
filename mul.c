void mul(stack_t **stack, unsigned int line_number)
{
    int product;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    product = (*stack)->next->n * (*stack)->n;
    pop(stack, line_number); // Remove the top element
    (*stack)->n = product;   // Update the new top element with the product
}

