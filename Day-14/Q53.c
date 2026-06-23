#include<stdio.h>
int main()
{
    int n,i,a[10],ele,loc=-1;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
             loc=i+1;
            break;
        } 
    }
    if(loc==-1)
    {
        printf("Element not found in the array\n");
    }
    else
    {
        printf("Element found at location: %d\n",loc);
    }
    return 0;
}