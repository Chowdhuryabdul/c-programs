#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    list <int> l;
    while(q--){
        int x, v;
        cin >> x >> v;
        if(x < 0 || x > l.size()){
            cout << "invalid" << endl;
            continue;
        }

        auto pos = next(l.begin(), x);
        l.insert(pos, v);

        for(int val : l){
            cout << val << " ";
        }
        cout<< endl;
        for(auto it = l.rbegin(); it != l.rend(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}