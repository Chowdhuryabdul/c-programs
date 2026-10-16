#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector <int> v (n+1);
    for (int i = 1; i <= n; i++) /* --> O(N) - i have to keep this as i need to take the input */
    {
        cin >> v[i];
    }

    while (q--)     /* --> O(q) -- i have to keep this as i have take the query */
    {
        /* code */
        int sum = 0;
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++) /* --> O(N) - but i can cut this and try to find the other way to make my code optimised. Here we can do it another way which is called prefix sum, where we calculated the summation beforehand */
        {
            /* code */
            sum +=v[i];

        }
        cout << sum << endl;
        
    }
    
    
    return 0;
}