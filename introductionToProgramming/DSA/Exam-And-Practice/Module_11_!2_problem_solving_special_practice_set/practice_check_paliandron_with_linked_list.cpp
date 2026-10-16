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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

Node* make_copy_list(Node* &head){
    Node* newHead = NULL;
    Node* newTail = NULL;

    Node* tmp = head;
    while(tmp != NULL){
        Node* newNode = new Node(tmp->val);
        if(newHead == NULL){
            newHead = newNode;
            newTail = newNode;
            // return;
        } else{

            newTail->next = newNode;
            newTail = newNode;
        }
        tmp = tmp->next;
    }
    return newHead;
};

void reverse_copy_list(Node* &newHead, Node* tmp){
    if(tmp->next == NULL){
        newHead = tmp;
        return;
    }
    reverse_copy_list(newHead, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}
bool compare(Node* head1, Node* head2){
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    while(tmp1 != NULL && tmp2 != NULL){

        if(tmp1->val != tmp2->val){
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}
 void print_list(Node* head){
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
  int val;
  while(1){
    cin >> val;
    if(val == -1){
        break;
    }
    insert_at_tail(head, tail, val);
  }
 Node* newHead =  make_copy_list(head);
 reverse_copy_list(newHead, newHead);
 compare(head, newHead);

//   print_list(head);
  if(compare(head, newHead)){
    cout << "It is paliandrom" << endl;
  }else{
    cout << "It is not paliandrom" << endl;
  }
    return 0;
}