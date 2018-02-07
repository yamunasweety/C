
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char*y = str;
    int alphabets, digits, others;
    alphabets = digits = others = 0;
    printf("Enter any string : ");
    gets(str);
    while(*y)
    {
        if((*y >= 'a' && *y <= 'z') || (*y >= 'A' && *y <= 'Z'))
            alphabets++;
        else if(*y>='0' && *y<='9')
            digity++;
        else
            other y++;
        y++;
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
    return 0;
}
