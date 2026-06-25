#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // we can decrease the size
    // v.resize(2);

    //  increase the size
    v.resize(7, 100);
    for (int i = 0; i < v.size(); i++)
    {
        /* code -now it will only print 2*/
        cout << v[i] << endl;
    }
    
    return 0;
}