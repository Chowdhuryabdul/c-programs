#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;


    // constructor function

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }


};

Student* fun(){
    
    Student karim (100, 11, 5.00);
    Student *p = &karim;
    return p;
}





int main()
{
    
    Student *rahim = new Student (10, 4, 4.5);
   
    Student *p = fun();
    cout << (*rahim).roll << " " << rahim->cls << " " << rahim->gpa<< endl;
    cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    return 0;
}