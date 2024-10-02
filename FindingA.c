#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() 
{
    int a = 56, b = 98;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
