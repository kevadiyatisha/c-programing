#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

void main()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    if ((fptr = fopen("program.bin","rb")) == NULL)
    {
        printf("Error! opening file");
         // Program exits if the file pointer returns NULL.
         exit(1);
    }
     for(n = 1; n < 5; ++n)
     {
         fread(&num, sizeof(struct threeNum), 1, fptr);
         printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
     }
     fclose(fptr);
     
}
    