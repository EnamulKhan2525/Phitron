#include<stdio.h>
int main()
{
    double x=5.26;
    double *ptr=&x;
    *ptr=22.22;
    printf("X er value - %0.4lf\n",x);
    printf("ptr er value - %0.4lf\n",*ptr);
    printf("ptr er size - %d\n",sizeof(ptr));

    return 0;
}