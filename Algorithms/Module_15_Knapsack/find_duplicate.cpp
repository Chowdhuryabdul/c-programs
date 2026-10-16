#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    };

    // for(int x : ans){
    //     cout << x << " ";
    // }

    
    while (true)
    {
        int x = ans[0];
        if(ans[x] == x){
            cout << x << endl;
            break;
        }
        swap(ans[0], ans[x]);
        
    }
    
    
    return 0;
}