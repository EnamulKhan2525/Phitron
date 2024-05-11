#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100001];
    fgets(s,sizeof(s),stdin);

    int set = 0;
    while (s[set] != '\0')
    {
        if (s[set] == ',')
        {
            s[set]=' ';
        }
        else if (s[set] >= 'a' && s[set] <= 'z' )
        {
            s[set]-=32;
        }
        else if (s[set] >= 'A' && s[set] <= 'Z' )
        {
            s[set]+=32;
        }
        set++;
    }
    printf("%s",s);
    return 0;
}