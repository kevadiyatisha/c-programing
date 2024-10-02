#include <stdio.h>

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n = 9;
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
