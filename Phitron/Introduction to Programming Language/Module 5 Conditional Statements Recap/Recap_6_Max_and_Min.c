#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a ,&b ,&c);
    int big =a;
    int small =c;
    if (big<b)
    {
        big=b;
    }
    if (big < c)
    {
        big =c;
    }
    if (small >a)
    {
        small =a;
    }
    if (small > b)
    {
        small=b;
    }
    printf("%d %d",small ,big);
    return 0;
} 