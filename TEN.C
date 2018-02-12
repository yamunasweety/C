
#include <stdio.h>
  int main() 
  {
    int a[50];
    int i;
    int greatest;
    printf("Enter ten values:");
    for (i=0;i<50;i++) 
    {
    scanf("%d", &a[i]);
    }
    greatest = a[0];
    for (i=0;i<50;i++) 
    {
if (a[i] > greatest) 
{
greatest = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
