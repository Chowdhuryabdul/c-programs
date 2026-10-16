#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
         cin >> a[i];   
        }
        int ans = 0;
        for(int pos = 0; pos< n; pos++){
            // cout << pos;
            // find the smaller in the left
            int left_small = 0;
            for (int i = 0; i < pos; i++)
            {
                /* code */
               if(a[i] < a[pos]){
                left_small++;
               }
            }
            // find the large elements in right element
            int right_large = 0;
            for (int i = pos+1; i < n; i++)
            {
                /* code */
                if(a[i] > a[pos]){
                    right_large ++;
                }
            }
            
            if(left_small == right_large){
                ans++;
            }            
        }
        cout << ans << endl;
    }
    return 0;
}

/* // calculation of time complexity
1. for the first loop O(N)
2, for the inner loop O(N) + O(N) = O(2N)
3. usuallly takes the lowest, so it will O(N)
4. since under the main loop there is nested loop - O(N) * O(N) = O(N^2)
5. In question value of N will be 100^2
6. so the value of N will be 10^4
7. and the value of test case will be also 10^4
8. so total will be 10^4 +10^4 = 10^8
9. it is possible to handel 10^8 in one second */