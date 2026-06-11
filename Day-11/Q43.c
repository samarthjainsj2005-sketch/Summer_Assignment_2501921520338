#include <stdio.h>
int Prime(int n)
 {
    for (int i=2;i<n; i++) 
    {
        if (n%i== 0) 
        {
            return 0;
        }
    }
    return 1;
}

int main()
 {
    int n;
    printf("Enter a number\n",n);
    scanf("%d",&n);
    if (Prime(n)) 
    {
        printf("Prime no.");
    }
    else 
    {
        printf("Not a prime no.");
    }
    return 0;
}