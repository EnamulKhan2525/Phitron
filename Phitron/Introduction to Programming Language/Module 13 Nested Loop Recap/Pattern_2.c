#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = s; j >=1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        
        s--;
        k=k+2;
        printf("\n");
    }
    
    return 0;
}