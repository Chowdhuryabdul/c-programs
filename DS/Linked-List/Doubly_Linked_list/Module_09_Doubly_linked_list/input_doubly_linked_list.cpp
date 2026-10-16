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
    // Node* tmp = head;
    /* while(tmp->next != NULL){
        tmp = tmp->next;
    } */

    // this is the corner case - if the linkelist is empty- where head and tail both will be null and after adding the first node, head and tail will come to the first node. to handel this we will do this code-
    // to check this we have to make the linked list empty
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

// it will print 10, 20, 30
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " " ;;
        tmp = tmp->next;
    }
    cout << endl;
}



int main()
{
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);

    // we will take empty linked linked list to examine the corner case
    Node* head = NULL;
    Node* tail = NULL;
   
    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
    }


    print_forward(head);
    // print_backward(tail);

    return 0;


}