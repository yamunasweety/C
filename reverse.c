#include <stdio.h>
 int main()
{
   int s, rev = 0;
   printf("Enter a number to reverse");
   scanf("%d", &s);
   while (s != 0)
   {
      rev = rev* 10;
      rev = rev + s%10;
             s = s/10;
   }
   printf("Reverse of entered number is = %d", rev);
   return 0;
}
