#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number to print the sum till n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
}
