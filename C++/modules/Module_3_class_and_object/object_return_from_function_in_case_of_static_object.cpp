#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double cgp;


    
     
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


Student fun() /* since karim has Student data type then function data type will be Student */
{
    // it is a static object 
    Student karim(34, 2, 5.00);

   
     return karim;
}

int main()
{
   
//    now we need to receive it form that function
// i need to take an object to receive the returned object
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.cgp << endl;
    return 0;
}


