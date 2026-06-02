#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, int gpa){
       this->roll = roll;
       (*this). cls = cls;
       this->gpa = gpa;
    }
};

int main()
{
    Student rahim(45, 5, 3.3);
    Student karim(100, 11, 4.5);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}