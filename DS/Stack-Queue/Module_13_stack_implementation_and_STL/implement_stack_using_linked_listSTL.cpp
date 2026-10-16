#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> l;

    void push(int val){ // compleixty O(1)
        l.push_back(val);
    }

    void pop(){ // compleixty O(1)
        l.pop_back();
    } 

    int top(){ // compleixty O(1)
        return l.back();
    } 

    int size(){ // compleixty O(1)
        return l.size();
    }

    bool empty(){ // compleixty O(1)
        return l.empty();
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(st.empty() == false){
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}