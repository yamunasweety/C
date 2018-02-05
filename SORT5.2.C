#include<stdio.h>
int main()
{
int array[MAX SIZE]
int i,j,num,temp;
printf("enter the value of num\n");
scanf("%d",&num);
printf("enter the elements one by one\n");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("input array is\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
for(i=0;i<num;i++)
{
for(j=0;j<(num-i-1);J++)
{
if(array[j]>array[j+1]);
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("sorted array is ......\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
return 0;
}
