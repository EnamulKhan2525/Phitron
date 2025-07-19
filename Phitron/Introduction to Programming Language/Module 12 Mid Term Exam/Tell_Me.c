#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        int result=0;
        scanf("%d",&x);
        for (int i = 0; i < n; i++)
        {
            if (a[i]==x)
            {
                result++;
            }
        }
        if (result>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}