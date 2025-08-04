#include<stdio.h>
int main()
{
    int sum=0;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 5; i++)
    {
        sum+=i;
    }
    printf("%d\n",sum); 
    return 0;
}