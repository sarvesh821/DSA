#include <iostream>
#include <queue>
#include <string>
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
node *insertdata(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insertdata(root->left, data);
    }
    else
    {
        root->right = insertdata(root->right, data);
    }
    return root;
}
node *buildtree()
{
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {

        root = insertdata(root, d);
        cin >> d;
    }
    return root;
}
void printtree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printtree(root->left);
    cout << root->data << " ";
    printtree(root->right);
}
bool checkbst(node *root, int minv = INT8_MIN, int maxv = INT8_MAX)
{
    cout<<minv<<endl;
    cout<<maxv;
    if (root == NULL)
    {
        return true;
    }

    if (root->data < maxv && root->data > minv && checkbst(root->left, minv, root->data) && checkbst(root->left, root->data, maxv))
    {
        return true;
    }

    return false;
}
void printlevelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
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
            cout << f->data << " ";

            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
            q.pop();
        }
    }
}
int main()
{
    node *root = buildtree();
    // printtree(root);
    // cout << endl;
    // printlevelorder(root);
    cout << checkbst(root);
    return 0;
}