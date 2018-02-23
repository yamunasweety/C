#include <stdio.h>
int main() 
{
	char y[10];
	scanf("%s",y);
	int n,m;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		printf("%c",y[m]);
	}
	return 0;
}
