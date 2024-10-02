#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct 
{
    int items[MAX];
    int top;
} Stack;

void initialize(Stack* s) 
{
    s->top = -1;
}

int isFull(Stack* s) 
{
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) 
{
    return s->top == -1;
}

void push(Stack* s, int item) 
{
    if (isFull(s)) 
    {
        printf("Stack is full\n");
        return;
    }
    s->items[++(s->top)] = item;
}

int pop(Stack* s) 
{
    if (isEmpty(s)) 
    {
        printf("Stack is empty\n");
        return -1; // or handle error as needed
    }
    return s->items[(s->top)--];
}

void printStack(Stack* s) 
{
    for (int i = 0; i <= s->top; i++) 
    {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

void main() 
{
    Stack stack;
    initialize(&stack);
    
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    printStack(&stack);
    
    printf("Popped item: %d\n", pop(&stack));
    printStack(&stack);
    
    
}
