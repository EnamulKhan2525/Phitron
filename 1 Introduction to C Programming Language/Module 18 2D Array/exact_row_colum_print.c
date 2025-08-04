#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a [row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <colum; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    // exact row
    int r=2;
    for (int i = 0; i < colum; i++)
    {
        printf("%d ",a[r][i]);
    }
    

    printf("\n");
    // exact colum
    int c=1;
    for (int i = 0; i < row; i++)
    {
        printf("   %d\n",a[i][c]);
    }
    
    
    return 0;
}