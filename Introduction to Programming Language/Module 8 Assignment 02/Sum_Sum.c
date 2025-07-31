#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos=0;
    int neg=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]> 0)
        {
            pos+=ar[i];
        }
        if (ar[i]< 0)
        {
            neg+=ar[i];
        }
    }
    printf("%d %d",pos ,neg);
    return 0;
}