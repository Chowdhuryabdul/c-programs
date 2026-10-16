#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l.push_back(val);
    }

    list <int>l1;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        l1.push_back(val);
    }

    if(l == l1)
    cout << "Yes";
    else
    cout << "NO";
    return 0;
}