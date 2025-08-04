#include<stdio.h>
#include<string.h>
int main ()
{
    char a[11];
    char b[11];
    scanf("%s %s",a ,b);
    int asize=strlen(a);
    int bsize=strlen(b);
    printf("%d %d\n",asize ,bsize);
    printf("%s%s\n",a ,b);
    int so=0;
    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    printf("%s %s",a ,b);
    return 0;
}