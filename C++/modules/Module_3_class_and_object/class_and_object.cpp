#include<bits/stdc++.h>
using namespace std;

class Student
{

// this is access modifer
public:
char name[100];
int roll;
double gpa;

};

int main()
{
    // now we will create object of this class
    // this 'a' is object. because it is varible of user defined datta type. object is called the variable of the user defined data type.
    Student a;

    // if i want to assign a value in the object. i can not assign directly to 'a' as it is a group. but i can assign the value in the elements of that group which can be accssed by the dot sign.
    a.roll = 70;
    a.gpa = 4.5;

    // overmentioed these 2 is ok. but this -->>a.name = 'sakib'<<-- is not ok as it array and we can not assign value in the array as such. we can assign value in the initialization for the first time. it mmeans where we declare the array for the first time there we can assign value, but not in the other places. here the array is declared in the class already.
    // a.name = 'sakib'
    // there is a solution for this - at the beginnning we can keey this array temorary in another array, then we copy fromm that arrray.
    char temp[100] = "Sakib";
    strcpy(a.name, temp);

    cout <<a.name<<" "<<a.roll<<" "<<a.gpa<< endl;

    return 0;
}

/* How it works?
First we have taken a class. we know class works as group. the element of that group is name, roll and gpa.

when in the main function i have created an object (student a) of that group. then there is object which is called 'a' will create in the memory. this object a will have name, roll and gpa. here roll is 70, gpa is 4.5 and name is sakib. */

/* how much place a class take?
it depends on the number of data type is taken inside the class. summation of those data type will take in the memory. 
char name[100]; - 1 char take 1 byte - total 100 byte
int roll; - 4 byte
double gpa; - 8 byte 
so total it takes 112 byte space in the memory 

it must be also mentioned in the memory that it is a gropu or class- for this it might take also around 8 byte. so total will be 120 byte.

when we declare a object for this class it will take space exactly that we have seen before and see in the picture
*/