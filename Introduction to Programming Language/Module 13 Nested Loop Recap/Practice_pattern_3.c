#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {   
        int k=1;
        for (int j = n; j >=i; j--)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}