#include<stdio.h>
int main ()
{
    int row,cal;
    scanf("%d%d",&row,&cal);
    int a[row][cal];
    for (int i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cal; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < cal; i++)
    {
        printf("%d ",a[row-1][i]);
        
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ",a[i][cal-1]);
        
    }
    
    return 0;
}