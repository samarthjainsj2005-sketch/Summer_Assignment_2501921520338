#include<stdio.h>
int main()
{
    int n,rev=0,remainder,n1;
    printf("Enter a number\n");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(n1==rev)
    {
       printf("Palindrome number");
    }
    else{
        printf("Not a Palindrome number\n");
    }
    return 0;
}