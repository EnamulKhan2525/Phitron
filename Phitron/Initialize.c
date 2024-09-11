#include<stdio.h>
int main ()
{
    char a[]="Enamul\0";
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c",a[i]);
    // }
    printf("%s",a);
    int zs=sizeof(a)/sizeof(char);
    printf("\n%d",zs);
    return 0;
}