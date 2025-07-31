#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
            int g=k;
        for (int j = 1; j<=k ; j++)
        {
            printf("%d",g);
            g--;
        }
        k++;
        s--;
        
        printf("\n");
    }
    
    return 0;
}