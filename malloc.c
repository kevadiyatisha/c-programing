#include <stdio.h>
#include <stdlib.h>

void main() 
{
  int *students;
  int numStudents = 12;
  students = calloc(numStudents, sizeof(*students));
  printf("%d", numStudents * sizeof(*students)); // 48 bytes
  
  
}