#include <stdio.h>
int main() 
{
	char s[10];
	int n,y;
	scanf("%s",s);
	n=strlen(s);
	for(y=n-1;y>=0;y--)
	{
		printf("%c",s[y]);
	}
	
	return 0;
}
