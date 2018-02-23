#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int alp=0,num=0;
	scanf("%s",s);
	int y,m;
	m=strlen(s);
	for(y=0;y<m;y++)
	{
		if(('s'<=s[y] && s[y]<='z') || ('A'<=s[y] && s[y]<='Z'))
		{
			alp=1;
		}
		if('0'<=s[y] && s[y]<='9')
		{
			num=1;
		}
	}
	if(num==1 && alp==1)
	{
		printf("yes");
	}
	else
		printf("no");
return 0;
}
