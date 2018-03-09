#include <stdio.h>
#include<string.h>
int main()
{
char string[20];
int j,temp,s;
gets(string);
s=strlen(string);
if(s%2==0)
{
for(j=0;j<s;j+=2)
{
temp=string[j];
string[j]=string[j+1];
string[j+1]=temp;
}
puts(string);
}
else
{
for(j=0;j<s-1;j+=2)
{
temp=string[j];
string[j]=string[j+1];
string[j+1]=temp;
}
puts(string);
}
return 0;
}
