#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node*insertnodes(node*root,int data){
  if(root==NULL){
    return new node(data);
  }
  if(data<=root->data){
    root->left=insertnodes(root,data);

  }
  else{
    root->right=insertnodes(root,data);
  }
  return root;
}
node*buildtree(){
    int data;
    cin>>data;
    node*root=NULL;
    while(data!=-1){
   insertnodes(root,data);
    }
    return root;
}
node* deleteinbst(node*root,int data){
    if(root==NULL){
        return;
    }
    if(data<root->data){
        deleteinbst(root->left,data);
    }
    if(data==root->data){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        node*replace=root->right;
        while(root->left!=NULL){
            replace=replace->left;
        }
        root->data=replace->data;
        root->right=deleteinbst(root->right,replace->data);
    }
    if(data>root->data){
        deleteinbst(root->right,data);
    }
}
bool isbst(node*root,int min=INT_MIN,int max=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data>min && root->data<max && isbst(root->left,min,root->data) && isbst(root->right,root->data,max)){
return true;
    }
    return false;

}
bool ispresent(node*root,int key){
    if(root==NULL){
        return false;
    }
    if(key<root->data){
       return ispresent(root->left,key);
    }
     if(key==root->data){
        return true;
    }
    if(key>root->data){
       return ispresent(root->right,key);
    }
   
}
void printtree(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printtree(root->left);
    printtree(root->right);

}
int main(){
node*root=buildtree();
}
