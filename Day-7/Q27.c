#include <stdio.h>
int SumOfDigits(int n);
int main()
{
    int n, s;
    printf("Enter a Number: ");
    scanf("%d", &n);
    s=SumOfDigits(n);
    printf("Sum of digits of %d = %d",n,s); 
    return 0;
}
int SumOfDigits(int n)
{
    if(n == 0)
      return 0;
      return ((n%10)+SumOfDigits(n/ 10));
}