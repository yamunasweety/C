#include <stdio.h>
int main() 
{
int s,y;
scanf("%d",&s);
if(s==0)
{
printf("enter valid input ");
}
else if(s==1)
{
printf("1 is neither prime nor composite");
}
else
{
for(y=2;y<=s;y++)
{
if(s%y==0 & s!=y)
{
printf("not prime");
break;				
}
if(s%y==0 & s==y)
{
printf("prime");
	
}
  }
     }
return 0;
}
