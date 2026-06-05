#include <stdio.h>

int maxPrimeFactor(int n) {
    int max = -1;
    
   
    for (int i = 2; i * i <= n; i++) 
    {
        while (n % i == 0) 
        {
            max = i;
            n /= i;
        }
    }
    return n > 1 ? n : max;
}

int main() {
    printf("Largest prime factor: %d\n", maxPrimeFactor(24)); 
    return 0;
}