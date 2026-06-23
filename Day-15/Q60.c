#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[] = {5, 0, 78, 0, 7, 2, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, n);
    moveZeroesToEnd(arr, n);
    printf("Array after moving zeroes to the end:\n");
    printArray(arr, n);
    return 0;
}