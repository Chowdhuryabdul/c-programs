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
    Node* newNode = new Node(300);
    Node* tmp = head;
    for (int i = 0; i < index; i++)
    {
        tmp = tmp->next;
    }
 
    newNode->next = tmp->next;/* althoug the lastone is tail, but we will not consider it tail as there might be some other nodes after this */
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

// it will print 10, 20, 30
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;;
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);
   
    // make connection

    // Forward connection between head and a-it means head is connected to a. this one help to go forward from head to a
    head->next = a;
    //Bakward connection between a and head - it means a is connected to head. this one helps to come backward from a to head
    a->prev = head;

    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;

    insert_at_any_position(head, 2);
    print_forward(head);
    

    return 0;


}