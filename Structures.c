#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void main() 
{
    struct Person person1;
    
    // Assigning values
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.age = 30;
    
    // Printing values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    
    
}
