#include <stdio.h>

int main(void) 
{
	char str[100];
	int s,y;
	scanf("%s",str);
	y=strlen(str);
	for(s=0;s<y;s++)
	{
		str[s]=str[s]+3;
		if(str[s]=='X')
		str[s]='A';
		if(str[s]=='Y')
		str[s]='B';
		if(str[s]=='Z')
		str[s]='C';
	}
	printf("\n %s",str);
	return 0;
}
