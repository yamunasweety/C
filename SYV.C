#include<stdio.h>
int main()
{
	int s,y,r=0;
	scanf("%d",&s);
	while(s!=0)
	{
		y=s%10;
		r=r*10+y;
		s=s/10;
	}
	s=r;
	while(s!=0)
	{
		y=s%10;
		printf("%d ",y);
		s=s/10;
	}
	return 0;
}
