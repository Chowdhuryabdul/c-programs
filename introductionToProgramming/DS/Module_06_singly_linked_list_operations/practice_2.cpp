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

void print_linked_list(Node* head){
    Node* tmp = head;
    unordered_set<int>s;
  while(tmp != NULL){
    if(s.count(tmp->val)){
        cout << "YES " << tmp->val << endl;
        return;
    }
    s.insert(tmp->val);
    tmp = tmp->next;
  }
  cout << "NO" << endl;

};
int main()
{
    Node* head = new Node(5);
    Node* a = new Node(4);
    Node* b = new Node(8);
    Node* c = new Node(8);
    Node* d = new Node(2);
    Node* e = new Node(1);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);
    return 0;
}