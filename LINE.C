#include<stdio.h>
int main()
{
char a[100];
int len,i;word=1;
clrscr();
printf("\n enter a string:");
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]!=' '&&a[i+1]==' ')
word=word+1;
}
printf("\n there are %d words in the string",word);
return 0;
}
