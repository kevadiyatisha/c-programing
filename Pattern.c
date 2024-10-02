#include <stdio.h>

void main()
{
    int rows = 5;

// first loop for printing rows
    for (int i = 0; i < rows; i++)
    {
        // second loop for printing character in each rows
        for (int j = 0; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

            printf("\n");

// first loop is for printing the rows
    for (int i = 0; i < rows; i++) 
    {

        // loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }
        // loop for printing * character
        for (int k = 0; k <= i; k++) 
        {
            printf("* ");
        }
        printf("\n");
    } 

         printf("\n");

// first loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) 
        {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) 
        {
            printf("* ");
        }
        printf("\n");
    } 
  
       printf("\n");
// first loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // first inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
       printf("\n");

// first loop for printing all rows
    for (int i = 0; i < rows; i++) 
    {

        // first inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++) 
        {
            printf(" ");
        }

        // second inner loop for printing star *
        for (int k = 0; k < rows - i; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }

        printf("\n");

// first loop for printing all rows
    for (int i = 0; i < rows; i++) 
    {

        // first inner loop for printing leading white
        // spaces
        for (int j = 0; j < 2 * i; j++) 
        {
            printf(" ");
        }

        // second inner loop for printing stars *
        for (int k = 0; k < 2 * (rows - i) - 1; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
        printf("\n");

// first outer loop to iterate through each row
    for (int i = 0; i < rows; i++) 
    {

        // first inner loop to print white spaces
        for (int j = 0; j < rows - i - 1; j++) 
        {
            printf(" ");
        }

        // second inner loop to print * star in each row
        for (int k = 0; k < rows; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }

        printf("\n");

// first outer loop to iterate through each row
   int n1=5;

    for (int i = 0; i < 2 * n1 - 1; i++) 
    {

        // assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n1) 
        {
            comp = 2 * (n1 - i) - 1;
        }
        else 
        {
            comp = 2 * (i - n1 + 1) + 1;
        }

    // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) 
        {
            printf(" ");
        }

        // second inner loop to print stars *
        for (int k = 0; k < 2 * n1 - comp; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
       printf("\n");

// first outer loop to iterate each row
    for (int i = 0; i < 2 * rows - 1; i++) 
    {

        // assigning comparator
        int comp;
        if (i < rows) 
        {
            comp = 2 * i + 1;
        }
        else 
        {
            comp = 2 * (2 * rows - i) - 3;
        }

        // first inner loop to print leading spaces
        for (int j = 0; j < comp; j++) 
        {
            printf(" ");
        }

        // second inner loop to print star *
        for (int k = 0; k < 2 * rows - comp; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
        printf("\n");

// outer loop to iterator through each row
    for (int i = 0; i < rows; i++) 
    {

        // inner loop to print * star in each row
        for (int j = 0; j < rows; j++) 
        {
            // statement to check boundry condition
            if (i > 0 && i < rows - 1 && j > 0
                && j < rows - 1) 
            {
                printf("  ");
            }
            else 
            {
                printf("* ");
            }
        }
        printf("\n");
    }
        printf("\n");
    
// first outer loop to iterate through each loop
    for (int i = 0; i < rows; i++) 
    {

        // first inner loop to print leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) 
        {
            printf(" ");
        }

        // second inner loop to print stars * and inner
        // whitespaces
        for (int k = 0; k < 2 * i + 1; k++) 
        {
            if (k == 0 || k == 2 * i || i == rows - 1) 
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
        printf("\n");

// first loop iterating through each row
    for (int i = 0; i < rows; i++) 
    {

        // first inner loop to print leading white space
        for (int j = 0; j < 2 * i + 1; j++) 
        {
            printf(" ");
        }

        // second inner loop to print star* and hollow white
        // space
        for (int k = 0; k < 2 * (rows - i) - 1; k++) 
        {
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0)
                printf("* ");
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n");

// first outer loop to iterator through each row
    for (int i = 0; i < 2 * n1 - 1; i++) 
    {
        // assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n1) 
        {
            comp = 2 * (n1 - i) - 1;
        }
        else 
        {
            comp = 2 * (i - n1 + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) 
        {
            printf(" ");
        }

        // second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n1 - comp; k++) 
        {
            if (k == 0 || k == 2 * n1 - comp - 1) 
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
        printf("\n");

// first outer loop to iterate through each row
    for (int i = 0; i < 2 * n1 - 1; i++) 
    {

        // assigning comparator
        int comp;
        if (i < n1) 
        {
            comp = 2 * i + 1;
        }
        else 
        {
            comp = 2 * (2 * n1 - i) - 3;
        }

        // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) 
        {
            printf(" ");
        }

        // second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n1 - comp; k++) 
        {
            if (k == 0 || k == 2 * n1 - comp - 1 || i == 0
                || i == 2 * n1 - 2) 
            {
                printf("* ");
            }
        else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
        printf("\n");

    //int rows = 4;
    int n = 1;

    // outer loop to print all rows
    for (int i = 0; i < rows; i++) 
    {

        // innter loop to print abphabet in each row
        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
        printf("\n");
    
int rows1 = 5;

    // outer loop for rows
    for (int i = 1; i <= rows1; i++) 
    {

        // inner loop 1 for leading white spaces
        for (int j = 0; j < rows1 - i; j++) 
        {
            printf(" ");
        }

        int C = 1; // coefficient

        // inner loop 2 for printing numbers
        for (int k = 1; k <= i; k++) 
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }

}