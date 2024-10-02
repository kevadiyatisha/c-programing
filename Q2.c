#include<stdio.h>
void main()
{
        int rows=5;
        for (int i = 0; i < rows; i++) 
    {

        for (int K = 0; K <  rows - i - 1; K++)
        {
            printf(" ");
        }
        
        for (int J = 0; J <= i; J++) 
        {
            printf("*");
        }
        printf("\n");
    } 
}