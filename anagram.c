#include<stdio.h>
#include<string.h>
int main()
{
   char a[50];
    char str1[]="kabali";
    int s,y,temp=0,n,n1,k=0,len,count=0;
    n=strlen(str1);
    scanf("%d",&n1);
    for(s=0;s<n;s++)
    {
        for(y=s+1;y<n;y++)
        {
            if(str1[s]>str1[y])
            {
            temp=str1[s];
            str1[s]=str1[y];
            str1[y]=temp;
            }
        }
    }
   while(k<n1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(n==len)
       {
           for(s=0;s<n;s++)
           {
               for(y=s+1;y<n;y++)
               {
                   if(a[s]>a[y])
                   {
                       temp=a[s];
                       a[s]=a[y];
                       a[y]=temp;
                   }
               }
           }
           if(strcmp(str1,a)==0)
           {
               count++;
           }
       }
       k++;
   }
   printf("\n %d",count);
	return 0;
}
