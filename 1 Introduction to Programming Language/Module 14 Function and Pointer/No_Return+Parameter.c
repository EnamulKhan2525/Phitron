#include<stdio.h>
#include<string.h>
void sum(int x, int y)
{
    int total=x+y;
    printf("%d",total);
    return;
    
}
int main ()
{
    int x,y;
    scanf("%d %d",&x ,&y);
    sum(x,y);
    
    return 0;
}