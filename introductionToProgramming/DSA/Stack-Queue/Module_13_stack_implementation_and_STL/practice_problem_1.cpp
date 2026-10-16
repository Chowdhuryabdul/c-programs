#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector <int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    myStack st1;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    // int sz = st.size();
    // cout << sz << endl;

    bool same = true;
    if(st.size() != st1.size()){
        same = false;
    }else{
        while(!st.empty()){
            if(st.top() != st1.top()){
                same = false;
                break;
            }
            st.pop();
            st1.pop();
        }
        
    }
    if(same)
    cout << "yes";
    else
    cout << "NO";


    while(!st.empty()){
        // cout << st.top() << endl;
        st.pop();
    }
    // while(!st1.empty()){
    //     cout << st1.top() << endl;
    //     st1.pop();
    // }
    
    return 0;
}