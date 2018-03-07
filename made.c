#include<stdio.h>
int main()
{
	int s,y,sum=0;
	printf(" \n enter the number:");
	scanf("%d",&s);
	for(y=1;y<=s;s++)
	{
		sum=sum+s;
	}
	printf("\n sum is:%d",sum);
	return 0;
}
