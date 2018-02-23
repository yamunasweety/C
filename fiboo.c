#include <stdio.h>

int main() 
{
	int y,f=0,s=1,count=0,t;
	printf("enter number");
	scanf("%d",&y);
	printf("%d\t",s);
	while(count<=y-2)
	{
		t=f+s;
	f=s;
	s=t;
	printf("%d\t",s);
	count++;
	}
	return 0;
}
