#include<bits/stdc++.h>
using namespace std;

class Student
{
    
    public:
    int cls;
    int roll;
    double gpa;

  /*   Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    } */
};



int main()
{
    
    // this is from user input for the constructor
    // int r;
    // int c;
    // int g;

    // without constructor with user input
    Student rahim; 
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    // Student rahim(r,c,g); this is with constructor
    // this is to set value for the constructor function
    // Student rahim(20, 5, 4.50);

    // this is normal value setting
    // rahim.roll = 20;
    // rahim.cls = 5;
    // rahim.gpa = 4.50;

    // Student karim(100, 12, 5.00); this is with constructor
    // karim.roll = 100;
    // karim.cls = 12;
    // karim.gpa = 5.00;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}
