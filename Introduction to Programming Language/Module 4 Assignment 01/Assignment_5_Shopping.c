#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a > 1000)
    {
        printf("I will buy Punjabi\n");
        if (a >= 1500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        } 
    }
    else
    {
       printf("Bad luck!");
    }
    return 0;
}