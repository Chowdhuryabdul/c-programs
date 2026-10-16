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



void delete_at_any_pos(Node* &head, int index){
     
    Node* tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
        
    }
    Node* deleteNode = tmp->next;
   tmp->next = tmp->next->next;
   tmp->next->prev = tmp;
   delete deleteNode; 
   
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

    
    delete_at_any_pos(head, 2);
    
    print_linked_list(head);
    
    return 0;
}