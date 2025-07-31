#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x >= 'a' && x <= 'z')
    {
        int ans = x - 32;
        printf("%c",ans);
    }
    else
    {
        int ans = x + 32;
        printf("%c",ans);
    }
    return 0;
} 