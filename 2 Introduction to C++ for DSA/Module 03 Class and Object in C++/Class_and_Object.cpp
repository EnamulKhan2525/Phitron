#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cout<<a.name<<endl;
    cout<<a.roll<<endl;
    cout<<a.gpa<<endl;
    return 0;
}