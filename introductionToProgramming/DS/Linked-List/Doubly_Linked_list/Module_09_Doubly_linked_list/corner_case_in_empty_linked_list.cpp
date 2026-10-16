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

void insert_at_tail(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 300);

    print_linked_list(head);
    return 0;
}