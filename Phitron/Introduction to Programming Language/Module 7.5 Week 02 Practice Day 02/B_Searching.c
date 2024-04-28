#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);
    int exists;
    for (int i = 0; i < n; i++)
    {
        if (x == ar[i])
        {
            exists = i;
            break;
        }
        else
        {
            exists=-1;
        }
        
    }
    if (exists < 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",exists);
    }
    return 0;
}