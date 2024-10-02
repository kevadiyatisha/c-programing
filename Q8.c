//Write a C program to calculate the factorial of a number using recursion.

#include<stdio.h>

int multiplyNumbers(int n);
void main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    
}

 int multiplyNumbers(int n) 
{
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
