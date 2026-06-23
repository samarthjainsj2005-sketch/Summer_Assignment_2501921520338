#include<stdio.h>
int main()
{
    int n,i,begin,end,mid,a[50],ele;
    printf("Enter total no of elements in an array");
    scanf("%d",&n);
    printf("Enter elements in an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements to be searched");
    scanf("%d",&ele);
    begin=0;
    end=n-1;
    mid=(begin+end)/2;

    while(begin<=end && a[mid]!=ele)
    {
        if(ele<a[mid])
        {
            end=mid-1;
        }
        else if(ele>a[mid])
        {
            begin=mid+1;                
        }
        mid=(begin+end)/2;
    }
    if(a[mid]==ele)
    {
      printf("Element found at location: %d\n",mid+1);
    }
    else
    {
      printf("Unsuccessful search");

     return 0;
    }
}
