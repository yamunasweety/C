#include <stdio.h>
int main()
{
int S;
scanf("%d",&S);
while(S%2==0)
{
S/=2;
}
printf("%d",S);
return 0;
}
