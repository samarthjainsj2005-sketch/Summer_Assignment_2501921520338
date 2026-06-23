#include <stdio.h>
#include <string.h>
void reverseString(char *str)
 {
    if (str == NULL) return; 

    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) 
    {
        str[strcspn(str, "\n")] = '\0';

        printf("Original String: %s\n", str);
        reverseString(str);
        printf("Reversed String: %s\n", str);
    }
    return 0;
}