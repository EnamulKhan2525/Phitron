#include<stdio.h>
void fun(int*ptr)
{
    *ptr=50;
    printf("P er value - %d\n",*ptr);
        return ;
}
int main()
{
    int x=10;
    fun(&x);
    printf("X er value - %d\n",x);
    return 0;
}