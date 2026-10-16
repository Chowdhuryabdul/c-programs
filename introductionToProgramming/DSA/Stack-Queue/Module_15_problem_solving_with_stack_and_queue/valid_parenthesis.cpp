#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            // stack is empty
            if(st.empty()){
                return false;
            }
            // if match the closing and opening
            else{
                if(s[i] == ')' && st.top() == '(' ){
                    st.pop();
                }else if(s[i] == '}' && st.top() == '{' ){
                    st.pop();
                }else if(s[i] == ']' && st.top() == '[' ){
                    st.pop();
                }
                // if not match
                else{
                    return false;
                }
            }
        }
    }
    // at the end we will check the stack is empty, if empty than it will be valid string. to become matched it becomes empty. 
    if(st.empty()) cout << "yes";
    else cout << "no";

    // while(!st.empty()){
    //     cout << st.top() ;
    //     st.pop();
    // }
    
    return 0;
}
