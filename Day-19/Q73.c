#include<stdio.h>
int main()
{
    int n,i,a[10],b[10],c[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        c[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("c[%d]=%d \n",i,c[i]);
    }
    return 0;
}