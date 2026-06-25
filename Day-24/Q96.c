#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, k;
 
  	printf("\nEnter any String :  ");
  	gets(str);
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("\n Duplicates Removed= %s ", str);
	
  	return 0;
}