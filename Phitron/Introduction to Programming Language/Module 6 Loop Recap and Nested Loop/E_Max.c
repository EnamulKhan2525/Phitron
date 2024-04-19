#include<stdio.h>
int main ()
{
    int big=0;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d",&a);
        if (a>big)
        {
            big = a;
        }
    }
    printf("%d",big);
    return 0;
}