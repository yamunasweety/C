#include <stdio.h>
int main()
{
	int s,y,a[10],i;
	scanf("%d %d",&s,&y);
	for(i=0;i<y;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[y-1]);
	return 0;
}
