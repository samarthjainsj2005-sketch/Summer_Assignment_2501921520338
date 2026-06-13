#include<stdio.h>

int main()
{
	int a[50],i,n,even,odd;
	printf("How many elements:");
	scanf("%d",&n);
	printf("Enter the Array:");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
        even=0;
        odd=0;
	for(i=0;i<n;++i)
	{
		if(a[i]%2==0)
        even++;
        else
        odd++;
	}

	printf("Even= %d",even);
	printf("\nOdd= %d",odd);
	return 0;
}