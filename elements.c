#include <stdio.h>
int main() 
{
	int s,temp[10],rot,a[30],y;
	scanf("%d",&rot);
	scanf("%d",&y);
	for(s=0;s<y;s++)
	{
	scanf("%d",&a[s]);
	}
	for(s=0;s<rot;s++)
	{
	temp[s]=a[s];
	}
	for(s=0;s<y-rot;s++)
	{
	a[s]=a[s+rot];
	}
	for(s=0;s<y;s++)
	{
	a[y-rot+s]=temp[s];
	}
	for(s=0;s<y;s++)
	{
	printf("\n %d",a[s]);
	}
	return 0;
}
