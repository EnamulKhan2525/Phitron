#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    int asn = a -b;
    if (asn < 0)
    {
        printf("0");
    }
    else
    {
        printf("%d",asn);
    }
    
    return 0;
}