//merge contents of two files using c program
#include<stdio.h>
#include<stdlib.h>

void main ()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    f3=fopen("file3.txt","w");

    if (f1==NULL || f2==NULL || f3==NULL)
    {
        printf("\n ERROR: cannot open file");
        exit(1);
    }

     while(1)
     {
        ch=fgetc(f1);
        if(ch==EOF)
           break;
           fputc(ch,f3);
     }
     fclose(f1);

     while(1)
     {
        ch=fgetc(f2);
        if(ch==EOF)
           break;
           fputc(ch,f3);
     }
     fclose(f2);
     fclose(f3);


}