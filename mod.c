#include<stdio.h>
int main()
{
int s1,s2,y1,y2;
scanf("%d %d %d",&s1,&s2,&y1);
y2=(s1*s2)%y1;
printf("%d",y2);
return 0;
}
