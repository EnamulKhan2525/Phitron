#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%c\n",a[i]);
        int val=a[i]-'0';
        sum+=val;
    } 
    printf("%d",sum);
    return 0;
}