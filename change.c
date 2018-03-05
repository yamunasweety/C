#include <stdio.h>
int main()
{
  int s,y,a[10];
  scanf("%d",&s);
  for(y=1;y<=s;y++)
  {
      scanf("%d",&a[y]);
      if(a[y]!=y)
      {
          printf("%d",y);
      }
  }
  return 0;
}
