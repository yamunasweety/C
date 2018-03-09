#include <stdio.h>
int main() 
{
	int s,y,i,a[10],temp;
	scanf("%d %d",&s,&y);
	for(i=0;i<s;i++)
	{
		scanf("\n %d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("\n %d",a[y-1]);
	return 0;
}
