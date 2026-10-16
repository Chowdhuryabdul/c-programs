#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
    stack<int>st;
    void push(int val){
        st.push(val);
    };
    void pop(){
        st.pop();
    }
    int size(){
        return st.size();
    }
    int top(){
        return st.top();
    }
    bool empty(){
        return st.empty();
    }
};
class myQueue{
    public:
    queue<int>q;
    void push(int val){
        q.push(val);
    };
    void pop(){
        q.pop();
    }
    int size(){
        return q.size();
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};
int main()
{
    myStack st;
    myQueue q;
      int n, m;
    cin >>n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
     bool same = true;
    if(st.size() != q.size()){
        same = false;
    }   
    else
    {
    while(!q.empty()){
        if(st.top() != q.top()){
            same = false;
            break;
        }
        q.pop();
        st.pop();
    }
    }
    if(same) 
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
    return 0;
}