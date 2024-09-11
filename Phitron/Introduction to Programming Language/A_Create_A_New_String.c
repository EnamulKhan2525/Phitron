#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[1001];
    scanf("%s",a);
    scanf("%s",b);
    int c=strlen(a);
    int d=strlen(b);
    printf("%d %d",c ,d );
    printf("\n%s %s",a ,b );
    return 0;
}