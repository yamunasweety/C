#include <stdio.h>
#include<string.h>
int main() 
{
	char str[50];
	int s,y;
	scanf("%s",str);
	y=strlen(str);
	for(s=0;s<y;s++)
	{
	if(str[s]=='a'||str[s]=='e'||str[s]=='i'||str[s]=='o'||str[s]=='u'||str[s]=='A'||str[s]=='E'||str[s]=='I'||str[s]=='O'||str[s]=='U')
	{
	str[s]='+';
	 }
	}
	for(s=y;s>=0;s--)
	{
	if(str[s]!='+')
	{
	printf("\n %c",str[s]);
	 }
	}
 
	return 0;
}
