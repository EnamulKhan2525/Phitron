#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if( tk >= 100)
    {
        printf("Burger Khabo");
    }
    else if (tk >= 50)
    {
        printf("Fucka Khabo");
    }
    else if (tk >=30 )
    {
        printf("Ice-cream Khabo");
    }
    
    else{
        printf("Khabo na");
    }
    
    return 0;
}