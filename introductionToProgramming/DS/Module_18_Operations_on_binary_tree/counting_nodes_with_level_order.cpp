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
    queue<Node*>q;
    if(root != NULL) q.push(root);

    while (!q.empty())
    {
        /* code */
        Node* parent = q.front();
        q.pop();

        int l_val, r_val;
        cin >> l_val >> r_val;

        Node* myLeft;
        Node* myRight;

        if(l_val == -1) myLeft = NULL;
        else myLeft = new Node(l_val);
        if(r_val == -1) myRight = NULL;
        else myRight = new Node(r_val);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);
    }
    return root;
}

int print_level_order(Node* root){
    if(root == NULL){
        cout << "No tree" << endl;
        return -1;
    }
    int cnt = 0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* fetch_front = q.front();
        q.pop();

        // cout << fetch_front->val << " " ;
        // cout << endl;;
        cnt++;

        if(fetch_front->left != NULL) q.push(fetch_front->left);
        if(fetch_front->right != NULL) q.push(fetch_front->right);
    }
    return cnt;
}
int main()
{
    
    Node* root = tree_input();
 int cnt=  print_level_order(root);
 cout <<cnt<< endl;
    return 0;
}