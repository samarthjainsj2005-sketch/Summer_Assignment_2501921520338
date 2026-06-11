#include <stdio.h>
int max(int a, int b)
 {
    if(a>b)
    return a;
    else
    return b;
}

int main()
 {
   int a,b;
   printf("Enter two numbers");
   scanf("%d%d",&a,&b);
    int c = max(a,b);
    printf("The max of %d and %d is %d\n",a,b,c);
    return 0;
}