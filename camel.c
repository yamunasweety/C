#include <stdio.h>
#include<string.h>
int main() 
{
	char str[100];
	int s,len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	if(str[0]>91)
	{
		str[0]=str[0]-32;
	}
	for(s=0;s<len;s++)
	{
	if(str[s]==' ')
	{
	if(str[s])
	str[s+1]=str[s+1]-32;
	}
	}
	}
	printf("\n %s",str);
	return 0;
}
