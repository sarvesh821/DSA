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
int sumnodes(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==0 && root->right==0){
    return root->data;
}
int ls=sumnodes(root->left);
int rs=sumnodes(root->right);

int ans=ls+rs;
int as=root->data;
root->data=ans;
return root->data+as;


}
void printlevelorder(node*root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node*f=q.front();
    if(f==NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
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
}

int main(){
    node*root=buildtree();
    sumnodes(root);
    printlevelorder(root);



}