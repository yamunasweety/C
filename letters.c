#include <stdio.h>
int main() 
{
	char a[50];
	scanf("%s",a);
	char k;
	int s,count=0,max=0,y;
	for(s=0;a[s]!='\0';s++)
	{
	for(y=s+1;a[y]!='\0';y++)
	{
	if(a[s]==a[y])
	{
	count=count+1;
	 }
	}
	if(count>max)
	{
	k=a[s];
	max=count;
	 }
	}
	printf("%c",k);
	return 0;
}
