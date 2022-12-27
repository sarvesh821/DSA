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

node *insertdata(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insertdata(root->left, data);
    }
    else
    {
        root->right = insertdata(root->right, data);
    }
    return root;
}
node *buildtree()
{
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1)
    {

        root = insertdata(root, d);
        cin >> d;
    }
    return root;
}
pair<node*,node*> convertinll(node*root){
    pair<node*,node*>p;
    if(root->right==NULL && root->left==NULL){
        p.first=root;
        p.second=root;
        return p;
    }
    if(root->right==NULL && root->left!=NULL){
         pair<node*,node*> ls=convertinll(root->left);
         ls.second->right=root;
         p.first=ls.first;
         p.second=ls.second;
         return p;

    }
       if(root->right!=NULL && root->left==NULL){
         pair<node*,node*> rs=convertinll(root->right);
         root->right=rs.first;
         p.first=rs.first;
         p.second=rs.second;
         return p;

    }
      pair<node*,node*> ls=convertinll(root->left);
       pair<node*,node*> rs=convertinll(root->right);
       ls.second->right=root;
       root->right=rs.first;
       p.first=ls.first;
       p.second=rs.second;
       return p;
}
void printlevelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";

            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
            q.pop();
        }
    }
}
int main()
{
    node*root=buildtree();
    node*temp=convertinll(root).first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    return 0;
}