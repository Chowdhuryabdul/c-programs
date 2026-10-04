#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[n];
    // }

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i - 1]){
            // this [1-2] - by this we are checking that if is there another 2 before this pair [i-1]
            // this condition will help not to print the same duplicate more than once. if 2 is two times it will just print once
            if(i == 1 || a[i] != a[i-2])
            {
                cout << a[i] << " ";
                cnt ++;
            }
        }
    }
    
    cout <<"\n Number of duplicate value: " << cnt << endl;
    return 0;
}