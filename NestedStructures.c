#include <stdio.h>

// child structure declaration
struct child 
{
    int x;
    char c;
};

// parent structure declaration
struct parent 
{
    int a;
    struct child b;
};

// driver code
void main()
{
    struct parent var1 = { 25, 195, 'A' };

    // accessing and printing nested members
    printf("var1.a = %d\n", var1.a);
    printf("var1.b.x = %d\n", var1.b.x);
    printf("var1.b.c = %c", var1.b.c);

    
}