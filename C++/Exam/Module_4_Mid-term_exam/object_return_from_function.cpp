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

Student fun()
{
    Student karim(100, 11, 4.5); /* we have received this from the main function althoug it is static. it works as static variable. */
    return karim;
};

int main()
{
    Student rahim(45, 5, 3.3);

    Student obj = fun();
    
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;


    return 0;
}