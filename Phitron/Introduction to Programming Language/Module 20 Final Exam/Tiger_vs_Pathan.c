#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int T=0;
    int P=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='T')
        {
            T++;
        }
        else if (s[i]=='P')
        {
            P++;
        }
        
    }
    if (T==P)
    {
        printf("Draw\n");
    }
    else if (P>T)
    {
        printf("Pathaan\n");
    }
    else if (P<T)
    {
        printf("Tiger\n");
    }
    
    }
    
    return 0;
}