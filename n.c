#include<stdio.h>
int main()
{
int s,y,i,m=1;
printf("\n enter the values:");
scanf("%d%d",&s,&y);
for(i=0;i<y;i++)
{
m=m*s;
}
printf("%d",m);
return 0;
}
