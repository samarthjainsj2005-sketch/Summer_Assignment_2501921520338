#include <stdio.h>
int main()
 {
    int arr1[50], n, i, j = 0, largest, l2;

    printf("\n\nFind the second largest element in an array :\n");
    printf("Input the size of the array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    largest = 0;
    for (i = 0; i < n; i++) {
        if (largest < arr1[i])
         {
            largest = arr1[i];
            j = i;
        }
    }
    l2 = 0;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++; 
            i--;
        } else 
        {
            if (l2 < arr1[i]) 
            {
                l2 = arr1[i];
            }
        }
    }
    printf("The Second largest element in the array is :  %d \n\n", l2);
}