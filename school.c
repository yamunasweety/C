#include <stdio.h>
int main() 
{	
   int s1,s2,y;
   char c;
   for(y=0;y<4;y++)
   {
       scanf("%d %c %d",&s1,&c,&s2);
       if(y%2==0)
       {
           printf("%d",(s1/s2));
       }
       else
       {
           printf("%d",(s1%s2));
       }
   }
	return 0;
}
