//Write a C program to find the largest and smallest element in an array.

#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void main()
{
    int arr[] = {3, 18, 10, 4, 2, 22, 150};
    int i, small, large;
    const int N = ARRAY_SIZE(arr);
    small = arr[0];
    large = arr[0];
    
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    
}