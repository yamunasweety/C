#include<stdio.h>
int main()
{
int s,y;
printf("enter the number");
scanf("%d",&s);
for(y=1;y<=s;y++)
{
if(s%y==0)
printf("%d \n",y);
}
return 0;
}
