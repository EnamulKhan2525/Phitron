#include<stdio.h>
void Recursion(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("I love Recursion\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Recursion(n);
    return 0;
}