#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }

};
class myStack
{
    public:
    
    // these two pointer we need for the doubly list
    Node* head = NULL;
    Node* tail = NULL;

    // this sixe variable will track the size of linked lsit- whenever we push then size will increase whenever pop size will decrease. this variable will store the increase and decrease of size.
    int sz = 0;

    void push(int val){ // it means insert at tail - its complexity O(1).
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    };
    void pop(){ // it means delete at tail - O(1)
        
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
    };
    int top(){ // it means the last value of linkd list which is tail
        return tail->val;
        
    };
    int size(){ // here we need to find the size. we can do it by while loop with the tmp pointer which will run from head to tail. but it's order complexity is O(N), but we need O(1). so we need to track the size. to track the size we will take a variable in the start. we will just return this variable. now its O(1)
        return sz;
    }
    bool empty(){ //O(1)
        if(head == NULL){
            return true;
        }else{
            return false;
        }

        // or we can write this as short cut-
        return head == NULL;
    }
};




int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}