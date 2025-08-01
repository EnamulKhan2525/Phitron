#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

Student* fun()
{
    Student kohim(44,6,4.20);
    Student*p=&kohim;
    return p;

}
int main()
{
    Student rohim(55,5,3.20);
    
    Student* p=fun();
    cout<<rohim.cls<<" "<<rohim.roll<<" "<<rohim.gpa<<endl;
    cout<<p->cls<<" "<<p->roll<<" "<<p->gpa<<endl;
    return 0;
}