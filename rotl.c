   void rotl(stack_t **stack, unsigned int line_number)
   {
       if (*stack == NULL || (*stack)->next == NULL)
           return; // No need to rotate if there's 0 or 1 element

       stack_t *top = *stack;
       stack_t *second = top->next;

       // Find the last element
       while (second->next != NULL)
           second = second->next;

       // Rotate
       *stack = top->next; // New top is the second element
       top->next = NULL;   // Remove old top from its position
       second->next = top; // Last element points to old top
   }
   

