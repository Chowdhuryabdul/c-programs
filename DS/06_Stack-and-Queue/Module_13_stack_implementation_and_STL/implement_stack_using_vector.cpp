#include<bits/stdc++.h>
using namespace std;

class myStack
{
    // access modifier
    public:
    // to implement stack by using vector - so we will make stack here
    vector<int> v;

    // implement operation - it wont have a return type as we will just insert
    void push(int val)
    {
        v.push_back(val); //it's complexity is O(1)
    }

    // another operation - it will not return anyhing so data type will be void. nothing to input here as it will delete the last elemetn of the stack
    void pop(){
        v.pop_back(); //it's complexity is O(1)
    }

    // next operation - top() - which returns the first value of the stack. so we need to data type as integer- we will access the top value of the stack. it will not take any input as parameter. top means we want the last element. here we use the back function from the vector. the top of stack menas the last value of vactor which is found by the back function
    int top(){
       return  v.back(); //it's complexity is O(1)
    }

    // next operation - size() as we will return sth so have daa type
    int size(){
       return v.size(); //it's complexity is O(1)
    }

    bool empty(){
        return v.empty(); //it's complexity is O(1)
    }
};
int main()
{
    // object of myStack class - this is static stack
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();
    
    // we have to do this chck before top and pop both- in case of pop if stack is empty then it will give grabage value. and we have to do it every time while checking top and pop
    // before checking the top function over and over again, we have to check whether the stack is full or empty? if stack is empty and we try to access then we will get a segmentation or run time error
    // to avoid segementation or run time error
   // if(st.empty() == false) // if it returns true than we can not print. so we have flase to prnt
    if(!st.empty())// there is short cut to write this. it means after things get reverses. if it is true than it will be false and false will be true
    {
        cout << st.top() << endl;

    } 

    if(st.empty() == false) // if it returns true than we can not print. so we have flase to prnt
    {
       st.pop();

    } 
    return 0;
}