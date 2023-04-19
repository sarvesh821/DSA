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
node *insertinbst(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }
    if (d < root->data)
    {
        root->left = insertinbst(root->left, d);
    }
    else
    {
        root->right = insertinbst(root->right, d);
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
        root = insertinbst(root, d);
        cin >> d;
    }
    return root;
}
bool isbst(node *root, int minval = INT_MIN, int maxval = INT_MAX)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= minval && root->data <= maxval && isbst(root->left, minval, root->data) && isbst(root->right, root->data, maxval))
    {

        return true;
    }
    return false;
}
int main()
{
    node *root = build();
    if (isbst(root))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}