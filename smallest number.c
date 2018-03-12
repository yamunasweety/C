#include <stdio.h>
int main() 
{
	int l,r,len,s;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		len=l;
	}
	else
	{
		len=r;
	}
	for(s=2;s<=len;s++)
	{
	if((s%l==0) && (s%r==0))
	{
	printf("%d",s);
	break;
	 }
	}
	return 0;
}
