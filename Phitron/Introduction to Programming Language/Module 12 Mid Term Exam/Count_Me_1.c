#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int aa=0;
    int bb=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]%3==0)
        {
            aa++;
        }
        else if (a[i]%2==0)
        {
            aa++;
        }
        else if (a[i]%3==0)
        {
            bb++;
        }
        
    }
    printf("%d ",aa); 
    printf("%d",bb); 
    return 0;
}