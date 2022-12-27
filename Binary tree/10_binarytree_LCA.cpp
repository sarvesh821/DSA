#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
node *findlca(node *root, int a, int b)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == a || root->data == b)
    {
        return root;
    }
    node *leftans = findlca(root->left, a, b);
    node *rightans = findlca(root->right, a, b);
    if (leftans != NULL && rightans != NULL)
    {
        return root;
    }
    if (leftans != NULL)
    {
        return leftans;
    }
    return rightans;
}
void printtree(node *root)
{
    queue<node *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *fr = q.front();
        if (fr == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << fr->data << " ";
            if (fr->left)
            {
                q.push(fr->left);
            }
            if (fr->right)
            {
                q.push(fr->right);
            }
            q.pop();
        }
    }
}
int main()
{
    node *root = buildtree();
    printtree(root);
    cout << findlca(root, 2, 3)->data;
    return 0;
}