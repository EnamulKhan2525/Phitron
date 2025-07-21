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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (row!=col)
            {
                flag=0;
                break;
            }
            
            else if (i==j)
            {
                continue;   
            }
            else if (a[i][j]!=0)
            {
                flag=0;
            }
            
        }
    }
    if (flag==0)
    {
        printf("Not Diagonal Matrix\n");
    }
    else
    {
        printf("Primary Diagonal Matrix\n");
    }
    
    
    
    return 0;
}