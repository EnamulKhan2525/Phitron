#include<stdio.h>
#include<string.h>
int main ()
{
    int n,s,k;
    scanf("%d",&n);
    k=n*2-1;
    s=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k=k-2;
        s++;
    }
    return 0;
}