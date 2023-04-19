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
node *createbst_preorder(int *preorder, int *inorder, int s, int e)
{
    static int i = 0;
    if (s > e)
    {
        return NULL;
    }
    node *root = new node(preorder[i]);
    int index = -1;
    for (int j = s; j <= e; j++)
    {
        if (preorder[i] == inorder[j])
        {
            index = j;
            break;
        }
    }
    i++;
    root->left = createbst_preorder(preorder, inorder, s, index - 1);
    root->right = createbst_preorder(preorder, inorder, index + 1, e);
    return root;
}
void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
int main()
{
    int n;
    cin >> n;
    int preorder[1000];
    int inorder[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> preorder[i];
    }
    for (int i = 0; i < n; i++)
    {
        inorder[i] = preorder[i];
    }
    sort(inorder, inorder + n);

    node *root = createbst_preorder(preorder, inorder, 0, n - 1);
    print(root);

    return 0;
}