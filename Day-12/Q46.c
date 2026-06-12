#include <stdio.h>
int Armstrong(int n)
 {
    int r, i;
    int s = 0, c = 0;
    int n1 = n;
    while (n1 != 0) 
    {
        c = c+1;
        n1 = n1 / 10;
    } 
    n1 = n; 
    while (n1 != 0)
     {
        r = n1 % 10;     
         s=s+(r*r*r); 
        n1 = n1 / 10;            
    }
    return s;
}
int main()
 {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n == Armstrong(n)) 
    {
        printf("No. is Armstrong\n");
    } 
    else 
    {
        printf("No. is not Armstrong\n");
    }
    
    return 0;
}