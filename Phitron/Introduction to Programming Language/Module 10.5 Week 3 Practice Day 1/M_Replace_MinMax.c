#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min_index=0;
    int max_index=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<a[min_index])
        {
            min_index=i;
        }
        if(a[i]> a[max_index])
        {
            max_index=i;
        }
    }
    int tmp =a[min_index];
        a[min_index]=a[max_index];
        a[max_index]=tmp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}