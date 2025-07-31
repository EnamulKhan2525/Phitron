#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i==11)continue;
        printf("%d\n",i);
    }
    return 0;
}