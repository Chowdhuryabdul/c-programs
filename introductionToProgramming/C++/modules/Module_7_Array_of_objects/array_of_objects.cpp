#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
     int marks;

//  why we do not take constructor here- we used to take constructor to shorter the process. for example after making object for example rakib- we need to set rakib.name, rakib.mark, rakib.roll. we need to write three line. we do not want to wirte it so we process it by the constructor function. here as we get the input from user than we do not need constructor
};

int main()
{
   
    // how to declare int array
    // int a[5];

    int n;
    cin >> n;
   

    
    // declare object array - here student is the name of datatype, a is the name of array and n is size
    Student a[n];
    for (int i = 0; i < n; i++)
    {
         cin.ignore(); /* why we use it- this is becuase we use getline later to take input. as getline also take enter press as input */
        
        // here i can not take input like this. it is right for the single integer value, but now in each a[i] i have an object of the sudent class. inside the object there will be three values of evry student - name, roll, marks. so like this it will give us a object. but we need those inside the object. so we can write a[i].name and so on.

        
        // the name with space
        
        getline(cin, a[i].name);

        // the name input here are without space, so here we just need to handle roll and class. name will be handled seperately
        // cin >> a[i].name >> a[i].roll >> a[i].marks;
        cin >>  a[i].roll >> a[i].marks;

    }
    for (int i = 0; i < n; i++)
    {

        cout << " " << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    


    Student rakib;

    return 0;
}

// As we mentioned earlier if name has space than rest of the inputs will be another line. as code does not know that rest of the inputs are not part of name, so we need to give the rest of the inputs in another line
