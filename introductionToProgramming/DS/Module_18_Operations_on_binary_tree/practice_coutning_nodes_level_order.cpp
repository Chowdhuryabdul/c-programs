#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* tree_input(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        int l_val, r_val;
        cin >> l_val >> r_val;
        Node* myLeft;
        Node* myRight;

        if(l_val == -1) myLeft = NULL;
        else myLeft = new Node(l_val);

        if(r_val == -1) myRight = NULL;
        else myRight = new Node(r_val);

        front->left = myLeft;
        front->right = myRight;

        if(myLeft) q.push(front->left);
        if(myRight) q.push(front->right);
    }
    return root;
}

void print_level_order(Node* root){
    queue <Node*> q;
    if(root == NULL){
        cout << "No Tree " << endl;
        return;
    } 
    q.push(root);
    while(!q.empty()){
      Node* front = q.front();
        q.pop();

        cout << front->val << endl;

        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
};

/* int Node_count(Node * root){
    queue<Node*> q;
    q.push(root);
    int cnt = 0;
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cnt ++;

        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
    return cnt;
} */

int Node_count(Node * root){
    
    if(root == NULL){
        return 0;
    };
   int left_cnt = Node_count(root->left);
    int right_cnt = Node_count(root->right);

    return left_cnt + right_cnt + 1;
}
int main()
{
    Node* root = tree_input();
    print_level_order(root);
int cnt = Node_count(root);
cout << "Total Node:" << cnt << endl;
    return 0;
}