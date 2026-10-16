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
// it will show how many times sort function will be called

    cout << "Helo" << endl;
//  if all the makrs are same than we will sort based on the roll- the below mentioned it works. if two has same mark and rest of them have also same mark then it will be sorted based on roll. and both has same mark who will come first, the one whoose has smaller role.
   

   /*  if(l.marks > r.marks){
        return true;
    }else if(l.marks < r.marks){
        return false;
    }else{ before i have give two condition about small and big, now this conditon will apply to be same to each other
        if(l.roll < r.roll){
            return true;
        }else{
            return false;
        }
    //    shortcut
    return l.roll < r.roll;
    } */

    // this is the uch shorter version of this one

    // if(l.marks == r.marks){ /* if marks are the same the will sort based on roll */
    //     return l.roll < r.roll;
    // }else{ /* here rest of them sort based on mark */
    //     return l.marks > r.marks;
    // }

    // now we can do with ternary operator much shorter
    return (l.marks == r.marks) ?  l.roll < r.roll :  l.marks > r.marks;
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