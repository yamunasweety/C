#include<stdio.h>
int main()
{
int num,s,flag=0;
scanf("%d",&num);
for(s=2;s<=num/2;s++)
{
if(num%s==0)
{
flag=1;
break;
}
	}
if(flag==0)
{
	printf(" no");
}
else
{
printf("yes");
}
return 0;
}
