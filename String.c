#include <stdio.h>

void main()
{
  char greetings[] = "Hello World!";
  printf("%s", greetings);
 
//Access Strings
  printf("\n%c", greetings[0]);

//Modify Strings
  greetings[0] = 'J';
  printf("\n%s", greetings);

//Loop Through a String
    char carName[] = "Volvo";
    int i;
  
    for (i = 0; i < 5; ++i) 
    {
          printf("%c\n", carName[i]);
    }

}