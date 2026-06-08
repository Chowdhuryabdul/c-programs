#include <bits/stdc++.h>
using namespace std;
int main()
{
    // size function will give the size of the stirng
    string s = "Hello World";

    // clear the string
    // s.clear();

    //  to check string is empty or not
    if /* (s.empty() == true) */ (s.size() == 0) /* both are same */
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    cout << s.size() << endl;

    // print max size of the string- it means a maximum size of a string
    cout << s.max_size() << endl; /* nomrally it can store 10 to the power 6. but it can show different compiler to compiler */

    // print the capacity
    cout << s.capacity() << endl;


    // resize a string- we can increase and decrease of the size of the string. in terms of increase size it will give you null charecter after your existing string. but, if you insert a word after size then it will set that word in place of null char
    s.resize(15, 'w');
    cout << s << endl;

    return 0;
}

/* What is string?
String is a char array
String is built in class of the c++ module.
Here s is the object of the string class.
Here string comes as class and s is the object of that class */