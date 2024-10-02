#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) 
{
    // Simple argument handling
    if (argc < 2) 
    {
        printf("Usage: %s <option> <value>\n", argv[0]);
        return 1;
    }

    // Iterate over the arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) 
        {
            printf("Help: This is a sample command line parser.\n");
            printf("Usage: %s <option> <value>\n", argv[0]);
            return 0;
        } else if (strcmp(argv[i], "-o") == 0) 
        {
            if (i + 1 < argc) 
            {
                printf("Option -o with value: %s\n", argv[i + 1]);
                i++;  // Skip the value
            } else 
            {
                printf("Error: Option -o requires a value.\n");
                return 1;
            }
        } 
           else 
        {
            printf("Unknown argument: %s\n", argv[i]);
        }
    }

}
