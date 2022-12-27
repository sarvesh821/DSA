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
node* deletenode(node*root,int d){
    if(root==NULL){
        return NULL;
    }
    else if(d<root->data){
        root->left=deletenode(root->left,d);
        return root;
    }

    else if(d==root->data){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL && root->left!=NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        else{
            node*replace=root->right;
            while(replace->left!=NULL){
                replace=replace->left;
                
            }
            root->data=replace->data;
            root->left=deletenode(root,replace->data);
        }
    }
    else{
         root->right=deletenode(root->right,d);
        return root;
    }
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
    cout << endl;
    deletenode(root,5);
    printlevelorder(root);
    return 0;
}