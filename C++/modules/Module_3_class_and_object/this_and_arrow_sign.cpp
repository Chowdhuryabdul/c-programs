#include<bits/stdc++.h>
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
    Student rahim(20, 5, 4.75);
    // after passing parameters now we do not need to write these to assign value like this. rather we can call that function and pass the value inside the function for paramters. Now you can see we have written one line insttead of writing too many line to assign value. 
    // rahim.roll = 20;
    // rahim.cls = 5;
    // rahim.cgp = 23.56;


    Student karim(34, 2, 5.00);
    // karim.roll = 38;
    // karim.cls = 6;
    // karim.cgp = 2.5;


    // if we need to take input- this is one way to do. but this is not shrot cut

    int r;
    int c;
    int g;
    cin >> r >> c >> g;
    Student shakil (r, c, g);

    // another way to do with input in this case we do not need to take the constructor
    // Student mafij;
    // cin >> mafij.roll >> mafij. cls >> mafij.cgp;



    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgp << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.cgp << endl;
    cout << shakil.roll << " " << shakil.cls << " " << shakil.cgp << endl;
    // cout << mafij.roll << " " << mafij.cls << " " << mafij.cgp << endl;


    return 0;
}


/* constructor simulation- how it works behind the scene?

first of all in the beginning of main function we have declared the a object of student class which name is rahim.
it will take a place in the memory as rahim and it will accomodate those which is in student class
after declaring the object we also call the constructor */