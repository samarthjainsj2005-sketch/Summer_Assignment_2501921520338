#include <stdio.h> 
int main()
{
    int n,fact=1,i,s=0,n1,j;
    printf("Enter a Number ");
    scanf("%d", &n);
    n1 = n;
    for (j = n; j > 0; j = j / 10) 
    {  
        fact = 1;
        for (i = 1; i <= j % 10; i++)  
        {  
            fact = fact * i;  
        }  
        s= s+fact;
    }  
        if(s==n1)
           printf("It is a Strong number");
           else
        printf("It is not a Strong number");
    return 0;
}