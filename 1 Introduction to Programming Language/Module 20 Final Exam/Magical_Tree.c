#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int row=5;
    for (int i = 1; i <= 21; i++)
    {
        if (i%2 != 0)
        {
            if (i==n)
            {
                row++;
                break;
            }
            else
            {
                row++;
            }
            
        }
        
    }
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=row-i; j++)
        {
            printf(" ");
        }

        
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= row-n/2-1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=n; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}