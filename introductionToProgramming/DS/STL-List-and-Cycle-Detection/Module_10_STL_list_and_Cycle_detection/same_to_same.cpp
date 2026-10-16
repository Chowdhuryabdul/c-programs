#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> list1;
    list <int> list2;

    int val;
    while(true){
        cin >> val;
        if( val == -1){
            break;
        }
        list1.push_back(val);

    }
    while(true){
        cin >> val;
        if( val == -1){
            break;
        }
        list2.push_back(val);

    }
    if(list1 == list2){
        cout << "YES" << endl;
    }else
    cout << "NO" << endl;
    return 0;
}