#include<stdio.h>
int main ()
{
    char a;
    scanf("%c",&a);
    int x = a;
    if (a>='a' && a<='y')
    {
        x=a+1;
    }
    else
    {
        x='a';
    }
    printf("%c",x);
}