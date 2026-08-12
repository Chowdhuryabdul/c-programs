#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    stack<int>st;
    stack<int>min_st;
    void push(int val){
        // we have alredy pushed the value in stack
        st.push(val);
        // there is corner case is that if min_st is empty than we can not compare to anything to compare which will give error- so
        if(min_st.empty()){
            min_st.push(val);
        }  
        // now compare to the top of the min_st and st. if it is small then the value in min_st than we will push it to the min_st
      else  if(min_st.top() >= val){
            min_st.push(val);
        }
    }
    void pop(){
        // if we pop early that we loose the top value without comparring with min_st. so we have to check that the value at the top of stack is also exists at the top of min stack. if it is there then it will be popped from the min_st as well
        if(st.top() == min_st.top()){
            min_st.pop();
        }
        st.pop();
    }
    int top(){
        return st.top();
    }

    int getMin()
    {
        return min_st.top();
    }
};

int main()
{
  myStack st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    /* code */
    int val;
    cin >> val;
    st.push(val);
  }

  int min = st.getMin();
  cout << min << endl;

    return 0;
}