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

Node* input_binary(){
    int val;
    cin >> val;
    Node* root;
    queue<Node*>q;
    if(val == -1) root = NULL;
    else root = new Node(val);

    if(root) q.push(root);
    while (!q.empty())
    {
        /* code */
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

        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
    return root;
}

int max_height(Node* root){

    // this base case is for if tree is empty
    if(root == NULL){
        return 0;
    }

    // this is for the to find the leap node
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int left_height = max_height(root->left);
    int right_height = max_height(root->right);
    // i nned to find the max the two and plus 1 will it for itself
   return max(left_height, right_height) + 1;
}
int main()
{
    Node* root = input_binary();
    cout << max_height(root) << endl;
    return 0;
}