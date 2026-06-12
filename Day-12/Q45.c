#include <stdio.h>
int Palindrome(int n) {
    int digit;
    int rev = 0;
    
    while (n != 0) 
    {
        digit = n % 10;           
        rev = rev * 10 + digit;    
        n = n / 10;                
    }
    return rev;
}
int main() 
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n == Palindrome(n)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}