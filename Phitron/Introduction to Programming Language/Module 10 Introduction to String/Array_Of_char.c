#include<stdio.h>
int main ()
{
    char a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&a[i]);
    }
    printf("%d",sizeof(a));
    return 0;
    
}