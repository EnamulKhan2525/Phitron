#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int s=n-1;
    for (int i = 1; i <= n*2-1; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
            printf(" ");
        }
        for (int j = 1; j <=k; j++)
        {
            printf(" *");
        }
        if (i<=n-1)
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    
    return 0;
}