#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    stack <int> newSt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while(!st.empty()){
        newSt.push(st.top());
        st.pop();
    }

    int inserted_val;
    cin >> inserted_val;
    st.push(inserted_val);

   while(!newSt.empty()){
    st.push(newSt.top());
    newSt.pop();
   }
    while(!st.empty()){
        cout << st.top() <<endl;
        st.pop();
    }
    
    return 0;
}