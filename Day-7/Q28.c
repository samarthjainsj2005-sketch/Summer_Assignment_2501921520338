#include <stdio.h>
int rev=0,rem;
int reverse(int n)
{
  if(n)
  {
    rem=n%10;
    rev=rev*10+rem;
    reverse(n/10);
  }
  else
  return rev;
}
int main()
{
  int num, r;
  printf("Enter a number:");
  scanf("%d",&num);
  r=reverse(num);
  printf("Reversed number :%d",r);
  return 0;
}