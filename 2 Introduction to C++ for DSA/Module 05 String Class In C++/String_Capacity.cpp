#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Enamul Khan";
    cout<<"Size - "<<s.size()<<endl;
    cout<<"Maximum Size - "<<s.max_size()<<endl;
    cout<<"Capacity - "<<s.capacity()<<endl;
    cout<<"Empty - "<<s.empty()<<endl;
    s.resize(5);
    cout<<"Size - "<<s.size()<<endl;
    s.clear();
    cout<<"Clear - "<<s<<endl;
    cout<<"Empty - "<<s.empty()<<endl;
    return 0;
}