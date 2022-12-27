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

int main()
{
    return 0;
}