#include <stdio.h>
int min(int array[150],int n);
int main() 
{
int array[100];
int s,result,y;
printf("no of elements in the array");
scanf("%d",&y);
printf("\narray\n");
for(s=0;s<y;s++)
{
scanf("%d",&array[s]);
printf("%d ",array[s]);
}
result=min(array,y);
printf("%d",result);
return 0;
}
int min(int array[150],int n)
{
int s,min=array[0];
for(s=1;s<n;s++)
{	
scanf("%d",&array[s]);
if(array[s]<min)
{
min=array[s];
}
}
return (min);
}	
