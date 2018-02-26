#include <stdio.h>
int main() 
{
	int s,y,m;
	scanf("%d %d",&s,&y);
	m=s+y;
	if(m%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
