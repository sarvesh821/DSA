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
node *deletenode(node *root, int d)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (d < root->data)
    {
        root->left = deletenode(root->left, d);
    }
    else if (root->data == d)
    {
        if (root->left == NULL && root->right == NULL)
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
        else if (root->right != NULL && root->left == NULL)
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
            root->right = deletenode(root->right, replace->data);
        }
    }
    else
    {
        root->right = deletenode(root->right, d);
    }
    return root;
}
// node *deletenodeinbst(node *root, int data)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     else if (data < root->data)
//     {
//         root->left = deletenodeinbst(root->left, data);
//     }
//     else if (root->data == data)
//     {
//         if (root->right == NULL && root->left == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         else if (root->left != NULL && root->right == NULL)
//         {
//             node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         else if (root->left == NULL && root->right != NULL)
//         {
//             node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         else
//         {
//             node *replace = root->right;
//             while (replace->left != NULL)
//             {
//                 replace = replace->left;
//             }
//             root->data = replace->data;
//             root->right = deletenodeinbst(root->right, replace->data);
//         }
//     }
//     else
//     {
//         root->right = deletenodeinbst(root->right, data);
//     }
//     return root;
// }
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        node *root = NULL;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            root = insertnode(root, d);
        }
        int k;
        cin >> k;
        // node *ans;
        for (int i = 0; i < k; i++)
        {
            int key;
            cin >> key;
            root = deletenode(root, key);
        }
        print(root);
    }
    return 0;
}