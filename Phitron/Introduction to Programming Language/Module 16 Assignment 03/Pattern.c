#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int h=1;
    int m=1;
    for (int i = 1; i <=n*2-1; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        if (i%2!=0)
        {
            for (int i = 1; i <=h; i++)
        {
            printf("#");
        }
        }
        else if (i%2==0)
        {
            for (int i = 1; i <=m; i++)
        {
            printf("-");
        }
        }
        if (i<n)
        {
           m=m+2;
        h=h+2;
        s--;
        }
        else
        {
            m=m-2;
            h=h-2;
            s++;
        }
        
        
        printf("\n");
    }
    
    return 0;
}