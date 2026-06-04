#include<stdio.h>
int main()
{
    int n,r;
    int s=0,c=0;
    int n1,n2;
    printf("Enter a number\n");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        c=c+1;
        n=n/10;
    }
    n2=n1;
    while(n1!=0)
    {
        r=n1%10;
        s=s+(r*r*r);
        n1=n1/10;
        printf("%d\n",s);
    }

    if(s==n2)
    {
        printf("No. is Armstrong");
    }
    else
    {
        printf("No. is not Armstrong");
    }
    return 0;
}