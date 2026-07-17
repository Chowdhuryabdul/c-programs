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
void insert_at_head(Node* &head, Node* &tail){
    Node* newNode = new Node(300);
    if(head == NULL){
        head = newNode;

        tail = newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// it will print 10, 20, 30
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;;
        tmp = tmp->next;
    }
}

// it will print reverse 30, 20, 10 which we usded to do by recursion in slingly linked list
void print_backward(Node* tail){
     Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->prev;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
   
    // make connection

    // Forward connection between head and a-it means head is connected to a. this one help to go forward from head to a
    head->next = a;
    //Bakward connection between a and head - it means a is connected to head. this one helps to come backward from a to head
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_head(head, tail);
    print_forward(head);
    print_backward(tail);

    return 0;


}