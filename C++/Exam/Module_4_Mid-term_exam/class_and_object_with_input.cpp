#include <bits/stdc++.h>
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
    Student a, b; /* taking to object a and b to take input */
    // now taking input
    // the name string with space - Sakib Ahmed
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    // cin.ignore();
    getchar(); /* - we can do it by this as well */
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}

// cin stop taking input when it gets space. cin ignore space and enters.
// whenever input name hase two part than it will be in one line, no other value will be in that line. this is because it is defficult to understand that the other values are not part of name. but getline takes all enter and space.
