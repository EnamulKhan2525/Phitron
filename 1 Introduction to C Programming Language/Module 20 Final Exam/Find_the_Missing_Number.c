#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int m;
        scanf("%lld",&m);
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        long long int total3=a*b*c;
        long long int ans=m/total3;
        if (total3==0)
        {
            if (m==0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
            
        }
        else
        {
            if (m%total3==0)
            {
                printf("%lld\n",ans);
            }
            else
            {
                printf("-1\n");
            }
            
        }
        
        

    }
    
    return 0;
}