#include<iostream>
using namespace std; /* it i used to avoid writing std very time */
int main ()
{
    
    int x;
    // std::cin >> x;
    // std::cout << x << std::endl;

    // here these two without std
    // char c;
    double d;
    cin >> x >> d;
    cout << x << " " << " " << d << endl;

    // how to get the ascii value in c++
    char c =  'a';

    // printf("%d\n", c); this is c program to get the ascii value
    int ascii  = c;
    cout << ascii << endl;

    
    // type casting
    // type casting way to find the ascii value
    cout << (int) c << endl;

    // to print ascii vlaue by intger value - here i have printed the charecter by 65

    int y = 65;
    cout << (char) y << endl;



    return 0;
}