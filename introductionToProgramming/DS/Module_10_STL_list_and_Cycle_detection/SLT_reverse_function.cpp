#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 30, 50, 20, 60};
    l.reverse();
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}