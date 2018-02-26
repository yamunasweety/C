#include <stdio.h>
int main() 
{
int s,y;
scanf("%d",&s);
if(s==0)
{
printf("enter valid input ");
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
