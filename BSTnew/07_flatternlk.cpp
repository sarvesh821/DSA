#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class linkedlist
{
public:
    node *head;
    node *tail;
};
node *insertnode(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }
    if (d < root->data)
    {
        root->left = insertnode(root->left, d);
    }
    else
    {
        root->right = insertnode(root->right, d);
    }
    return root;
}
node *build()
{
    int data;
    cin >> data;
    node *root = NULL;
    while (data != -1)
    {
        root = insertnode(root, data);
        cin >> data;
    }
    return root;
}
linkedlist flattern(node *root)
{
    linkedlist l;
    if (root == NULL)
    {
        l.head = l.tail = NULL;
        return l;
    }
    if (root->left == NULL && root->right == NULL)
    {
        l.head = l.tail = root;
        return l;
    }
    if (root->left != NULL && root->right == NULL)
    {
        linkedlist leftflat = flattern(root->left);
        leftflat.tail->right = root;
        l.head = leftflat.head;
        l.tail = root;
        return l;
    }
    if (root->right != NULL && root->left == NULL)
    {
        linkedlist rightflat = flattern(root->right);
        root->right = rightflat.head;
        l.head = root;
        l.tail = rightflat.tail;
        return l;
    }

    linkedlist rightf = flattern(root->right);
    linkedlist leftf = flattern(root->left);
    leftf.tail->right = root;
    root->right = rightf.head;
    l.head = leftf.head;
    l.tail = rightf.tail;
    return l;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->right;
    }
}
int main()
{
    node *root = build();
    linkedlist ans = flattern(root);
    print(ans.head);

    return 0;
}