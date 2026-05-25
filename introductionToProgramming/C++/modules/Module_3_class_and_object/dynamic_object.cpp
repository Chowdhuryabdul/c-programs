#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgp;

    // cosntructor
    // here we have used different name in paramtere compare to the class element name. if we use the same name it will give the gravage value. as compiler do not understand which one is paramtere and which one class element name. but we can use the same name in that case i have to use the 'this' keyword. this is a pointer which points to the object which call the class. when we want use the class element name roll and parameter name roll then he does not uderstand which one is class element name and which one is parameter. here first roll is class name roll and roll after the equal sign is parameter roll.
    // we know that this is pointer which points to the object of that class. when we write this. sth, VS code automatically convert the dot into -> like this. as it is sign of pointer. but if i want to keep the dot than i have to dereference the pointer this (*this)

    // we can not wrrite this.roll directly. this is because roll does not belong to this. as this points to the rahim object. rahim object takes a space in memory which has an adress and this has that address right now. first of all we need to dereferecne the pointer than is is possible to access. but if we derefrenc this then we can accomodate the inside element in this. such as (*this).roll

    // Student(int r, int c, double g) this is previous way
    Student(int roll, int cls, double cgp) /* here we will write same name to use this pointer */
    {
        /* this->roll = r;  - you see it automatic converts to -> from dot */
        (*this).roll = roll; /* i can keep this like this with dereferencing */
        this->cls = cls;
        //    (*this).cls = cls
        this->cgp = cgp;

        // (*this).cgp = cgp
    }
};
int main()
{
//    these both are static object
    Student rahim(20, 5, 4.75);
    // Student karim(34, 2, 5.00);

    // now we declare the dynamic object and it stored in heap memory. we need a pointer to access dynamic object. and dynamic object returs a pointer so we have to take a pointer. here karim is a pointer which will store the address of studen object in heap memory. 
    Student* karim = new Student(10, 5, 4.65); /*it gives me error due to the constructor. so to avoid this i need to provide value*/

    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgp << endl;
    cout << (*karim).roll << " " << karim->cls << " " << (*karim).cgp << endl;

    return 0;
}


// we know that data type of object is the name of it`s class