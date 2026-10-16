#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10, 20, 30, 40, 50};

    // to print the whole vector by iterator
    // here it is the name of iteraor and auto will automatically identfy that as data type of vecotr. start point, end point and increment
    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}