#include<bits/stdc++.h>
using namespace std;

class Student /* student is the name of class */

{
    public: /* This access modifier */
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a; /* this variable works as object. this is the objecct of student class */

    // now i can set the value in the elements of class 
    a.roll = 10;
    a.gpa = 4.75;

    // we can not initialise here for the name array
    // so first i will take a new array to store the value
    char temp[100] = "Sakib";
    // Now this temp array needs to store in the name array- strcpy
    strcpy(a.name, temp); /* - where i want to store and where to copy */


    cout <<a.roll << " "<<a.gpa << " " <<a.name <<endl;
    return 0;
}

/* Note-
we can intialize array while we are declaring.
But we can not initilise after declaration. we are allowed to initialise only inn the declaration. 
so we 
*/


/*  char name[100] = "rahim";  i can do it 
name = "rahim" - i can not declare here */
