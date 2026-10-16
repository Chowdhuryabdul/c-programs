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

/* void delete_at_head(Node* &head, Node* & tail){
   Node* deleteHead = head;
   head = head->next;
   delete deleteHead;
   if(head == NULL){
    tail = NULL;
   }
   head->prev = NULL;
     

}; */

void delete_at_tail(Node* &head, Node* &tail){
   Node* deleteNode = tail;
//    Node* tmp = head;
//    while(tmp->next != NULL){
//     tmp = tmp->next;
// }
tail = tail->prev;
delete deleteNode;
// in case of corner case of having a single node, we have to bring the head at NULL as well-
if(tail == NULL){
    head = NULL;
    return;
}

tail->next = NULL;




};

// void delete_at_any_pos(Node* &head, Node* &tail, int index){
    
  
//     Node* tmp = head;
//     for (int i = 1; i < index; i++)
//     {
//         tmp = tmp->next;
        
//     }
//     // cout << tmp->val<< endl;;
//     Node* deleteNode = tmp->next;
//    tmp->next = tmp->next->next;
//    tmp->next->prev = tmp;
//    delete deleteNode; 
   
// };


void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout <<tmp->val << endl;
        tmp = tmp->next;
    }
};

int main()
{
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* tail = new Node(400);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    // delete_at_head(head, tail);
    delete_at_tail(head, tail);
    // delete_at_any_pos(head, tail, 2);
    print_linked_list(head);
    
    return 0;
}