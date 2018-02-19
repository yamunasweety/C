#include<stdio.h>
int main()
{
	int s,y;
	scanf("%d",&y);
	s=(y&(y-1));
	if(s==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
