#include <stdio.h>
#include <string.h>
void compressString(const char *src, char *dest) {
    int srcLen = strlen(src);
    int destIndex = 0;
    if (srcLen == 0) {
        dest[0] = '\0';
        return;
    }

    for (int i = 0; i < srcLen; i++) 
    {
        int count = 1;
        while (i < srcLen - 1 && src[i] == src[i + 1]) {
            count++;
            i++;
        }
        dest[destIndex++] = src[i];

        // Convert the integer count into characters and append
        int charsWritten = sprintf(&dest[destIndex], "%d", count);
        destIndex += charsWritten;
    }
    dest[destIndex] = '\0';
}

int main() 
{
    char src[500];
    char dest[1000];

    printf("Enter a string to compress: ");
    scanf("%499s", src);

    compressString(src, dest);

    printf("Original String: %s\n", src);
    printf("Compressed String: %s\n", dest);

    return 0;
}