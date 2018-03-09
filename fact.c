#include<stdio.h>
int main()
{
    int s,y=1;
    scanf("%d",&s);
    if(s<0)
    printf("\n not valid");
    else
    {
       for(int i=1;i<=s;i++)
       {
           y=y*i;
       }
       printf("\n %d",y);
    }
    return 0;
}
