#include <stdio.h>
void Fibonacci(int n) 
{
    int a = 0, b = 1, c, i;
    for (i = 1; i <= n - 2; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\n");
}
int main() 
{
    //n=12 taken for example
    int n = 12;
    int a = 0, b = 1;
    printf("Fibonacci Series: %d %d", a, b);
    Fibonacci(n);
    return 0;
}