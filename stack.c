#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

typedef struct Stack {
    StackNode* top;
} Stack;

// Function to create a new stack
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

// Push operation
void push(Stack* stack, int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Pop operation
int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    StackNode* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

// Peek operation
int peek(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->top->data;
}

// Check if empty
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

