#include <stdio.h>
int Perfect_no(int n)
 {
    int r, s = 0, i; 
    for (i = 1; i <= n - 1; i++) {
        r = n % i;
        if (r == 0) {
            s = s + i;
        }
    }
    return s;
}
int main()
 {
    int n;   
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n == Perfect_no(n))
     {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}