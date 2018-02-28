#include <stdio.h>
int main() 
{	
    int s1,s2,y;
    for(y=0;y<3;y++)
    {
        scanf("%d %d",&s1,&s2);
        if(s1>s2)
        {
            printf("%d\n",s1-s2);
        }
        else
        {
            printf("%d\n",s2-s1);
        }
    }
	return 0;
}
