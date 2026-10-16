#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx_so_far = a[0];
    int min_so_far = a[0];
    int result = mx_so_far;
    for (int i = 0; i < n; i++)
    {
        int crnt = a[i];
        int tmp_mx = max(crnt, max(mx_so_far * crnt, min_so_far * crnt));
        min_so_far = min(crnt, min(mx_so_far * crnt, min_so_far * crnt));

        mx_so_far = tmp_mx;
        result = max(mx_so_far, result);
    }
    cout << result;
    
    
    return 0;
}