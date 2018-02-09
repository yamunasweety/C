#include <stdio.h>
int main()
{
   char str[100];  
   int wordcount=0,i;
   printf("Enter a string");
   gets(str,100,stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ' && str[i+1]!=' ')
         wordcount++;
   }
if(wordcount > 1)
{
  printf(" Total number of words is %d",wordcount+1);
 }
 else
 {
  printf(" enter valid string");
 }
return 0;
}

