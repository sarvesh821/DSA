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
node *insertnode(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }
    if (d <= root->data)
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
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {
        root = insertnode(root, d);
        cin >> d;
    }
    return root;
}
bool searchnode(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (data < root->data)
    {
        return searchnode(root->left, data);
    }
    else
    {
        return searchnode(root->right, data);
    }
}
int main()
{
    node *root = build();
    int data;
    cin >> data;
    if (searchnode(root, data))
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }
    return 0;
}