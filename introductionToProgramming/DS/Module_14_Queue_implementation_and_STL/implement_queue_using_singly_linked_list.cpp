#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){ 
        sz++;//it means insert at tail - O(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){ //delete at head in singly linked list - O(1)
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        } 
    }


    int front() // it means print the head - O(1)
    {
        return head->val;
    }

    int back(){ // it means print the tail - O(1)
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(head == NULL){
            return true;
        }else{
            return false;
        }
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

   cout << q.front() << " " << q.back() << " " << " "<< q.size() << endl;
   while(q.empty() != true){
    cout << q.front() << endl;
    q.pop();
   }
    
    return 0;
}

/* to find the size -
if we follow the regular process than we need to take a pointer from head and will need to run a loop which will run from head to tail and coun all. it's order complexity will be O(N). so we can not do this due to order of complexity. so we can track the size in case of push and pop. which order of complexity will be O(1) */