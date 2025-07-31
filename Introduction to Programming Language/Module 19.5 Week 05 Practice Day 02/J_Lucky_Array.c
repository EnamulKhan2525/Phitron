#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
       if (mn>a[i])
       {
        mn=a[i];
       }
       
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==mn)
        {
            cnt++;
        }
        
    }
    if (cnt%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    

    return 0;
}