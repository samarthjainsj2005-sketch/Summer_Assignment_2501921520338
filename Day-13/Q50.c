#include <stdio.h>
int main()  
{  
    int arr[10];
    int i, sum = 0,avg;
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
        printf("element - %d : ", i); 
        scanf("%d", &arr[i]);  
    }  
    
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);
    } 
    printf("\n");
    for(i=0; i<10; i++) 
    {
        sum = sum + arr[i];
    } 
    avg=sum/10;
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    return 0;
}