#include <iostream>
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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;

}
void printlevelorder(node*root){
queue<node*>q;
q.push(root);
while(!q.empty()){
    node*f=q.front();
    cout<<f->data<<" ";

    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }
    q.pop();
    
}
}
void printkthlevelorder(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
    }
   // cout<<root->data<<" ";
    printkthlevelorder(root->left,k-1);
    printkthlevelorder(root->right,k-1);
    return;

}
void printalllevels(node*root){
int h=height(root);
for(int i=1;i<=h;i++){
      printkthlevelorder(root,i);
}
}
void printpre(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpre(root->left);
    printpre(root->right);
}
void printin(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printin(root->left);
    cout << root->data << " ";
    printin(root->right);
}
void printpos(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printpos(root->left);
    printpos(root->right);
    cout << root->data << " ";
}
int main()
{
    node *root = buildtree();
    int k=height(root);
    //printalllevels(root);
    // printpre(root);
    // cout << endl;
    // printin(root);
    // cout << endl;
    // printpos(root);
    printlevelorder(root);

    return 0;
}