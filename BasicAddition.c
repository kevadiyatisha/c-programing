#include <stdio.h>
// Function to add two numbers
int add(int x, int y)
{
    return x + y;
}

struct Numbers
 {
    int a;
    int b;
 };
void main()
{
    // First number
    int a = 5;
    // Second number
    int b = 3;
    // Add the numbers
    int sum = a + b;
    // Print the result
     printf("Sum: %d\n", sum);

   
//Using a Function
//Call the function to add the numbers
    int sum = add(a, b);
    // Print the result
    printf("Sum: %d\n", sum);


//Using Pointers
    //Pointer to the first number
    int *p1 = &a;
    // Pointer to the second number
    int *p2 = &b;
    // Add the numbers using pointers
    int sum = *p1 + *p2;
    // Print the result
    printf("Sum: %d\n", sum);

//Using Arrays
    //Array of first numbers
    /*int nums1[] = {1, 2, 3};
    // Array of second numbers
    int nums2[] = {4, 5, 6};
    // Array to store sums
    int sum[3];
    // Loop to add corresponding elements
    for (int i = 0; i < 3; i++) 
    {
        sum[i] = nums1[i] + nums2[i];
    }
    // Loop to print the results
    for (int i = 0; i < 3; i++) {
        printf("Sum of pair %d: %d\n", i + 1, sum[i]);
    }*/

//Using Structures
// Define a structure to hold two numbers
// Initialize the structure
    struct Numbers nums = {5, 3};
    // Add the numbers
    int sum = nums.a + nums.b;
    // Print the result
    printf("Sum: %d\n", sum);
    

}

