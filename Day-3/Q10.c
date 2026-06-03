#include<stdio.h>
int main()
{
    int i,n1,n2,j,c,n;
    printf("Enter the lower Range number");
    scanf("%d",&n1);

    printf("Enter the Upper Range number");
    scanf("%d",&n2);
    printf("The prime numbers between %d and %d are : \n",n1,n2);
    for(n=n1;n<=n2;n++)
    {
        c=0;
        for(i=2; i<=n/2;i++) 
        {
            if(n%i== 0) 
            {
                c++;
            }
        }
     if(c==0 && n!=1)
     {
       printf("%d ",n);
     }
    }
   return 0;
}



    
