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

};

int main()
{
    Student rahim(45, 5, 3.3);
    // Student karim(100, 11, 4.5);


    // DYNAMIC OBJECT
   /* new Student;  we can create such dynamic object when there is no constructor */

    Student* karim = new Student(100, 11, 4.5); /* with constructor- we have to provide values of the constructor. here karim is pointer, not objecct which will help us to store the dynamic object in the heap memory */



    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}