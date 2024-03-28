#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n;
    char *endptr;

    if (bus.arg == NULL)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    n = strtol(bus.arg, &endptr, 10);
    if (endptr == bus.arg || *endptr != '\0')
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if (bus.lifi)
    {
        if (addqueue(head, n) == NULL)
        {
            fprintf(stderr, "Error: Failed to push integer\n");
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        if (addnode(head, n) == NULL)
        {
            fprintf(stderr, "Error: Failed to push integer\n");
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }
}

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
    (void)counter;

    if (*head == NULL)
        return;

    for (stack_t *h = *head; h != NULL; h = h->next)
    {
        printf("%d\n", h->n);
    }
}
