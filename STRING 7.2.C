#include<stdio.h>
#include<string.h>
int main()
{
    char numbers[20];
    int i,correctNum=0;
    scanf("%s",numbers);
    for(i=0;i<=numbers;++i)
    }
       if(isalpha(numbers[i]))
        {
            correctNum = 1;
            break;
        }
    }
    if(correctNum == 1)
    {
        printf("That number has a char in it. FIX IT.\n");
    }
    else
    {
        printf("All numbers. Good.\n");
    }
    return 0;
    }
