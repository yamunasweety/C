#include <stdio.h>
int main()
{
    int n1, n2, s, gcd;
    scanf("%d %d", &n1, &n2);
    for(s=1; s<=n1 && s<=n2;++s)
    {
           if(n1%s==0 && n2%s==0)
            gcd =s;
    }
    printf("%d",gcd);
    return 0;
}
