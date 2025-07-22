#include<stdio.h>
void recursion(int n)
{
    if (n==0)return;
    int a=n%10;
    recursion(n/10);
    printf("%d ",a);
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int n;
    scanf("%d",&n);
    recursion(n);
    if (n==0)
    {
        printf("0");
    }
    
    printf("\n");
    }
    
    return 0;
}