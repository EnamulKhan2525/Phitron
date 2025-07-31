#include<stdio.h>
void fun(void)
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i<n)
        {
           printf("%d ",i);
        }
        else if (i==n)
        {
            printf("%d",i);
        }
        
    }
    
}
int main()
{
    fun();
    return 0;
}