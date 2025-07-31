#include<stdio.h>
int main ()
{   
    int n;
    scanf("%d",&n);
    int Even=0;
    int Odd=0;
    int Positive=0;
    int Negative=0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d",&a);
        if (a%2 == 0)
        {
            Even++;
        }
        if (a%2 != 0)
        {
            Odd++;
        }
        if (a > 0)
        {
            Positive++;
        }
        if (a < 0)
        {
            Negative++;
        }
    }
    printf("Even: %d\n",Even);
    printf("Odd: %d\n",Odd);
    printf("Positive: %d\n",Positive);
    printf("Negative: %d\n",Negative);
    return 0;
}