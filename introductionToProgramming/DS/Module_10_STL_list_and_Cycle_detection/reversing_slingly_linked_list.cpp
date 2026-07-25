#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* & tail, int val){
    Node* newNode = new Node (val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
   tail->next = newNode;
   tail = newNode;
}

void reverse_linked_list(Node* &head, Node* &tail, Node* tmp){
    // base case
    if(tmp->next == NULL){  /* when you will get NULL in the last node of tmp. stop  there */
        
        // the first thing is that now tmp in tail so we need to bring the head to tail -
        head = tmp;
        
        // after this tmp will return to the previous Node
        return;
    }
    reverse_linked_list(head, tail, tmp->next);
    // line to reverse and make the connection
    tmp->next->next = tmp;
    tmp->next = NULL;

    // we need to track the tail - to do this we can just wirte this - it means wherever tmp will stay thay will be tail
    tail = tmp;
};

void  print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
};
int main()
{
  /*   Node* head = new Node (10);
    Node* a = new Node (20);
    Node* tail = new Node (10);

    head->next = a;
    a->next = tail; */
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    

    reverse_linked_list(head, tail, head); /* second head is representing tmp to traverse. why take head? this is because it starts from head */
    print_linked_list(head);
    cout << "reverse head :" << head->val << endl;
    cout << "value of next of head :" << head->next->val << endl;
    cout << "value of tail :" << tail->val << endl;
    

    return 0;
}