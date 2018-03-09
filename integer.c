#include <stdio.h>
int main() 
{
int n,s,res,y[20],t=0;
char rn[10];
scanf("%s",rn);
n=strlen(rn);
for(s=0;s<n;s++)
{
if(rn[s]=='I')
a[s]=1;
else if(rn[s]=='V')
a[s]=5;
else if(rn[s]=='X')
a[s]=10;
else if(rn[s]=='L')
a[s]=50;
else if(rn[s]=='C')
a[s]=100;
else if(rn[s]=='D')
a[s]=500;
else
printf("INVALID");
}
for(s=0;s<n;s+=2)
{
if(a[s]<a[s+1])
{
res=a[s+1]-a[s];
}
else 
{
res=a[s]+a[s+1];
}
t=res+t;
}
printf("%d",t);
return 0;
}
