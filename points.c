#include <stdio.h>
int main() 
{
	char str1[4],str2[4],str3[4];
	scanf("%s\n",str1);
	scanf("%s\n",str2);
	scanf("%s\n",str3);
	if((str1[0]=str2[0]=str3[0])||(str1[1]=str2[1]=str3[1]))
	{
		printf("yes");
	}
	else if((str1[0]=str1[1])&&(str2[0]=str2[1])&&(str3[0]=str3[1]))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
