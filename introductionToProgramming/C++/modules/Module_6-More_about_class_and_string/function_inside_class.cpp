#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int eng;
    
    // this is constructor
    Student(string name, int roll, int math, int eng)
    {
        this->name = name;
        (*this).roll = roll;
        this->math = math;
        (*this).eng = eng;


    }
    // this is randomm fubction
    void hello(){
        // cout << "hellooo" << endl;
        // we can also access the class elemetn from the function
        // cout << "hellooo from" << name <<endl;
    }

    // we can declare another function which will give the total mark
    void total_mark(){
        cout << "total marks of " << name << " = " << math + eng << endl;
    }

};

int main()
{
    Student sakib("sakib Ahmed", 23, 20, 40);
    // sakib.hello();
    sakib.total_mark();
//    cout << sakib.name <<endl;
//    cout << sakib.roll << endl;

    Student rakib("Rakib Ahmed", 34, 40, 60);
    // rakib.hello();
    rakib.total_mark();
    return 0;
}