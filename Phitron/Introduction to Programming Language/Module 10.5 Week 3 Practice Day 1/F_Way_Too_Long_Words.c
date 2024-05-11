#include<stdio.h>
#include<string.h>
int main ()
{
    int a;
    scanf("%d",&a);
     getchar();
    for (int i = 0; i < a; i++)
    {
        char too[101];
        scanf("%s",&too);
        int len=strlen(too);
    if (len <= 10)
    {
        printf("%s\n",too);
    }
    else
    {
        printf("%c%d%c\n",too[0],len-2,too[len-1]);
    }
    }
    
    
    
    return 0;
}