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
bool findnode(node*root,int d){
    if(root==NULL){
        return false;
    }
    if(root->data==d){
        return true;
    }
    if(d<root->data){
     return findnode(root->left, d); 
    }
    else{
      return findnode(root->right,d);
    }
    return false;
}
int main()
{
    node *root = buildtree();
    //printtree(root);
    cout << endl;
   // printlevelorder(root);
  cout<< findnode(root,9);
    return 0;
}