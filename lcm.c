#include <stdio.h>
int main()
{
    int s1,s2,min;
    scanf("%d %d", &s1, &s2);
    min = (s1>s2) ? s1:s2;
    while(1)
    {
        if( min%s1==0 && min%s2==0 )
        {
            printf(" %d",minmultiple);
            break;
        }
        ++min;
    }
    return 0;
}
