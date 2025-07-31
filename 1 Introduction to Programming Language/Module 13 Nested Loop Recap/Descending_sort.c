#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(a[i]<a[j])
            {
                int imp=a[i];
                a[i]=a[j];
                a[j]=imp;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}