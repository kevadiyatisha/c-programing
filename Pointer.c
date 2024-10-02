#include <stdio.h>

void main() 
{
  int myAge = 43;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  
  int myNumbers[4] = {25, 50, 75, 100};
  int i;

for (i = 0; i < 4; i++)
 {
      printf("%d\n", myNumbers[i]);
 }
  
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);
}   