#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int y,i,flag=0;
	gets(s);
	y=strlen(s);
	for(i=0;i<y;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
		return 0;
}
