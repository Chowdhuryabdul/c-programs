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

void insert_at_any_position(Node* &head, int index){
    Node* newNode = new Node(4000);
    Node* tmp = head;
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next;
    }
    // cout<< tmp->val << endl;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
    
};
void delete_at_head(Node* &head, Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    /* after taking head in the next, in case of one node than next of head will be NULL. in same case if we take head in NULL than we have to bring the tail also in NULL. we have only brought head, not tail. tail is just sitting there. so also need to move the tail as well.  so we will do that by this code- */
    if(head == NULL){
        tail = NULL;
        return; /* this return means finish here and do not execute the belowe mentioned codes */

    }

    head->prev = NULL;  /* as we know that at begining of doubly linked list there will be NULL */
};
    
void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;;
        tmp = tmp->next;
    }
};
int main()
{
    Node* head = new Node (10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_at_any_position(head, 2);
    delete_at_head(head, tail);
    print_linked_list(head);
    return 0;
}