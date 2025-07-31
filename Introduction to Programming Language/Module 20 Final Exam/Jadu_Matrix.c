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
    int flag=1;
    if (row!=cal)
    {
        flag=0;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cal; j++)
        {
            if (i+j==row-1 || i==j)
            {
                if (a[i][j]!=1)
                {
                    flag=0;
                }
            }
            else
            
            {
                if (a[i][j]!=0)
                {
                    flag=0;
                }
            }
            
        }
    }
    if (flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    
    return 0;
}