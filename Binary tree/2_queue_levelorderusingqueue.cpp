#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*root;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;

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
int main()
{
    node*root=buildtree();
    printlevelorder(root);
    return 0;
}