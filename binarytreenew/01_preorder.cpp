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
node *buildtree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void print_preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}
void print_inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;
}
void kthlevelnodes(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
    }
    kthlevelnodes(root->left, k - 1);
    kthlevelnodes(root->right, k - 1);
    return;
}
void printlevelorder(node *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        kthlevelnodes(root, i);
        cout << endl;
    }
}
void print_postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_postorder(root->left);
    print_postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    node *root = buildtree();
    cout << "preorder -> ";
    print_preorder(root);
    cout << endl;
    cout << "inorder -> ";
    print_inorder(root);
    cout << endl;
    cout << "postorder -> ";
    print_postorder(root);
    cout << endl;
    printlevelorder(root);
    return 0;
}