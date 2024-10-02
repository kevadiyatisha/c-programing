#include <stdio.h>

// Define a function that matches the signature of our function pointer
int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

// Function that takes a function pointer as an argument
int compute(int (*operation)(int, int), int x, int y) 
{
    return operation(x, y);
}

int main() 
{
    // Declare function pointers and assign them to functions
    int (*add_ptr)(int, int) = add;
    int (*subtract_ptr)(int, int) = subtract;

    // Use function pointers
    printf("Addition: %d\n", add_ptr(5, 3));
    printf("Subtraction: %d\n", subtract_ptr(5, 3));

    // Pass function pointers to other functions
    printf("Compute using add: %d\n", compute(add_ptr, 7, 2));
    printf("Compute using subtract: %d\n", compute(subtract_ptr, 7, 2));
  
}
