#include<stdio.h>
int main ()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 5000)
    {
        printf("Dhaka jabao\n");
        if (tk >= 10000)
        {
            printf("Tar por Cox,Bazar Jabo");
        }
        else
        {
            printf("Tar por Barishal asbo");
        }
        
        
    }
    else
    {
        printf("Jabo na");
    }
    
    return 0;
}