#include <stdio.h>
// defines the PI value to be 3.14 in the whole program
#define PI 3.14
void main() 
{
    float radius, circumference;
    
    radius = 56.0;
    
    // PI will be replaced by 3.14 in the below statement
    circumference = 2 * PI * radius;
    
    printf("Circumference of Circle : %0.2f", circumference);
    
    
}