#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};
node *buildtree()
{
    int data, child;
    cin >> data;
    node *root = new node(data);
    cin >> child;
    if (child == 0)
    {
        return NULL;
    }

    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    node *root = buildtree();
    print(root);
    return 0;
}