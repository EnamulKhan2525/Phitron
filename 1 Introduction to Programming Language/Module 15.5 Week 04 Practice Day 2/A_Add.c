#include<stdio.h>
void fun(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int r=x+y;
    printf("%d",r);
}
int main()
{
    fun();
    return 0;
}