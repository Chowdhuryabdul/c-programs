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

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

};
    
void delete_at_tail(Node* &head, Node* &tail, int index){
    Node* deletetail = tail;
    Node* tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    tmp = tail;
    delete deletetail;


};
void  print_linked_list(Node* &head){
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
    while(true){
        cin >> val;
        if (val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_at_tail(head, tail, 5);
    print_linked_list(head);
    return 0;
}