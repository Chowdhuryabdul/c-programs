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

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
};


 void   print_linked_list_reverse(Node* tmp){
    if(tmp == NULL) return;
    cout << tmp->val << endl;
    print_linked_list_reverse(tmp->next);
 };


 void delete_at_head(Node* &head){

    // create a head pointer
    Node* deleteNode = head; /* - it will point to the head */

    // Move the head to next
    head = head->next;

    // delete the existing head
    delete deleteNode;

 }


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // to delete head
    delete_at_head(head);

    
    print_linked_list_reverse(head);

    return 0;
}