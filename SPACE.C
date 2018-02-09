#include<stdio.h>
int main()
{
char str[100]
int i,count=0;
clrscr();
printf("\n enter any string:");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]==' ')
count++;
}
printf("\n total blank spaces:%d",count);
return 0;
}
