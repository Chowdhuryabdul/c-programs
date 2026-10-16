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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node (val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void delete_at_tail(Node* &head, Node* &tail, int index){
    Node* tmp = head;
    for (int i = 1; i < index; i++)
    {
        /* code */
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    // bring the NULL to the next after deleting the one
    tmp->next = tmp->next->next;
    delete deleteNode;

    // bring the tail to tmp
    tail = tmp;

    
    };
void print_existing_linked_list(Node* head){
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
    cout << "value of tail before delete: " << tail->val<< endl;
    delete_at_tail(head, tail, 5);
    print_existing_linked_list(head);
    cout << "value of tail after delete: " << tail->val<< endl;
    return 0;
}