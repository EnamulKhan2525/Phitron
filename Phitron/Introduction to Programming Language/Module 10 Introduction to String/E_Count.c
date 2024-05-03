#include<stdio.h>
#include<string.h>
int main ()
{
    char a[1000001];
    scanf("%s",a);
    int cout=0;
    int i=0;
    while (a[i] != NULL)
    {
        cout=cout+(a[i]-'0');
        i++;
    }
    printf("%d",cout);
    return 0;
}