//print fibonacci series
#include <stdio.h>
int main()
{
    //taken n=10 just to generate fibonacci series for the example:
    int n=10, i,c;
    int a = 0, b = 1;
    printf("Fibonacci Series: %d %d",a,b);

    for (i = 1; i <= n-2; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}