#include<stdio.h>
int main()
{
    int s,y=0,c;
    scanf("%d",&s);
    if(s==0)
    {
        printf("\n invalid no");
    }
    else
    {
        while(s!=0)
        {
            c=s%10;
            y=y*10+c;
            s=s/10;
            
        }
        printf("\n %d",y);
    }
    return 0;
}
