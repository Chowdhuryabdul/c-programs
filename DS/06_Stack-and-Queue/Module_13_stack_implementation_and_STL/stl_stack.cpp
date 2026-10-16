#include<bits/stdc++.h>
using namespace std;

int main()
{
    // this is built in stack
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // we always have to check that stack is empty or not
   /*  if(!st.empty())
    cout << st.top();
    if(!st.empty())
     st.pop(); */
    
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}