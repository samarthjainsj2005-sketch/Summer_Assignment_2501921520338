#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    while(n>0)
    {
        n=n%10;
        c=c+n;
        n=n/10;
    }
    printf("Counted Digits=%d",c);
    return 0;
}