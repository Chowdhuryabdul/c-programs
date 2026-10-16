#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmf(Student l, Student r){

    // int total_mark = l.math_marks + r.eng_marks;
    // cout << total_mark;
    if(l.math_marks + l.eng_marks > r.math_marks + r.eng_marks){
        return true;
    }else if (l.math_marks + l.eng_marks < r.math_marks + r.eng_marks){
        return false;
    }else{
        if(l.id < r.id){
            return true;
        }else{
            return false;
        }
    }
}



int main()
{
    int n;
    cin >> n;

    // object declaration
    Student a[n];

    // taking input from user
    for (int i = 0; i < n; i++)
    {
        cin >>a[i].name >>a[i].cls>>a[i].section>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }

    // sortinng
    sort(a, a + n , cmf);
    
    // printing after sorting
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "  << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
        
        
    }
    

    return 0;
}