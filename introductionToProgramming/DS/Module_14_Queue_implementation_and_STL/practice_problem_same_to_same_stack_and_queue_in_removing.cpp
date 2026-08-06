#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    queue<int>q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // while(!st.empty()){
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(q.size() != st.size()){
            flag = false;
            break;
        }else{
            if(st.top() != q.front()){
                flag = false;
            }
        }
        st.pop();
        q.pop();
       
    }

    if(flag == true){
        cout << "YES";
    }else{
        cout << "NO";

    }
    
    return 0;
}