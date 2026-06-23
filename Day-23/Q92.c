#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; 
    int i, max_idx;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }
    max_idx = 0;
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > freq[max_idx]) 
        {
            max_idx = i;
        }
    }
    printf("The maximum occurring character is '%c' and it appears %d times.\n", max_idx, freq[max_idx]);
    return 0;
}