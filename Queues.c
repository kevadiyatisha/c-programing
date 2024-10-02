#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct 
{
    int items[MAX];
    int front, rear;
} Queue;

void initialize(Queue* q) 
{
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue* q) 
{
    return q->rear == MAX - 1;
}

int isEmpty(Queue* q) 
{
    return q->front == -1 || q->front > q->rear;
}

void enqueue(Queue* q, int item) 
{
    if (isFull(q)) 
    {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) 
    {
        q->front = 0;
    }
    q->items[++(q->rear)] = item;
}

int dequeue(Queue* q) 
{
    if (isEmpty(q)) 
    {
        printf("Queue is empty\n");
        return -1; // or handle error as needed
    }
    return q->items[(q->front)++];
}

void printQueue(Queue* q) 
{
    for (int i = q->front; i <= q->rear; i++) 
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

void main() 
{
    Queue queue;
    initialize(&queue);
    
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    
    printQueue(&queue);
    
    printf("Dequeued item: %d\n", dequeue(&queue));
    printQueue(&queue);
    
    
}
