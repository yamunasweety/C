#include <stdio.h>
#include<string.h>
int main() 
{
	char s[200],b[200];
	scanf("%s %s",s,b);
	int m,n,i,j,u,v,w,x,y,z,flag=0;
	m=strlen(s);
	n=strlen(b);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			u=s[i];
			v=s[j];
			w=b[i];
			x=b[j];
			y=u-v;
			z=w-x;
			if(b==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("\n no");
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
