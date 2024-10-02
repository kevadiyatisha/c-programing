#include <stdio.h>
void main() 
{
    int a, b, product;
    
    // we can use printf() and scanf() function because 
    // these functions are pre-defined in the stdio.h header file
    printf("Enter two numbers to find their sum : ");
    
    scanf("%d %d", &a, &b);
    
    product = a*b;
    
    printf("Sum of %d and %d is : %d", a, b, product);
    

}