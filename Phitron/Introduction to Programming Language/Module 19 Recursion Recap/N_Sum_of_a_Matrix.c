#include<stdio.h>
int main ()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    int b[row][col];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d",&b[i][j]);
        }  
    }
    int c[row][col];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }  
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",c[i][j]);
        }  
        printf("\n");
    }
    return 0;
}