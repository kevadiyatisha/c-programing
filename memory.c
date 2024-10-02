
//Access Dynamic Memory
#include <stdio.h>
#include <stdlib.h>

void main() 
{
  // Allocate memory
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));
  int *ptr1 = malloc(4);
  char *ptr2 = (char*) ptr1;

  // Write to the memory
  *ptr = 2;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr1[0] = 1684234849;
  
  // Read from the memory
  printf("%d\n", *ptr);
  printf("%d %d %d", ptr[1], ptr[2], ptr[3]);
  printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

}