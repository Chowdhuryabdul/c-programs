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

void  insert_at_tail(Node* &head, Node* & tail, int val) /* now the complexity of this code is O(N) */

{
    Node* newNode = new Node(val);
    // handler the corner case
    if(head == NULL){ /* in this case head and tail both will stay at NULL */
        head = newNode;
        tail = newNode;

        /* if my head and tail is NULL. than i have got New node , so i shoud move tail as head always stay before the tail. so in this case head and tail will be that newNode */
    }
   /*  Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    } */
//    tmp->next = newNode;



// we do not need this loop, as we have tail pointer we just need to connect with the tail and newnode.
// this is connection
tail->next = newNode;

// update the tail from the exingting address to new address- both are same
// tail = tail->next;
tail = newNode;



}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = new Node (10);
    Node* a = new Node(20);
    // to track the tail we will declared new object of node class to track the tail
    Node* tail = new Node ( 30);

   

    head->next = a;
    a->next = tail;

    insert_at_tail(head,tail, 100);
    insert_at_tail(head,tail, 600);
    print_linked_list(head);
    return 0;
}

