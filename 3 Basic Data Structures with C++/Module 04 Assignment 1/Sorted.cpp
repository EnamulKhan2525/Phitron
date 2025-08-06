#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int sor[n];
        for (int i = 0; i < n; i++)
        {
            sor[i]=a[i];
        }
        sort(sor,sor+n);
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if (sor[i] != a[i])
            {
                flag=1;
                break;
            }
            
        }
        if (flag==1)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
    
    return 0;
}