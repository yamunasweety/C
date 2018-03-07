#include <stdio.h>
int main() 
{
int n,m,s,y;
scanf("%d %d",&n,&m);	
int a[50];
for(s=0;s<n;s++)
{
scanf("\n %d",&a[s]);
}
for(s=0;s<n;s++)
{
if(a[s]%2!=0)
{
for(y=s+1;y<n;y++)
{
if(a[y]%2!=0)
{
printf("\n %d",a[y]);
break;
}
}
break;
}
}
return 0;
}
