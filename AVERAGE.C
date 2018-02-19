#include<stdio.h>
int main()
{
	int s,a[50],sum=0,avg;
	scanf("%d",&s);
	for(int i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<s;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/s;
	printf("%d",avg);
	return 0;
}
