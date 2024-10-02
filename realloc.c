#include <stdio.h>
#include <stdlib.h>

void main() 
{
  int *ptr1, *ptr2, size;

  // Allocate memory for four integers
  size = 4 * sizeof(*ptr1);
  ptr1 = malloc(size);

  printf("%d bytes allocated at address %p \n", size, ptr1);

  // Resize the memory to hold six integers
  size = 6 * sizeof(*ptr1);
  ptr2 = realloc(ptr1, size);

  printf("%d bytes reallocated at address %p \n", size, ptr2);
 
  
}