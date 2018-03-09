#include<stdio.h>
int main()
{
	char str[10000],len,s,y,temp;
	scanf("%s",str);
	len=strlen(str);
	s=0;
	y=len-1;
	while(s<y)
	{
		temp=str[s];
		str[s]=str[y];
		str[y]=temp;
		s++;
		y--;
	}
	printf("\n%s",str);
	return 0;
}
