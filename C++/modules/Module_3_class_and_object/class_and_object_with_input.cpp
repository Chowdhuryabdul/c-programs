#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double cgp;
};


int main()
{
    // as there are two object then i have to take here two objects
    Student a,b,c;

    // first student
    
 

    // string with space-when there is a string with space. there will be no elemnt after the string. as we do not know what is the end. if there is sth after it how code will know that wthere it is part of it pr not. so if sth comes it will come in next line.
    // there is another issue is that when we press enter to go next line get line also count this.that is why it will give garvage value. so we need to ignore the enter by ignore function() or getchar() function as well.

    /* - here we have to give the size with the name */
    cin.getline(a.name, 100) ;
    cin >> a.roll >> a.cgp;
    
    // it will ignore the enter-pressing by these two functions.
    // cin.ignore();
    getchar();



    // this input of string is without space
    cin >>b.name >> b.roll >> b.cgp;

    cin >>c.name >> c.roll >> c.cgp;

    
    // cin.getline(c.name, 100); 
    // cin >> c.roll >> c.cgp;

    /* these are the variable we have written
    a.roll = 20;
    a.cgp = 2.40;
    char temp[100] = "Sakib"; */

    // user input - object varible

    // strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.cgp << endl;
    cout << b.name << " " << b.roll << " " << b.cgp << endl;
    cout << c.name << " " << c.roll << " " << c.cgp << endl;
    return 0;
}