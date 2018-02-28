#include <stdio.h>
#include<string.h>
int main() 
{
	char s[10];
	int y;
	scanf("%s",s);
	y=strlen(s);
	if(y%2==0)
	{
		s[y/2]='*';
		s[(y/2)-1]='*';
	}
	else
	{
		s[y/2]='*';
	}
	printf("%s",s);
	return 0;
}
