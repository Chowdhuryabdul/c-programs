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

void insert_at_head(Node* &head){
    Node* newNode = new Node(1000);
     newNode->next = head;
     head = newNode;

};

void insert_at_tail(Node* &head, Node* &tail){
     Node* newNode = new Node(2000);
     tail->next = newNode;
     newNode->prev = tail;
     tail = newNode;
};

void insert_at_any_pos(Node* &head, Node* &tail, int index){
       Node* newNode = new Node(23000);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node* tmp = head;
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;  
};


void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout <<tmp->val << endl;
        tmp = tmp->next;
    }
};

int main()
{
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* tail = new Node(400);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_at_head(head);
    insert_at_tail(head, tail);
    insert_at_any_pos(head, tail, 2);
    print_linked_list(head);
    
    return 0;
}