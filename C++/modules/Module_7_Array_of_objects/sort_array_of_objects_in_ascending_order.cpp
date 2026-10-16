#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};


//  declare here custom compare function for the sorting. and its return type boolean. the parameter of this function will be only 2 whether it is integer or object. here are two objects 
bool cmp(Student l, Student r)
{
    // ascending order in marks- sorting based on mark
    if(l.marks < r.marks){
        return true;
    }else{
        return false;
    }
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

    // Sorting with sort function
    // sort(a, a+n); in this way he does not work. because this is not straightforward int, char or others array which have single varible in every index. but here every index has objec with many inputs. so he does not know how to do it. but he can do it if we specify that you can sort based on  name, or roll or marks. as these are same data type. so to solve this there is one thing which is called - CUSTOM COMPARE FUNCTION. we just need to wrtie a function after a+n in the sort. and the function should be decclare up.
    sort(a, a+n, cmp);

    // print array
     for (int i = 0; i < n; i++)
    {
        
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;;
    }
   
    


    
    return 0;
}



/* how sort function works?
he sends two values together to the CMP function to compare. if function returns true he thinks that they are in right order. if false, than he thinks they are not in right order so he sort them. in the picture it showes that he sends first rakib and sakib´s mark,  mark of left side 89 is begger than mark of right side 78. so function returnes it false then he understand that they are not in a right order. so he actually swap them right to left (78, 89). than may be he will send rakib(78) as left and sifat(92) as right. if he see that function returns true then he understands that they are in right order. than he may be he will send rakib mark(78) as left and akib mark (75) as right. if he see the function return false as left is bigger. than he swap. he will do untill it is properly sorted in ascending order.  actually we do not know that sort function exactly works like this, but might be it is similar to this.  */
