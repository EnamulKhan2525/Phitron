#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100], b[100];
    scanf("%s %s",a ,b);
    int val = strcmp(a,b);
    if (val==1)
    {
        printf("B choto");
    }
    else if (val==0)
    {
        printf("Same");
    }
    else
    {
        printf("A choto");
    }
    
    return 0;
}