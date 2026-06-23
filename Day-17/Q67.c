#include <stdio.h>
void intersection(int arr1[], int size1, int arr2[], int size2)
 {
    printf("Intersection of the two arrays: ");
    int common = 0;
    for (int i = 0; i < size1; i++) 
    {
        int duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) 
        {
            continue; 
        }
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                common = 1;
                break; 
            }
        }
    }

    if (!common) {
        printf("No common elements found.");
    }
    printf("\n");
}

int main() 
{
   int j;
    int array1[] = {1, 4, 6, 10, 9};
    int array2[] = {9, 7, 10, 8, 2};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    printf("Array 1: ");
    for(int i = 0; i < size1; i++) printf("%d ", array1[i]);
    printf("\n");

    printf("Array 2: ");
    for(int i = 0; i < size2; i++) printf("%d ", array2[j = i]);
    printf("\n\n");
    intersection(array1, size1, array2, size2);
    return 0;
}