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
node *deletenodeinbst(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        root->left = deletenodeinbst(root->left, data);
    }
    else if (root->data == data)
    {
        if (root->right == NULL && root->left == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {
            node *replace = root->right;
            while (replace->left != NULL)
            {
                replace = replace->left;
            }
            root->data = replace->data;
            root->right = deletenodeinbst(root->right, replace->data);
        }
    }
    else
    {
        root->right = deletenodeinbst(root->right, data);
    }
    return root;
}
void printbst(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printbst(root->left);
    cout << root->data << " ";
    printbst(root->right);
}

int main()
{
    node *root = build();
    deletenodeinbst(root, 5);
    printbst(root);
    return 0;
}