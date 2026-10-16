#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

 bool cmp(Student l, Student r){
    //  if several students has same mark than we can write l.roll >= r.roll

    if(l.marks >= r.marks){ /* this condition either return true or false to if. if it returns to if true than it goes to return and return true, otherise false. */
        return true;
    }else{
        return false;
    }

    // there is a short cut way of this condition

  /*  return l.roll > r.roll;  here is the same thing if condition true tha return true otherwise false */
 }

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, cmp);

      for (int i = 0; i < n; i++)
    {

        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;;
    }


    
    return 0;
}