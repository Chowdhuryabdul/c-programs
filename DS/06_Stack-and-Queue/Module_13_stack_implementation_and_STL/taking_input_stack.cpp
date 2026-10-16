#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:

    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size (){
         return v.size();
    }
    bool empty(){
       return v.empty();
    }
};
int main()
{
    myStack st;

    // to take input
    int n;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        // cin >> a[i]; we can not do it here as we do not have array here, so we have to take a variable and push them back. it will take the value from input one by one
        int x;
        cin >> x;  /* we will tak the input in this x */
        // push this x in the stack
        st.push(x);
    }

    // how to print
    // here we have just printed the top value 50
//    as evey time we will call top function to print the top element and pop function to delete that element. so we will do it by while loop
//while(st.empty() == false) //it means it will run until it is not empty - we can write it another way
while(!st.empty())
{
    cout << st.top() << endl;
    st.pop();
}
    return 0;
}