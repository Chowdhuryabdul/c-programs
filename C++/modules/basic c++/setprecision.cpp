#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    
    double d = 23.45676;

    // How i can control the frcttion after .. how many we want to print

        // in c program
        // printf("%.2lf\n", d);

        // in c++ - 
        // we use setprecision to control this. we need header file for this <iomanip> - input output manipulation

        cout << fixed <<setprecision(1) << d << endl;

    // cout << d << endl;
    return 0;
}
