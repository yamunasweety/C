#include <stdio.h>
int main() 
{
int s,y,i,flag=0;
scanf("%d %d",&s,&y);
int a[10];
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
if(a[i]==y)
{
printf(" \n yes");
flag=1;
break;
}
}
if(flag==0)
{
printf("\n no");
}
return 0;
}
