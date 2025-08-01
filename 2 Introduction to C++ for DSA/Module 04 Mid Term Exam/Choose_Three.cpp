#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    for (int i = 0; i < n && !flag; i++)
    {
        for (int j = i+1; j < n && !flag; j++)
        {
            for (int k = j+1; k < n && !flag; k++)
            {
                if(a[i]+a[j]+a[k] == s)
                {
                    flag=true;
                }
            }
            
        }
        
    }
    
    cout<<(flag?"YES":"NO")<<endl;
    }

    
    
    return 0;
}