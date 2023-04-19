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
// node *insertnode(node *root, int d)
// {
//     if (root == NULL)
//     {
//         return new node(d);
//     }
//     if (d < root->data)
//     {
//         root->left = insertnode(root->left, d);
//     }
//     else
//     {
//         root->right = insertnode(root->right, d);
//     }
//     return root;
// }

node *buildtree(int arr[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(arr[mid]);
    root->left = buildtree(arr, s, mid - 1);
    root->right = buildtree(arr, mid + 1, e);
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        node *root = buildtree(arr, 0, n - 1);

        print(root);
    }

    return 0;
}