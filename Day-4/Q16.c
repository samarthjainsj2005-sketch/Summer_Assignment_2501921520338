#include<stdio.h>
int main()
{
    int n,r,start,end;
    int s=0;
    int n1;
    printf("Enter Starting range number\n");
    scanf("%d",&start);
    printf("Enter Ending range number\n");
    scanf("%d",&end);
     printf("The Armstrong numbers between %d and %d are : \n",start,end);
    for(n=start;n<=end;n++)
    {
      n1=n;
      s=0;
    while(n1!=0)
    {
        r=n1%10;
        n1=n1/10;
        s=s+(r*r*r);
    }
      if(s== n)
       printf("%d ",n);
}
 return 0;
}