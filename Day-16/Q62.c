#include <stdio.h>
int MaxElement(int arr[], int size, int *maxCount) 
{
    int maxElement = arr[0];
    *maxCount = 0;
    for (int i = 0; i < size; i++) 
    {
        int count = 0;
        for (int j = 0; j < size; j++)
         {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > *maxCount) 
        {
            *maxCount = count;
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main() 
{
    int arr[] = {4, 2, 7, 4, 7, 5, 7, 4, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int maxFreqElement = MaxElement(arr, size, &maxCount);
    printf("The element with the maximum frequency is: %d\n", maxFreqElement);
    printf("It appears %d times.\n", maxCount);
    return 0;
}