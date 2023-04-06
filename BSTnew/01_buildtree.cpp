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
void printtree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printtree(root->left);
    cout << root->data << ",";

    printtree(root->right);
}
int main()
{
    node *root = build();
    printtree(root);
    return 0;
}