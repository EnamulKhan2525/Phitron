#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    int summation = a+b;
    int subtraction = a-b;
    int multiplication = a*b;
    int division = a/b;
    printf("%d\n%d\n%d\n%d",summation ,subtraction ,multiplication ,division);
    return 0;
}