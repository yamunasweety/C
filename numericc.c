#include <stdio.h>
int main() 
{
	char s[10];
	int y;
	scanf("%s",s);
	for(y=0;s[y]!='\0';y++)
	{
		if(s[y]>='0' && s[y]<='9')
		{
			printf("%c",s[y]);
		}
	}
}
