#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 11, 12};
    l.push_back(40);
    l.push_front (200);
    l.pop_back();
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}