#include <stdio.h>
#include <stdlib.h>

typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

// Function to create a new queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Enqueue operation
void enqueue(Queue* queue, int data) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }
    
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Dequeue operation
int dequeue(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue Underflow\n");
        exit(EXIT_FAILURE);
    }
    
    QueueNode* temp = queue->front;
    int dequeuedData = temp->data;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL; // If the queue is empty, reset rear
    }

    free(temp);
    return dequeuedData;
}

// Peek operation
int peek(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    return queue->front->data;
}

// Check if empty
int isEmpty(Queue* queue) {
    return queue->front == NULL;
}

