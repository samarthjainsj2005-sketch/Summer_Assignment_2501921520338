#include <stdio.h>
#include <string.h>
 
int countSetBits(int n)
{
  int c;
  for (c = 0; n; n >>= 1)
  {
    c += n & 1;
  }
  return c;
}
 
int main(void)
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("%d\n", countSetBits(n));
}