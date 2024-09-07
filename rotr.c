   void rotr(stack_t **stack, unsigned int line_number)
   {
       if (*stack == NULL || (*stack)->next == NULL)
           return; // No need to rotate if there's 0 or 1 element

       stack_t *current = *stack;
       stack_t *prev = NULL;

       // Find the last element
       while (current->next != NULL)
       {
           prev = current;
           current = current->next;
       }

       // Rotate
       current->next = *stack; // Last element points to old top
       prev->next = NULL;      // Remove last element from its position
       *stack = current;       // New top is the last element
   }
   

