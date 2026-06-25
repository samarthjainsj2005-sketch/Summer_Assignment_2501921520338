#include <stdio.h>
#include <string.h>

#define max 256 

void common(const char *str1, const char *str2) {
    int freq1[max] = {0};
    int freq2[max] = {0};
    int found = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    printf("Common characters: ");

    for (int i = 0; i < max; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            int min_count = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
            for (int j = 0; j < min_count; j++) {
                printf("%c ", i);
            }
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    common(str1, str2);

    return 0;
}
