#include <stdio.h>
int main() 
{
	int l,r,s,y,count=0,flag=1;
	scanf("%d",&l);
	scanf(" %d",&r);
	if(l==2)
	{
	count++;
	}
	for(s=l;s<=r;s++)
	{
	for(y=2;y<s;y++)
	{
	if(s%y==0)
	{
	flag=0;
	break;
	}
	}
	if(flag==1)
	{
	count=count+1;
	}
	}
            printf("\n %d",count);
	return 0;
}
