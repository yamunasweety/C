#include <stdio.h>
#include<string.h>
int main() 
{
	char str[100];
	int s,flag=0;
	printf("enter the string:");
	scanf("%s",str);
	for(s=0;str[s]!='\0';s++)
	{
		if(str[s]==str[s+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
