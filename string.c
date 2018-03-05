#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="hello";
int y,i;
y=strlen(s);
scanf("%d",&y);
for(i=0;i<y;i++)
{
printf("%c",s[y-1]);
y--;
}
return 0;
}
