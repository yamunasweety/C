#include <stdio.h>
#include<string.h>
int main()
{
	char y[10];
	scanf("%s",y);
	int i,flag=0,m;
	m=strlen(y);
	for(i=0;i<m;i++)
	{
		if(y[i]=='1' || y[i]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
