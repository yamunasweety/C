#include <stdio.h>
int main() 
{
	int N,s,y,num,min;
	int array[200];
	scanf("%d",&N);
	for(s=0;s<N;s++)
	{
	scanf("%d ",&array[s]);
	}
	for(s=0;s<N;s++)
	{
	int count=0;
	for(y=0;y<N;y++)
	{
           if(array[s]==array[y] && s!=y )
	{
	count=count+1;	
            }
	}
	if(count==0)
	{
	printf("%d",array[s]);
	}
	}
	return 0;
}
