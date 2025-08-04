#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    ar[0]='G';
}
int main()
{
    char ar[6]="Hallo";
    fun(ar);
    printf("%s",ar);
    return 0;
}