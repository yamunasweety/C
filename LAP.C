#include <stdio.h>
#include<string.h>
int main() 
{
     char s[100];
     gets(s);
     int ls=strlen(s);
     int times;
     scanf("%d",&times);
     int tl= times*ls;
     int i,x=0;
        for(i=ls-1;i<tl;i++)
        {
        s[i+1]=s[x];
        x++;
        }
    for(i=0;i<tl;i++)
    {
    printf("%c",s[i]);
    }
 
     return 0;
}
