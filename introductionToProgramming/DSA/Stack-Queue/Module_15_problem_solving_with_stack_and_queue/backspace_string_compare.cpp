#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    stack<char>st1;
    string s1;
    string s2;
    cin >> s1; 
    cin >> s2;
   
    // by looping take the each char from string
    for(char c : s1){
        // get # - will pop previous letter
        if(c == '#'){

            // if stack is not empty then it will not pop
            if(!s1.empty()){
                st.pop();
            }
        }
        // push the letter
        else{
            st.push(c);
        }
    }

    for(char c : s2){
      if(c == '#'){
        if(!st1.empty()){
            st1.pop();
        }
      }
      else{
        st1.push(c);
      }
    }

    // show the result
    if(st == st1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}