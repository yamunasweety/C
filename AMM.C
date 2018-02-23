#include<stdio.h>
#include<string.h>
int main()
{
	int y,sum=0,s;
	scanf("%d",&y);
	while(y!=0)
	{
		s=y%10;
		sum=sum+s;
		y=y/10;
	}
	printf("%d",sum);
	return 0;
}
