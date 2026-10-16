#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 40};
    list <int> l2(l);

    // we cann make it bigger and smaller in size
    // l2.resize(2);
    // after increasing we will get 0 for those which are empty
    // we can also set the value for those which are 0
    l2.resize(5, 100);
    // cout << l2.size() << endl;
    for (auto it= l2.begin(); it != l2.end(); it++ ){
        cout << *it << endl;
    }
    
    
    return 0;
}
