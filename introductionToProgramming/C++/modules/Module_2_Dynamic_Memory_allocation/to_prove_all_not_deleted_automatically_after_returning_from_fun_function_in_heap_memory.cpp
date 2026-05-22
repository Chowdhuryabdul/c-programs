#include<bits/stdc++.h>
using namespace std;

int *p;
void fun(){
    int *x = new int;
    *x = 10;
    p = x; /* now here we do not need address sign & here */

    cout << "Fun -->>" << *p << endl;
    return;
}

int main()
{

    fun ();
     cout << "Main -->>" << *p << endl;
    return 0;
}


/* here both result is --
Fun -->>10
Main -->>10 */