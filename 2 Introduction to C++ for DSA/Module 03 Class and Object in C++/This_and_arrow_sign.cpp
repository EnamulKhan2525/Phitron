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
    

    cout<<rohim.cls<<endl<<rohim.roll<<endl<<rohim.gpa<<endl;
    return 0;
}