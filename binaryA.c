#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) 
{
    if (right >= left) 
    {
        int mid = left + (right - left) / 2;
        
        // If the element is present at the middle itself
        if (arr[mid] == x) return mid;

        // If the element is smaller than mid, then it is in the left subarray
        if (arr[mid] > x) return binarySearch(arr, left, mid - 1, x);

        // Else it is in the right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // Element is not present in the array
    return -1;
}

int main() 
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element not present in array\n") :
                     printf("Element found at index %d\n", result);
    return 0;
}
