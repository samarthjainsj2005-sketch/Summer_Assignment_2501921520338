#include <stdio.h>
int sum(int a, int b)
 {
    return a + b;
}

int main()
 {
   int a,b;
   printf("Enter two numbers");
   scanf("%d%d",&a,&b);
    int c = sum(a,b);
    printf("The sum of %d and %d is %d\n",a,b,c);
    return 0;
}