#include <stdio.h>
#include<string.h>
int main() 
{	
   char s[10],y[10];
   int i,n;
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n;i=i+2)
   {
       y[i]=s[i];
       printf("%c",y[i]);
   }
   printf(" ");
   for(i=1;i<n;i=i+2)
   {
       y[i]=s[i];
       printf("%c",y[i]);
   }
 return 0;
}
