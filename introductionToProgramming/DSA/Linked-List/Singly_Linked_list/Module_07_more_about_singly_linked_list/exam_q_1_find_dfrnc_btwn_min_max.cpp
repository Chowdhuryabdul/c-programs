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

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node (val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_difference(Node* head){
    Node* tmp = head;
    int min = head->val;
    int max = head->val;
    while(tmp != NULL){
        if(tmp->val < min){
            min = tmp->val;
        }
        if(tmp->val > max){
            max = tmp->val;
        }
        tmp = tmp->next;

    }
    int difference = max - min;
    cout << difference << endl; 
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
    print_difference(head);
    return 0;
}