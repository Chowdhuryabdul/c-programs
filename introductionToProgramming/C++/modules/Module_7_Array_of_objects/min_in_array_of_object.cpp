#include<bits/stdc++.h>
using namespace std;

class Student
{
   public:
   string name;
   int roll;
   int marks; 
};

int main()
{
    
    int n;
    cin >> n;
    Student a[n];
    for ( int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // out task it so find the stduent with minimum number

    // need to declare a varible to compare and store the given data from loop

  /* int mn = INT_MAX;  so why we store maximum numbe in min array, this is because when we compare it with other, than we get the minimum number */

    // in this way we just get the marks, but we need the whole object. so we need to declare a object

    Student mn; /* this mn object has all the three value as it is the object of Student class */
    mn.marks = INT_MAX; /* as we can not directly assign the INt MAX with the object as there are other value as well, so we declare the precise one for the marks */

    for ( int i = 0; i < n; i++)
    {
       
    // in the c program 
    /* if(a[i] < min){
        min = a[i];
    } */

    // in c++ with min function
//   mn = min(a[i].marks, mn);

//   Now to get the whole object we can not do in previous way, i have to go back in c program
if(a[i].marks < mn.marks){
    
    mn = a[i];  /* - here we have taken the whole object in the mn object */
}
}
cout << mn.name << " " << mn.roll << " " << mn.marks <<endl;
    
    return 0;
}

/* to get the max-
i have to declare the variannle INT_MIN and condition will right if  a.[i]. marks > mn.marks */