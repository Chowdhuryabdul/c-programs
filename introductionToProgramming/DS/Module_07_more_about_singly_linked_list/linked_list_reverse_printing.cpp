#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node* tmp) /* in linked list we take a temporary variable to traverse. this tmp is represnting the head which we have sent from the main function. */
{
    // base case
    if(tmp == NULL){
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->val << endl;
}
int main()
{
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
    print_reverse(head); /* this head is received by the tmp */
    return 0;
}