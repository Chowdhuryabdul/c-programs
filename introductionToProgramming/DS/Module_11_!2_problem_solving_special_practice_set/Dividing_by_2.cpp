#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort all the element
        sort(a.begin(), a.end());
        int ans = 0;

        // first we check all the value are same
        while(a[0] != a[n-1]){ //- when first element and last element of aray are not same. it means value in the array are different
            a[n-1] = (a[n-1] / 2); // last element will be divided by 2 and will be floor
            ans++;
            sort(a.begin(), a.end());
        }
        cout << ans << endl;
        
    }
    return 0;
}

// after sorting -
// if we see first element and last element are same, it means all the value inside are same.
