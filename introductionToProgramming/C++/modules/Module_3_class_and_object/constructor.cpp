#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double cgp;


    // cosntructor
     Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        cgp = g;
    }
};
int main()
{
    Student rahim(20, 5, 4.75);
    // after passing parameters now we do not need to write these to assign value like this. rather we can call that function and pass the value inside the function for paramters. Now you can see we have written one line insttead of writing too many line to assign value. 
    // rahim.roll = 20;
    // rahim.cls = 5;
    // rahim.cgp = 23.56;


    Student karim(34, 2, 5.00);
    // karim.roll = 38;
    // karim.cls = 6;
    // karim.cgp = 2.5;


    // if we need to take input

    int r;
    int c;
    int g;
    cin >> r >> c >> g;
    Student shakil (r, c, g);


    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgp << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.cgp << endl;
    cout << shakil.roll << " " << shakil.cls << " " << shakil.cgp << endl;

    return 0;
}


/* constructor simulation- how it works behind the scene?

first of all in the beginning of main function we have declared the a object of student class which name is rahim.
it will take a place in the memory as rahim and it will accomodate those which is in student class
after declaring the object we also call the constructor */