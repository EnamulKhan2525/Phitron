#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if (row!=col)
            {
                flag=0;
            }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            
            if (i==j)
            {
                if (a[i][j]!=1)
                {   
                    flag=0;
                }
            }
            else if (a[i][j]!=0)
            {
                flag=0;
            }
            
        }
    }
    if (flag==0)
    {
        printf("Not Unit Diagonal Matrix\n");
    }
    else
    {
        printf("Unit Diagonal Matrix\n");
    }
    
    
    
    return 0;
}