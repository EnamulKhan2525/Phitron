#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int k=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }   
    return 0;
}