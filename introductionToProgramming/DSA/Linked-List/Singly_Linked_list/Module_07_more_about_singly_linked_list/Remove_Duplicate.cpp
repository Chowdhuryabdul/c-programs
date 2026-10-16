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

void remove_duplicate(Node* &head, Node* &tail){
    // stores value 
    unordered_set<int>s;

    // two pointers
    Node* tmp = head;
    // keeps tracks the previous nodes
    Node* tmp_1 = NULL;

    while(tmp != NULL){
        if(s.find(tmp->val) != s.end()){

        //    remove the duplicate
            tmp_1->next = tmp->next;

            // if the duplicate in tail
            if(tmp == tail){
                tail = tmp_1;
            }
            // stor the duplicate after finding
            Node* deletenode = tmp;

            // move forward before deleting 
            tmp = tmp->next;
            delete deletenode;
        }else{
            s.insert(tmp->val);
            tmp_1 = tmp;
            tmp = tmp->next;
        }
    }

}
void print_duplicate(Node* head){
    
    Node* tmp = head;
  
    while(tmp != NULL){

       cout << tmp->val << " ";
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
            insert_at_tail(head, tail,  val);
        }


        
        // cout << search_value;
        remove_duplicate(head, tail);
        print_duplicate(head);
        // print_index_search_element(head2);
    
    return 0;
}