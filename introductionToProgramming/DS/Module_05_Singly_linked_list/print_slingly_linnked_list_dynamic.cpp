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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node (30);
    Node* c = new Node (400);

    head->next = a;
    a->next = b;
    b->next = c;

    // We will not print in this way
    // first value
    // cout << head->val << endl;
    // // second value
    // cout << head->next->val << endl;
    // // third value
    // cout << head->next->next->val << endl;
    // // fourth value
    // cout <<head->next->next->next->val << endl;

    // we can do it by loop
    
    while(head != NULL){ /* it means we will stopp loop, but when the loop will run when head is not equal to null */
        cout << head->val << endl;
        // bring it forward
        head = head->next;
    }

    // but there is a problem to push the head forward. if in any case we need to print it agian. due to the pusing forward the head, i can not bring it back, so i can not print it again. So i must not push the head forward, rather i will use another pointer. we can use the temporary pointer whcih will place in the head and we will move it forward, not head

    // temporary pointer
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    // Now if we want we can print it again. as head is in it place, but we are just moving the head
    tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    // when we have to print we have to print by the head node. because we have only access of the head node in the linked list
    return 0;
}