#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    char section;
    int mark;

};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Student best;
        best.mark =-1;
        best.id =INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            Student s;
            cin>>s.id>>s.name>>s.section>>s.mark;


            if(s.mark>best.mark || (s.mark ==best.mark &&s.id<best.id))
            {
                best=s;
            }  
        }
        cout<<best.id<<" "<<best.name<<" "<<best.section<<" "<<best.mark<<endl;
    }
    
    return 0;
}