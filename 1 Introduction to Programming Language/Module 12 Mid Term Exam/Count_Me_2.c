#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100000];
    scanf("%s",s);
    int cns=0;
    for (int i = 0;  s[i] != '\0'; i++)
    {
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            cns++;
        }
        
    }
    printf("%d",cns);
    return 0;
}