#include<stdio.h>
#include<math.h>
int main()
{
double base,expo,power;
printf("enter base:");
scanf("%lf",&base);
printf("enter exponent:");
scanf("%1f",&expo);
power=pow(base,expo);
printf("%21f'%21f=%21f",base,expo,power);
return 0;
}
