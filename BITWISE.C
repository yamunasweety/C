#include<stdio.h>
int main()
{
int num1,num2;
printf("enter any two numbers:");
scanf("%d%d",&num1,&num2);
printf("original value of num1=%d\n",num1);
printf("original value of num2=%d\n",num2);
num1 ^=num2;
num2 ^=num1;
num1 ^=num2;
printf("num1 after swapping=%d\n",num1);
printf("num2 after swapping=%d\n",num2);
return 0;
}
