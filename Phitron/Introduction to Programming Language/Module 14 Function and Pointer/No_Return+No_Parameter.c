#include<stdio.h>
void sum(void)
{
    int x,y;
    scanf("%d %d",&x ,&y);
    int total=x+y;
    printf("%d",total);
    return;
}
int main()
{
    sum();
    return 0;
}