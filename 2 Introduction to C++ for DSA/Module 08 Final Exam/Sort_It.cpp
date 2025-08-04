#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total()
    {
        return math_marks+eng_marks;
    }
};

bool cmp(Student l, Student r)
{
    if (l.total() !=  r.total())
    return l.total() > r.total();
    return l.id <r.id;
    
}
int main()
{
    int n;
    cin>>n;
    vector<Student> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    
    return 0;
}