#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool find = false;
    while (ss>>word)
    {
        if (word == "Jessica")
        {
            find =true;
            break;
        }
        
    }
    cout<<(find?"YES":"NO")<<endl;
    return 0;
}