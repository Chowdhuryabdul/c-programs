#include<bits/stdc++.h>
using namespace std;
int main()
{
    // type - 1- intialization
    // vector-keyword<datatype>name of vector
    vector<int>v;

    // type - 2- intialization/declaration with size
    // here i have given the sixe of vector after name - it will print 5
    vector<int> v(5);

    // type - 3 - vector deccalration with size and value
    vector<int>v(5, 1);
    
    // to see that all the value is 1, we need to print by loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // type - 4 - declaration with copying all the elements from the others vector
    // here i will get all the things from v vector in type 3
    vector<int>v2(v);

    // to print what it has in the v vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v2[i] << endl;
    }

    // type - 5 - vector declaration and copying all the elements from the array
    int a[5] = {10, 20, 30, 40, 50};
    vector<int>v3(a, a+5);

     // to print 
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << endl;
    }

    // type - 6 - instant value initialization with the declation of vector

    vector <int> v4 = {100, 200, 300, 400};
     // to print 
     for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << endl;
    }
    
    // size of this vector - it will be 0
    // cout <<v.size() << endl;
    return 0;
}
