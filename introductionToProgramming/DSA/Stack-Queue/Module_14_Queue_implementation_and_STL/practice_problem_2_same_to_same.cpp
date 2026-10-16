#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    // stack<int>st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
  
    stack<int>st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    bool same = true;
    for (int i = 0; i < st.size(); i++)
    {
        /* code */
        if(st.size() != st2.size()){
            same = false;
            break;
        }
        else{
            if(st.top() != st2.top()){
                same = false;
            }
        }
    }
    

    

    if(same)
    cout<< "true"<< endl;
    else
    cout << "False" << endl;
    
    // while(!st2.empty()){
    //     cout << st2.top() << endl;
    //     st2.pop();
    // }
    
    return 0;
}