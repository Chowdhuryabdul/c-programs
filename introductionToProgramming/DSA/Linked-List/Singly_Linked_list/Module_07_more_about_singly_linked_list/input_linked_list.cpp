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

    Node* newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    // Node* tmp = head;
    // while(tmp->next != NULL){
    //     tmp = tmp->next;
    // }
    tail->next = newNode;
    tail = newNode;

};

  void  print_linked_list(Node * head){ 
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    } 
  };

int main()
{
// as we know linked_list needs minimum head and tail
// why taking head? this is because we can not access the linked list without head  
Node* head = NULL;

// why tail? as whatever input comes it will be insert at tail and also by tail pointer we can insert node in the tail poinnter in optimized way
  Node* tail = NULL;

//   will take input thorugh loop- we wil run infinite loop. 
int val;
// this is the way we can run infinite loop or we can write true
// Both are correct
// while(1)
while(true) /* its complexity is O(N) */
{
 cin >> val;
 if(val == -1){
    break;
 }else{/* if the value is not -1 than we will insert at tail */

     insert_at_tail(head, tail, val); /* here the val which is taken as input just now - its complexity is O(1). how it O(1)? as it is function and compleixit of the function is O(1). if i need to do tail in the aother loop than it's compleixity will be O(N). since we have done it optimised way, so now its complexity is O(1) */
 } 

 
}
    print_linked_list(head);


    return 0;
}