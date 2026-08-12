#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_index(Node *&head, Node *&tail, int val, int index)
{

    int sz = size(head);

    Node *newNode = new Node(val);
    if (index == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    if (index == sz)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        return;
    }

    Node *tmp = head;

    for (int i = 0; i < index - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void print_from_left(Node *head)
{
    cout << "L -> ";

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};
void print_from_right(Node *tail)
{

    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {

        int index;
        cin >> index;
        int val;
        cin >> val;

        int sz = size(head);
        if (index < 0 || index > sz)
        {
            cout << "Invalid" << endl;
            continue;
            ;
        }
        insert_at_index(head, tail, val, index);
        print_from_left(head);
        print_from_right(tail);
    }

    return 0;
}