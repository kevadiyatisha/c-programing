// C program to illustrate fopen()
 
#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
 
    // pointer demo to FILE
    FILE* demo;
    int display;
 
    // Creates a file "demo_file"
    // with file access as read mode
    demo = fopen("demo_file.txt", "r");
 
    // loop to extract every characters
    while (1) 
    {
        // reading file
        display = fgetc(demo);
 
        // end of file indicator
        if (feof(demo))
            break;
 
        // displaying every characters
        printf("%c", display);
    }
 
    // closes the file pointed by demo
    fclose(demo);

    // Open the file "test.txt" in read mode
    FILE* fp = fopen("test.txt", "r");
    // Read the first character from the file
    int ch = getc(fp);
 
    // Loop until the end of the file is
    // reached
    while (ch != EOF) 
    {
        /* display contents of file on screen */
        putchar(ch);
 
        // Read the next character from the file
        ch = getc(fp);
    }
 
    // Check if the end-of-file indicator is
    // set for the file
    if (feof(fp))
        printf("\n End of file reached.");
    else
        printf("\n Something went wrong.");
 
    // Close the file
    fclose(fp);
 
    // Wait for a keypress
    getchar();
}

