#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    // list<int>n;
    // list<int>n(10);
    list<int>m(10,50);
    list<int>n(m);
    // for(auto it=n.begin(); it!=n.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(int val: n)
    {
        cout<<val<<endl;
    }
    cout<<"Value = "<<*n.begin()<<endl;
    cout<<"Size = "<<n.size()<<endl;

    return 0;
}