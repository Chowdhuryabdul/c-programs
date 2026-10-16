#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 40, 50, 10, 30, 10};
    // it will remove all the 10 from the list
    l.remove(10);
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}