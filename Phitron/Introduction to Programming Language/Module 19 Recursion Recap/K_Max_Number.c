#include<stdio.h>
#include<limits.h>
int fun(int a[],int n,int i)
{
    //Base case
    if (i==n)
    {
        return INT_MIN;
    }
    
    int big=fun(a,n,i+1);
    if (big > a[i])
    {
        return big;
    }
    else
    {
        return a[i];
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int mx=fun(a,n,0);
    printf("%d",mx);
    return 0;
}