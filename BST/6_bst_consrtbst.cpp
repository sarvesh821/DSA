#include<iostream>
#include<queue>
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
node*buildtree(int arr[],int n){
 node *root = NULL;
    for(int i=0;i<n;i++){
         root = insertdata(root, arr[i]);
    }
    return root;
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
    int arr[100]={5,3,1,7,6,8};
    int n=6;
node*root=buildtree(arr,6);
 printlevelorder(root);
    return 0;
}