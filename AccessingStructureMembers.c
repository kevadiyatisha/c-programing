#include <stdio.h>  
#include <string.h>  
  
struct Person 
{  
    char name[50];  
    int age;  
    float height;  
};  
  
int main() 
{  
    struct Person person1;  
      
    // Accessing structure members  
    strcpy(person1.name, "John Doe");  
    person1.age = 25;  
    person1.height = 6.1;  
      
    // Printing structure member values  
    printf("Name: %s\n", person1.name);  
    printf("Age: %d\n", person1.age);  
    printf("Height: %.2f\n", person1.height);  

}