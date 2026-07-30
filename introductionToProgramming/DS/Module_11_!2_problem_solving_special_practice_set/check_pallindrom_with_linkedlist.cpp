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

// insert at tail
void insert_at_tail(Node* &head, Node* &tail, int  val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

  
 };

//  Make copy

 Node* make_copy_list(Node* head){
   
    // making new linked list
    Node* newHead = NULL;
    Node* newTail = NULL;

    Node* tmp = head;
    while(tmp != NULL){
        Node* newNode = new Node(tmp->val);
        if(newHead == NULL){
            newHead = newNode;
            newTail = newNode;
        }else{
            newTail->next = newNode;
            newTail = newNode;
        }
        tmp = tmp->next;
    }
    return newHead;
 }

//  reverse the copying list
void reverse(Node* &head, Node* tmp)
{
    if(head == NULL){
        return;
    }
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL; 
}

// compare between the original and compying
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

    // this line refers that both tmp1 and tmp2 have finished the iteration at the same time.
     return tmp1 == NULL && tmp2 == NULL;
}

// print if needed
void print(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
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
   
    Node* copyHead = make_copy_list(head);
    reverse(copyHead, copyHead);
   
    compare(head, copyHead);
    if(compare(head, copyHead)){
        cout << "YES, palindrom" << endl;
    }
    else{
         cout << "NOT, palindrom" << endl;
    }
    
    return 0;
}

// to make copy
// i need to make insert at tail