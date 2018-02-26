#include<stdio.h>
int main()
{
int s,y,x;
printf("enter the number:");
scanf("%d",&s);
printf("left and right numbers:");
scanf("%d%d",&y,&x);
if(s>y&&s<x)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
