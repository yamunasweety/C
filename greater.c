#include <stdio.h>
int main() 
{
int s;
scanf("%d",&s);
while(s!=0)
{
if(s%30==0)
{
printf("%d",s);
break;
}
s++;  }
return 0;
}
