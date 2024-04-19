#include<stdio.h>
int main()
{
    int a;
    int pass=1999;
    while (scanf("%d",&a) != EOF)
    {
        if (a == pass)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        
    }
    return 0;
}