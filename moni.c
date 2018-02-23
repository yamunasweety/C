#include<stdio.h>
int main()
{
char ch[100][100];
int s,y,num,count=0,len;
printf("Enter N:");
scanf("%d",&y);
printf("\n Enter the words:");
for(s=0;s<=y;s++)
{
gets(ch[s]);
}
printf("\nEnter the length to search word:");
scanf("%d",&num);
for(s=0;s<=y;s++)
{
len=strlen(ch[s]);
if(num==len)
{
count++;
}
}
printf("\nNumber of words are:%d",count);
return 0;
}
