#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct TreeNode 
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int data) 
{
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// In-order traversal
void inOrderTraversal(struct TreeNode* root) 
{
    if (root != NULL) 
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

void main() 
{
    // Create nodes
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    printf("In-order Traversal: ");
    inOrderTraversal(root);
    printf("\n");
    
    // Free allocated memory
    // (In practice, free all nodes to avoid memory leaks)
    
    
}
