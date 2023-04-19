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
class HBalance
{
public:
    int height;
    bool balance;
};
node *build()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = build();
    root->right = build();
    return root;
}
HBalance isbalanced(node *root)
{
    HBalance h;
    if (root == NULL)
    {
        h.height = 0;
        h.balance = true;
        return h;
    }
    //  HBalance h;
    // if (root == NULL)
    // {
    //     h.height = 0;
    //     h.balance = true;
    //     return h;
    // }
    HBalance left = isbalanced(root->left);
    HBalance right = isbalanced(root->right);
    h.height = max(left.height, right.height) + 1;
    if (abs(left.height - right.height) <= 1 && left.balance && right.balance)
    {
        h.balance = true;
    }
    else
    {
        h.balance = false;
    }
    return h;
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
    node *root = build();
    HBalance ans = isbalanced(root);
    // cout << ans.height << ans.balance;
    if (ans.balance)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}