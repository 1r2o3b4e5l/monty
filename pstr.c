   void pstr(stack_t **stack, unsigned int line_number)
   {
       stack_t *current = *stack;

       (void)line_number; // Unused parameter

       while (current && current->n > 0 && current->n < 128)
       {
           printf("%c", current->n);
           current = current->next;
       }
       printf("\n");
   }
   

