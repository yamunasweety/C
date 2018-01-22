#include <stdio.h>
 
int main()
{
  int c, n;
 
  printf("How many times you want to display hello world?\n");
  scanf("%d", &n);
 
  for (c=1; c<=n; c++)
{
     printf("Hello world!\n");
 }
  return 0;
}
