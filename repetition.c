#include <stdio.h>
int main() 
{
int s,y,i,count=0;
scanf("%d %d",&s,&y);
int a[50];
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
if(a[i]==y)
{
count=count+1;
}
printf("\n%d",count);
return 0;
}
