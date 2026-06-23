#include <stdio.h>
int main()
{
    int n, i, j, a[20];
    int freq[20];
    int visited = -1; 

    printf("Total elements in an array: ");
    scanf("%d", &n);
    
    printf("Enter elements in an array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++) 
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = visited; 
            }
        }
        if(freq[i] != visited)
        {
            freq[i] = count;
        }
    }
    printf("\nElement Frequencies:\n");
    for(i = 0; i < n; i++)
    {
        if(freq[i] != visited)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
    return 0;
}