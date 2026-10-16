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

void insert_at_tail(Node* &head, Node* &tail, int val){
    // Node* tmp = head;
    Node* newNode = new Node(val);
   /*  while(tmp->next != NULL){
        tmp = tmp->next;
    } */

    tail->next = newNode;  
    tail = newNode;
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
    Node* head = new Node(100);
    Node* a = new Node(1400);
    Node* b = new Node(300);
    Node*tail = new Node(3000);

    head->next = a;
    a->next = b;
    b->next = tail;

    insert_at_tail(head, tail, 599955);
    print_linked_list(head);
    return 0;
}