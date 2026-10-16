#include<bits/stdc++.h>
using namespace std;

class Node
{
    // access modifier
    public:
    int val;
    Node* next;

    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node (val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void print_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
   
}

int size(Node* head){
    Node* tmp = head;
  int cnt = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
    
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }  
    print_list(head);

    // find the middle Node
    int sz = size(head);
    Node* tmp = head;
    for (int i = 0; i < sz/2; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
    cout << tmp << endl;
    
    
    return 0;
}
