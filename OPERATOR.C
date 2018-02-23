#include<stdio.h>
#include<string.h>
int main()
{

    char y1[100],ch='.',*cha;
    printf("enter the string:");
    scanf("%[^\n]s",&y1);
   
    cha=strchr(y1,ch);
    printf("string after' %c' is : %s",ch ,cha+1);
    return 0;
}
