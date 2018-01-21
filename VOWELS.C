#include<stdio.h>
int main()
{
char c,lowercase,uppercase;
printf("enter an alphabet");
scanf("%c",&c);
lowercase(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercase(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercase||uppercase)
{
printf("the alphabet is vowel");
}
else
{
printf("the alphabet is consonant");
}
return 0;
}
