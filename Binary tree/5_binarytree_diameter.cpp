#include<iostream>
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
int findheight(node*root){
    if(root==NULL){
        return 0;
    }
    int ls=findheight(root->left);
    int rs=findheight(root->right);
    return max(ls,rs)+1;
}
int finddiameter(node*root){
    if(root==NULL){
        return 0;
    }
    int ls=findheight(root->left);
    int rs=findheight(root->right);
    int opt1=ls+rs;
    int opt2=finddiameter(root->left);
    int opt3=finddiameter(root->right);
    return max(opt1,max(opt2,opt3));
}
int main()
{
    node*root=buildtree();
   cout<< finddiameter(root)<<endl;
    return 0;
}