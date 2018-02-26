#include <stdio.h>
int main() 
{
	int s,y;
	scanf("%d %d",&s,&y);
	int x;
	x=s-y;
	if(x%2==0)
	{
	printf("even");
	}
	else
	printf("odd");
	return 0;
}
