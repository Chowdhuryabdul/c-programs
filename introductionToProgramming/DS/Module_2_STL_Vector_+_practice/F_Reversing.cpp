#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector <int> v (n);
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
       v.push_back(x);
    }

    reverse(v.begin(), v.end());
    for (int x : v)
    {
        /* code */
        cout << x << " ";
    }
    
    
    return 0;
}