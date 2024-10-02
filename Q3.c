#include <stdio.h>


void main() 
{
    int num , i, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    for(i = 1; i<=num; i++) 
    {
        fact = fact * i;
        
    }
    printf("The factorial of %d is %d\n", num, fact);
}
