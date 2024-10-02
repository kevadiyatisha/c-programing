#include <stdio.h>

void main() 
{
    int array[7] = {12, 5, 7, 19, 3, 15, 10};
    int i;
    int max, min;

    max = min = array[0];

    for (i = 0; i < 7; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
        if (array[i] < min) 
        {
            min = array[i];
        }
    }

    // Print the results    
    printf("The maximum value in the array is %d\n", max);
    printf("The minimum value in the array is %d\n", min);
    

    
}
