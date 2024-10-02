#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node 
{
    int data;
    struct Node* next;
};

void main() 
{
    // Create nodes
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Traverse and print linked list
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    
}
