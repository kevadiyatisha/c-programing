#include <stdio.h>
#include <float.h> 

struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main() 
{
    // Declare variables to store details for three books
    struct Book book1, book2, book3;

    
    printf("Input details for Book 1:\n");
    printf("Title: ");
    scanf("%s", book1.title); 
    printf("Author: ");
    scanf("%s", book1.author); 
    printf("Price: ");
    scanf("%f", &book1.price);

    
    printf("\nInput details for Book 2:\n");
    printf("Title: ");
    scanf("%s", book2.title);
    printf("Author: ");
    scanf("%s", book2.author);
    printf("Price: ");
    scanf("%f", &book2.price);

    
    printf("\nInput details for Book 3:\n");
    printf("Title: ");
    scanf("%s", book3.title);
    printf("Author: ");
    scanf("%s", book3.author);
    printf("Price: ");
    scanf("%f", &book3.price); 

    //  expensive book
    struct Book mostExpensive;
    if (book1.price >= book2.price && book1.price >= book3.price) 
    {
        mostExpensive = book1;
    } 
    else if (book2.price >= book1.price && book2.price >= book3.price) 
    {
        mostExpensive = book2;
    } 
    else 
    {
        mostExpensive = book3;
    }

    //lowest priced book
    struct Book lowestPriced;
    if (book1.price <= book2.price && book1.price <= book3.price) 
    {
        lowestPriced = book1;
    } 
    else if (book2.price <= book1.price && book2.price <= book3.price) 
    {
        lowestPriced = book2;
    } else 
    {
        lowestPriced = book3;
    }

    
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: %.2f\n", mostExpensive.price);

    
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.2f\n", lowestPriced.price);

    
}