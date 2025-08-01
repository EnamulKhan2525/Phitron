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


int main()
{
    Student rohim(55,5,3.20);
    
    Student *p= new Student(10, 6, 4.4);
    cout<<rohim.cls<<" "<<rohim.roll<<" "<<rohim.gpa<<endl;
    cout<<p->cls<<" "<<p->roll<<" "<<p->gpa<<endl;
    delete p;
    return 0;
}