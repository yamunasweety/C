#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int s,y,n1,n2,count=0;
	scanf("%s %s",str1,str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1==n2)
	{
		for(s=0;s<n1;s++)
		{
			if(str1[s]==str2[s])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\n yes");
		}
		else
		{
			printf("\n no");
		}
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
