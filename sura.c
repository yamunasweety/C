#include <stdio.h>
int main() 
{
	int s;
	scanf("%d",&s);
	int y=1;
	while(y<s)
	{
		y<<=1;
	}
	printf("%d",y);
	return 0;
}
