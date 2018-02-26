#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	gets(s);
	int y,count=1;
	for(y=0;s[y]!='\0';y++)
	{
		if(s[y]==' ')
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
