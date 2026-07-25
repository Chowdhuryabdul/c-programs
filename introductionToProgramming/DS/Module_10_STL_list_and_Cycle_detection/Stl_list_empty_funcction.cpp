#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 40};
    list <int> l2(l);

    l2.clear();
    cout << l2.size() << endl;
    if(l2.empty()){
        cout << "Empty" << endl;
    }
    for (auto it= l2.begin(); it != l2.end(); it++ ){
        cout << *it << endl;
    }
    
    
    return 0;
}
