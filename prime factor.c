#include <stdio.h>
int main() 
{
	int num,s,y,flag=1;
	scanf("%d",&num);
	for(y=2;y<=num;y++)
	{
		if(num%y==0)
		{
			flag=1;
			for(s=2;s<=y/2;s++)
			{
			if(y%s==0)
			{
			flag=0;
			break;
			}
			}
		
	
	if(flag==1)
	{
		printf("%d ",y);
	}
		}
	}
	return 0;
}
