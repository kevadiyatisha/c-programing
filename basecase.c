#include <stdio.h>

// Recursive function to compute factorial
int factorial(int n) 
{
    // Base case: when n is 0, return 1
    if (n == 0) 
    {
        return 1;
    }
    // Recursive case: n * factorial of (n - 1)
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    
}
