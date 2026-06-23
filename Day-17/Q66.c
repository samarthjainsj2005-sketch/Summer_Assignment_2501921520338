#include <stdio.h>
int isDuplicate(int arr[], int size, int element) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == element) 
        {
            return 1; 
        }
    }
    return 0;
}
int findUnion(int arr1[], int size1, int arr2[], int size2, int unionArr[]) {
    int k = 0; 
    for (int i = 0; i < size1; i++)
     {
        if (!isDuplicate(unionArr, k, arr1[i])) 
        {
            unionArr[k] = arr1[i];
            k++;
        }
    }
    for (int i = 0; i < size2; i++) {
        if (!isDuplicate(unionArr, k, arr2[i])) {
            unionArr[k] = arr2[i];
            k++;
        }
    }

    return k; 
}

int main() 
{
    
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {3, 2, 5, 6, 3, 2};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionArr[size1 + size2]; 
    int unionSize = findUnion(arr1, size1, arr2, size2, unionArr);
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\nUnion of Arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}