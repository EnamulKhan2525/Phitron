#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[10000];
        scanf("%s",s);
        int cap=0;
        int small=0;
        int digit=0;
        for (int i = 0; i <strlen(s); i++)
        {
            if (s[i]>='A'&& s[i]<='Z')
            {
                cap++;
            }
            else if (s[i]>='a'&& s[i]<='z')
            {
                small++;
            }
            else if (s[i]>='0'&& s[i]<='9')
            {
                digit++;
            }
        }
        printf("%d ",cap);
        printf("%d ",small);
        printf("%d\n",digit);
    }
    return 0;
}