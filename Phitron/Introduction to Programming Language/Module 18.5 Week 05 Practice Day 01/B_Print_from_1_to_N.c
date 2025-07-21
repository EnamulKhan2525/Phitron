#include <stdio.h>
void recursion(int n)
{
    for (int i = 1; i <=n; i++)
    {
        printf("%d\n",i);
    }
    
}
int main()
{   
    int n;
    scanf("%d",&n);
    recursion(n);
    return 0;
}