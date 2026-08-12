#include<bits/stdc++.h>
using namespace std;

int getSum(stack<int> st){
    int sum = 0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    return sum;
}

int main()
{
    stack<int>stack_1;
    stack<int>stack_2;
    stack<int>stack_3;
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // push in stack in revers order
    for (int i = n-1; i >= 0; i--)
    {
        stack_1.push(v[i]);
    }
    
    int m;
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
       cin >> v1[i];
    }

    for (int i = m-1; i >= 0; i--)
    {
        /* code */
        stack_2.push(v1[i]);
    }
    
    int p;
    cin >> p;
    vector<int>v2(p);
    for (int i = 0; i < p; i++)
    {
       
        cin >> v2[i];
        
    }

    for (int i = p - 1 ; i >= 0; i--)
    {
        /* code */
        stack_3.push(v2[i]);
    }
    

    int sum_1 = getSum(stack_1);
    int sum_2 = getSum(stack_2);
    int sum_3 = getSum(stack_3); 


    // this loop will run until they are  maximum equal or 0
    while(true){
        // if all are equal than break
        if(sum_1 == sum_2 && sum_2 == sum_3){
            break;
        }
        // if not-
        // we will try to find the biggest sum
        if(sum_1 >= sum_2 && sum_1 >= sum_3){
        //    if it is biggest then we will minus the top element of that stack to make it smaller or equal to them
            sum_1 -= stack_1.top();
            // and then will pop than number
            stack_1.pop();
        }
        else if(sum_2 >= sum_1 && sum_2 >= sum_3){
            sum_2 -= stack_2.top();
            stack_2.pop();
        }
        // if sum_1 and sum_2 is not biggest than obviously sum_3 will be biggest
        else{
            sum_3 -= stack_3.top();
            stack_3.pop();
        }
    }

    // after this process we can return only one as we know that all are similar. if three sume is not equal then all elements will be removed and they will be 0;
    cout << sum_1 << endl;
    cout << sum_2 << endl;
    cout << sum_3 << endl;
    

    return 0;
}

/* why i need to take the input in the vector than push to the stack in reverse order?
- firstly if i push dirctly to the stack it will go reverse the order of the input which is given by user. for example if order is 8 5 3 than while i push in the stack 8 will be last and 3 will be first. so calculation will start from 3, but it suppose to start from 8 to get the correct answer. 
- so first i have taken all the inputs in vector in right order 
- than push it to the stack in revers order. such input is 8 5 3. in normal way to push 8 will be bottom and 3 will be top. but i want to keep 8 top and 3 bottom. that is why i have sent reverse order which will be 3 5 8 and three will be bottom ad 8 willl be top. this will not make any issue to get the proper sum */