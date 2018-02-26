#include <stdio.h>
#include<string.h>
int main() 
{
	char str[80],temp[40];
	int i,j,s,y;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	while(i<j)
	{
		for(i=0;i<s;i++)
		{
			for(j=s;j>=1;j--)
			{
				temp[y]=str[i];
				str[i]=str[j];
				str[j]=str[i];
			}
		}
	}
	printf("yes");
	return 0;
}
	
