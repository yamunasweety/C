#include<stdio.h>
int convert_to_minutes(int h,int m)
{
      int total_minutes;
      total_minutes =(h*60)+m;
      return total_minutes;
}
 
void main()
{
      int hours, minutes, total_minutes;
      printf("Enter the Time in Hours and Minutes:\n");
      printf("Hours:\t");
      scanf("%d", &hours);
      printf("Minutes:\t");
      scanf("%d", &minutes);
      total_minutes = convert_to_minutes(hours, minutes);
      printf("Total Time in Minutes:\t%d\n", total_minutes);
      getch();
}
