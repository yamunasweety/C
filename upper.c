#include <stdio.h>
int main() 
{
	char a[20];
	scanf("%s",a);
	int i,u,v;
	for(i=0;a[i]!='\0';i++)
	{
		u=a[i];
		if(u>91)
		{
			v=u-32;
			a[i]=v;
		}
		if(u<97)
		{
			v=u+32;
			a[i]=v;
		}
	}
	printf("%s",a);
	return 0;
}
