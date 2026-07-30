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

bool is_palidrom(Node* head){
    vector<int> v;
    Node* tmp = head;
    
    while(tmp != NULL){
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    // two pinter
    int left = 0;
    int right = v.size() - 1;

    while(left < right)
    {
        if(v[left] != v[right]){
            return false;
        }
        left ++;
        right--;
    }
    return true;
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
if(is_palidrom(head)){
    cout << "yes";
} 
else{
    cout << "NO";
}

 
//   print_list(head);
    return 0;
}