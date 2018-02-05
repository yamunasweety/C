#include<stdio.h>
int main()
{
int a[5],b,c,d,e;
float f;
printf("Enter the number of items = ");
scanf("%d" ,&e);
for(b=1;b<=e;b++)
{
printf("Enter the %d item = " ,b);
scanf("%d" ,&a[b]);
}
for(b=1;b<=e;b++)
{
for(c=1;c<=e-b;c++)
{
if(a[c]<=a[c+1])
{
d=a[c];
a[c]=a[c+1];
a[c+1]=d;
}
}
}
for(b=1;b<=e;b++)
{
printf("%d\t" ,a[b]);
}
if(e%2==0)
f=((a[e/2]+a[e/2+1])/2.0);
else
f=a[(e+1)/2];
printf("\n Median = %f " ,f);
return 0;
}
