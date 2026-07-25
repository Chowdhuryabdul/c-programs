#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 40};
    list <int>l2;
    // inserting one to another
    // we can do it by two way

    // 1. this is one way
    // l2 = l;

    // 2. the another way by assigning
    l2.assign(l.begin(), l.end());
    for(int val : l2){
        cout << val << endl;
    }
    return 0;
}