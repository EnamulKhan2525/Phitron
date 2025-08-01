#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        string l;
        for (char c: s)
        {
            if (c >='a' && c<='z')
            {
                l.push_back(c);
            }
            
        }
        

        sort(l.begin(), l.end());
        cout<<l<<endl;
    }
    
    return 0;
}