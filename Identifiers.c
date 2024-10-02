
 
#include <stdio.h> 
  
// here student identifier is used to refer the below structure 
struct _student 
{ 
    int id; 
    int class; 
    char section; 
}; 
  
// isEven identifier is used to call the below 
// function 
void isEven(int num) 
{ 
    if(num%2==0){ 
      printf("It is an Even Number"); 
    } 
      else{ 
      printf("It is not an Even Number"); 
    } 
} 
  
void main() 
{ 
    // identifiers used as variable names. 
    int studentAge = 20; 
    double Marks = 349.50; 
      
    // Calling isEven function. 
    isEven(453); 
  
}