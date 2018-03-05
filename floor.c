#include <stdio.h>
int main() 
{
	float s,y,result;
	int si,n;
	scanf("%f %d %f",&s,&n,&y);
	result=((s*n*y)/100);
	si=floor(result);
	printf("\n%d",si);
	return 0;
}
