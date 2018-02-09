#include<stdio.h>
#include<string.h>
void swap(int*,int*)
void main()
{
int p,q;
scanf("%d %d",&p,&q);
printf("before swapping p=%d q=%d",p,q);
swap(p,q);
printf("after swapping p=%d q=%d"p,q);
}
void swap(int*x,int*y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
return 0;
getch();
}
