#include <stdio.h>
int main() 
{
int s,b[200],c=0,y;
printf("\n enter the numbers:");
scanf("%d",&s);
for(y=0;y<s;y++)
{
scanf("%d",&b[y]);
}
for(y=0;y<s;y++)
{
c=c+b[y];
}
printf("%d",c);
return 0;
}
