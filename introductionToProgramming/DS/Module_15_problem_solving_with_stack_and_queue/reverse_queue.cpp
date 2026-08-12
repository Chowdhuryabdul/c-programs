#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;

    // this is with vector

    /* vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
     
        cin >> v[i];
       
    }
    for (int i = n-1; i >= 0; i--)
    {
     
      q.push(v[i]);
       
    } */

    // this with the stack

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    stack<int> st;
     while (!q.empty())
    {
        /* code */
        st.push(q.front());
        q.pop();
    }
     while (!st.empty())
    {
        /* code */
        q.push(st.top());
        st.pop();
    }
    
    while (!q.empty())
    {
        /* code */
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}