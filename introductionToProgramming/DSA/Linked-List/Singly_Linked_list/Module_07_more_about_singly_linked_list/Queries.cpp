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

// Function for the size
int size(Node* head){
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}

// function for the insert at head
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;}
    newNode->next = head;
    head = newNode;
};

// function for the insert at tail
void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

// function for the delete at head
void delete_at_head(Node* &head){
    Node* delteNode = head;
    head = head->next;
    delete delteNode;
};

// function for the delete at tail
void delete_at_tail(Node* &head, Node* &tail){
    if(head == tail)
{
    delete head;
    head = NULL;
    tail = NULL;
    return;
}
    Node* tmp = head;
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tail = tmp;
    delete deleteNode;
};

// function for the delete at any position
void delete_at_any_position(Node* head, int index){
    Node* tmp = head;
    for (int i = 0; i < index-1; i++)
    {
        /* code */
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    
};

// print the linked next
void print(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};

int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;
    int t;
    cin >> t;
    while(t--){
        int x;
        int val;
        cin >> x >> val;
        // cout << x << " " << v << endl;
        //x is 0 - insert at head
        
        if(x == 0){
            insert_at_head(head, tail, val);
            print(head);
        }
        //x is 1 - insert at tail
        else if(x == 1){
            insert_at_tail(head, tail, val);
            print(head);
        }
        //x is 2 - delete 
        else if(x == 2){
            int len = size( head);
            if(val < 0 || val >= len){
                print(head);
            }

            // delete head
           else  if(val == 0){
                delete_at_head(head);
                print(head);
            }
            // Delete at tail
            else if(val == len - 1 ){
                delete_at_tail(head, tail);
                print(head);
            }

            // delete at any poisiton
            else{
                delete_at_any_position(head, val);
                print(head);
            }
        }

        
        
    }
    return 0;
}