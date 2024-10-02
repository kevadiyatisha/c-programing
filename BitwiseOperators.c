#include <stdio.h>

void main() 
{

    int a = 12, b = 25;
    int num=212, i;

    //Bitwise AND
    printf("Output = %d", a & b);

    //Bitwise OR
    printf("Output = %d", a | b);

    //Bitwise XOR
     printf("Output = %d", a ^ b);

    //Shift Operators
     for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");

    for (i = 0; i <= 2; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);    
    }

    //Bitwise complement
    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);
    
}