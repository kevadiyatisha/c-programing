//program to demonstrates the use of #if, #elif, #else,
// and #endif  preprocessor directives.
#include <stdio.h>
 
// defining PI
#define PI 3.14159
 
void main()
{
   
#ifdef PI
    printf("PI is defined\n");
   
#elif defined(SQUARE)
    printf("Square is defined\n");
#else
    #error "Neither PI nor SQUARE is defined"
#endif
   
#ifndef SQUARE
    printf("Square is not defined"); 
#else
    cout << "Square is defined" << endl;
#endif
 
    
}