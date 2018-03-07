#include<stdio.h>
int main()
{
	int s,y,sum=0;
	printf(" enter the number:");
	scanf("%d",&s);
	for(y=1;y<=s;s++)
	{
		sum=sum+s;
	}
	printf("sum is:%d",sum);
	return 0;
}
