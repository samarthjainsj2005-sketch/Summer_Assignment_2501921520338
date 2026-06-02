#include<stdio.h>
int main()
{
    int n,s=0,digit;
    printf("Enter a number\n");
    scanf("%d",&n);

    while(n!=0)
    {
        digit=n%10;
        s=s+digit;
        n=n/10;
    }
    printf("Sum of Digits=%d",s);
    return 0;
}