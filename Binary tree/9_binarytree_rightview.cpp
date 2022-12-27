#include<iostream>
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

void printrightview(node*root,int level,int &maxlevel){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel=level;
    }
   printrightview(root->right, level+1, maxlevel); 
    printrightview(root->left, level+1, maxlevel); 
}
int main()
{
    node*root=buildtree();
    int maxlevel=-1;
    int level=0;
     printrightview(root, level, maxlevel); 

    return 0;
}
