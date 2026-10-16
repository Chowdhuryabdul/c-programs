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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node (val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_index_search_element(Node* head, int search_value){
    Node* tmp = head;
    // int flag = 0;
    int index = 0;
    while(tmp != NULL){
       
        if(tmp->val == search_value){
            cout << index << endl;
           return;
        }
        
        index++;
        tmp = tmp->next;

    }
    cout << -1 << endl;
};

int main()
{   
    
    int t;
    cin >> t;
    while(t--){

        Node* head = NULL;
        Node* tail = NULL;
        
        int val;
        while(1){
            cin >> val;
            if(val == -1){
                break;
            }
            insert_at_tail(head, tail,  val);
        }
        int search_value;
        cin >> search_value;
        // cout << search_value;
        print_index_search_element(head, search_value);
    }
    return 0;
}