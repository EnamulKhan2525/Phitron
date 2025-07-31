#include<stdio.h>
int main()
{
    int x=100;
    int * ptr=&x;
    printf("'X' er Address - %p\n",&x);
    printf("'PTR' er value - %p\n",ptr);
    printf("'PTR' er Address - %p\n",&ptr);
    return 0;
}