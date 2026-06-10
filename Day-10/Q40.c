#include <stdio.h>
int main()
 {
    int n,i,j;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
     {
        for (int space=1;space<=n-i;space++) 
        {
            printf(" ");
        }
        char ch='A';
        for (int j = 1; j <= i; j++) 
        {
            printf("%c",ch+j-1);
        }
        for (int j = i - 1; j >= 1; j--) 
        {
            printf("%c",ch+j-1);
        }
        printf("\n");
    }
}
