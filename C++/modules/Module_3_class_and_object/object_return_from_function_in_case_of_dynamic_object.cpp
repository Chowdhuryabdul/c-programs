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


Student* fun() /* since karim has Student data type then function data type will be Student.  since i am returning the pointer than i have to  put here pointer sign as we are returning the pointer of student data type*/
{
    // it is a static object 
    Student karim(34, 2, 5.00);

    Student*p = &karim;  /* here we take a pointer as object of karim is sttudent data type then pointer will be also student data type. we store the address of karim */
     return p;
}

int main()
{
   
//    now we need to receive it form that function
// i need to take an object to receive the returned object
    Student*p = fun();
    cout << (*p).roll << " " << p->cls << " " << (*p).cgp << endl; /* if i writhe here p.roll it will give me error as p is pointer it does not indicate to roll. but after dereferencing i can use this. here i have used both arrow and */
    return 0;
}


/* karim object is declared which stroed in static memory. after returning from the fun to main function. all the data is being deleted so it return garbage value. in this case we have to declare the dynammic object so it will keep the value after returnig. */


