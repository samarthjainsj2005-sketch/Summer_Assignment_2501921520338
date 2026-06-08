#include<stdio.h>
int main()
{
    int n=5,i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
       ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch+(j-1));
        }
        printf("\n");
    }
    return 0;
}