#include <stdio.h>

int main() 
{
	char str[20];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='+';
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]!='+')
	{
	printf("%c",str[i]);
	}
	}
	return 0;
}
