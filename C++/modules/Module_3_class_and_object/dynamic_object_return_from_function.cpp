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
    // it is a static object - but we will declare it as dynamic
    // Student karim(34, 2, 5.00);
    Student* karim = new Student(34, 2, 5.00); /* here karim is pointer whichh will helps us to access this student object in the heap meomry. here first part whhich will take place in static memory and second which will take place in heap memory */

     return karim;
}

int main()
{
   
//    now we need to receive it form that function
// i need to take an object to receive the returned object
    Student*p = fun(); /* this p is also a pointer this pointer receivs the pointer from the fun function which is karim. and it stores the address of the student object. after returning from the stack memory it will delete every thing- so i have address name in the p pointer */


    cout << (*p).roll << " " << p->cls << " " << (*p).cgp << endl; /* if i writhe here p.roll it will give me error as p is pointer it does not indicate to roll. but after dereferencing i can use this. here i have used both arrow and */
    /* when we try to print here first here we do dereferencing the p pointer address. what is the meaning of dereferecing here? it means we will go to that address. so it will take us heap meomry and will access to the roll */
    return 0;
}


/* karim object is declared which stroed in static memory. after returning from the fun to main function. all the data is being deleted so it return garbage value. in this case we have to declare the dynammic object so it will keep the value after returnig. */
// now we have declared the dynmaic object so it will return the value


