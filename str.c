#include <stdio.h>
int main()
{
char a[30];
int flag=0,i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='0'||a[i]<='9')
    {
        flag=1;
    }
}
if(flag==1)
{
printf("\nYES");
}
else
{
printf("\n No");
}
	return 0;
}
