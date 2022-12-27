// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node *buildtree()
// {
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     node *root = new node(data);
//     root->left = buildtree();
//     root->right = buildtree();
//     return root;
// }

// void printtree(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     printtree(root->left);

//     printtree(root->right);
//     cout << root->data << " ";
// }
// int main()
// {
//     node *root = buildtree();
//     printtree(root);
// }
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
int findheight(node*root){
    if(root==NULL){
        return 0;
    }
    int ls=findheight(root->left);
    int rs=findheight(root->right);
    return max(ls,rs)+1;
}
void printkthlevel(node*root,int level){
    if(root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,level-1);
    printkthlevel(root->right,level-1);

}
void printalllevels(node*root){
    int h=findheight(root);
    for(int i=1;i<=h;i++){
        printkthlevel(root,i);
        cout<<endl;
    }
    return;
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
node*insertnode(node*root,int data){
    if(root==NULL){
        return new node(data);
    }
    if(data<root->data){
       root->left= insertnode(root->left,data);
    }
    if(data>root->data){
       root->right= insertnode(root->right,data);
    }
    return root;
}
node*buildtree1(){
    int data;
    cin>>data;
    node*root=NULL;
    while(data!=-1){
        insertnode(root,data);
        cin>>data;
    }
    return root;
}
int main()
{
    node *root = buildtree1();
   printtree(root);
}