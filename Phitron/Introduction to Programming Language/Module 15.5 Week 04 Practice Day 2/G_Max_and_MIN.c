#include<stdio.h>
void fun(int ar[],int n)
{
    int mix=ar[0];
    int min=ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>mix)
        {
            mix=ar[i];
        }
        if (ar[i]<min)
        {
            min=ar[i];
        }
        
    }
    printf("%d ",min);
    printf("%d",mix);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar,n);
    return 0;
}