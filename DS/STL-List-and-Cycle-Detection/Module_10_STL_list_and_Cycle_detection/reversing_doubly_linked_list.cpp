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


void reversed_linked_list(Node* head, Node* tail){ /* we do not need to give the reference in head and tail this is because we are not changing it's address. head and tail both will be in the same place and will refer to the same address. just value will be changed */

    // this is for array or vector to reverse the value
//    for(int i = 0, j = n-1; i < j : i ++, j-- ){
//     swap(i, j)
//    }
   for(Node* i = head, *j = tail; i !=j && i->prev != j; i = i->next, j = j->prev ){
    swap(i->val, j->val);
   }

   };

void  print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
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
    reversed_linked_list(head, tail);

    print_linked_list(head);
    return 0;
}