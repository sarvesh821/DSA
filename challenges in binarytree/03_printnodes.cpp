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
node *insertnode(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insertnode(root->left, data);
    }
    else
    {
        root->right = insertnode(root->right, data);
    }
    return root;
}
vector<int> v;
void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    // cout << root->data << " ";
    print(root->left);
    print(root->right);
    return;
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
        print(root);
        int k1, k2;
        cin >> k1 >> k2;

        //   vector<int> ans = print(root);
        cout << "# Preorder : ";
        for (int i = 0; i < v.size(); i++)
        {

            cout << v[i] << " ";
        }
        cout << endl;
        sort(v.begin(), v.end());
        cout << "# Nodes within range are : ";
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= k1 && v[i] <= k2)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}