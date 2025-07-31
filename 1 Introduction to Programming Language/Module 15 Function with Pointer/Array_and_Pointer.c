#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    int *ptr=   &ar[0];
    printf("%p\n",&ar[0]);
    printf("%d\n",*ptr);
    return 0;
}