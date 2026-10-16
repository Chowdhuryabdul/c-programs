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

 void insert_at_any_postion(Node* &head, int index, int val){
    Node* tmp = head;
    Node* newNode = new Node(val);
    for (int i = 1; i < index; i++)
    {
        /* code */
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    
 };
 void print_linked_list(Node* head){

    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
 };


int main()
{
    Node* head = new Node (10);
    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* c = new Node(79);
    Node* d = new Node(32);
    Node* e = new Node( 100);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    insert_at_any_postion(head, 3, 200);
    print_linked_list(head);
    return 0;
}