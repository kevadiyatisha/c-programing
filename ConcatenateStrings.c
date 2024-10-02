#include <stdio.h>
#include <string.h>
 
void main() 
{
  char str1[20] = "Hello ";
  char str2[] = "World!";
 
// Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
// Print str1
  printf("\n%s", str1);
 
// Copy str1 to str2
  strcpy(str2, str1);

// Print str2
  printf("\n%s", str2);
  
  
}