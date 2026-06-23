#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

void repeating(char *str) 
{
    int freq[MAX_CHARS] = {0};
    int length = strlen(str);
    int found = 0;
    for (int i = 0; i < length; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < length; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("All characters are repeating or the string is empty.\n");
    }
}

int main()
 {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    repeating(str);
    return 0;
}