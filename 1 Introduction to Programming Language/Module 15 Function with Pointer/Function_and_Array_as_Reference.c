#include<stdio.h>
void fun(int *ar,int n)
{
    ar[0]=500;
}
int main()
{
    int ar[5]={10,20,30,40,50};
    fun(ar,5);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}