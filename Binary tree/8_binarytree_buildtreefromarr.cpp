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
node* buildtreefromarray(int *a,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=buildtreefromarray(a,s,mid-1);
    root->right=buildtreefromarray(a,mid+1,e);
    return root;
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
int main()
{
    int a[]={1,2,3,4,5,6,7};
   int n=7;
node*root1=buildtreefromarray(a,0,n-1);
printlevelorder(root1);
    return 0;
}