#include <iostream>
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
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void printtree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printtree(root->left);

    printtree(root->right);
    cout << root->data << " ";
}
// int findheight(node*root){
//     if(root==NULL){
//         return 0;
//     }
//     int ls=findheight(root->left);
//     int rs=findheight(root->right);
//     return max(ls,rs)+1;
// }
// void printkthlevel(node*root,int level){
//     if(root==NULL){
//         return;
//     }
//     if(level==1){
//         cout<<root->data<<" ";
//         return;

//     }
//     printkthlevel(root->left,level-1);
//     printkthlevel(root->right,level-1);
// }
// void printalllevels(node*root){
//     int h=findheight(root);
//     for(int i=1;i<=h;i++){
//         printkthlevel(root,i);
//         cout<<endl;
//     }
//     return;
// }
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}
void printkthlevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}
void printalllevels(node*root){
    int h=height(root);
    for(int i=1;i<=h;i++){
        printkthlevel(root,i);
        cout<<endl;
    }
    return;
}
int findsum(node*root){
    if(root==NULL){
        return 0;
    }
    return root->data+findsum(root->left)+findsum(root->right);
}
int countnodes(node*root){
    if(root==NULL){
        return 0;
    }
    return 1+countnodes(root->left)+countnodes(root->right);
}
int main()
{
    node *root = buildtree();
   // printtree(root);
   //printalllevels(root);
cout<<findsum(root);
cout<<endl;
cout<<countnodes(root);
}