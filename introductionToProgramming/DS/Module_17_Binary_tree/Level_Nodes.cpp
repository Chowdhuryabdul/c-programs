#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* input_tre()
{
    int val;
    cin >> val;

    if(val == -1)
        return NULL;

    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* left_node;
        Node* right_node;

        if(l == -1)
            left_node = NULL;
        else
            left_node = new Node(l);

        if(r == -1)
            right_node = NULL;
        else
            right_node = new Node(r);

        p->left = left_node;
        p->right = right_node;

        if(left_node != NULL)
            q.push(left_node);

        if(right_node != NULL)
            q.push(right_node);
    }

    return root;
}

int sum = 0;

void sum_of_non_leaf(Node* root)
{
    if(root == NULL)
        return;

    // Add only non-leaf nodes
    if(root->left != NULL || root->right != NULL)
    {
        sum += root->val;
    }

    sum_of_non_leaf(root->left);
    sum_of_non_leaf(root->right);
}

int main()
{
    Node* root = input_tre();

    sum_of_non_leaf(root);

    cout << sum << endl;

    return 0;
}