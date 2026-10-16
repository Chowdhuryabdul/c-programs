#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            total_sum+=a[i];
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int sum_rest = total_sum - a[i];
            if(sum_rest % 2 == 0){
                flag = true;
                break;
            }
        }
        if(flag == true) cout << "Yes" << endl;
        else cout << "No" << endl;
        

        
    }
    return 0;
}