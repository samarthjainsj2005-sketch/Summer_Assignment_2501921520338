//print fibonacci series
#include <stdio.h>
int main()
{
    int n, i,c;
    int a = 0, b = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d",a,b);
   if(n==0 || n<0)
    {
        printf("No series");     
    }
    else if(n==1)
    {
        printf(" %d",a);       
    }
    else if(n==2)
    {
        printf(" %d",b);
    }
    else 
    {
        printf("%d %d",a,b);
    }
    for (i = 1; i <= n-2; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}