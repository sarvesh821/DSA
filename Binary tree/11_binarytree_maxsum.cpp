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
class Pair{
    public:
  int branchsum;
  int maxsum;
  Pair(){
    branchsum=0;
    maxsum=0;

  }

};
Pair maxsumpath(node*root){
    Pair p;
    if(root==NULL){
        return p;
    }
    Pair left= maxsumpath(root->left);
    Pair right=maxsumpath(root->right);
    int op1=root->data;
    int op2=left.branchsum+root->data;
    int op3=right.branchsum+root->data;
    int op4=left.branchsum+right.branchsum+root->data;
    int current_max_throgh_root=max(op1,max(op2,max(op3,op4)));
    p.branchsum=max(left.branchsum,max(right.branchsum,0))+root->data;
    p.maxsum=max(left.maxsum,max(right.maxsum,current_max_throgh_root));
    return p;

}
void printtree(node *root)
{
    queue<node *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *fr = q.front();
        if (fr == NULL)
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
            cout << fr->data << " ";
            if (fr->left)
            {
                q.push(fr->left);
            }
            if (fr->right)
            {
                q.push(fr->right);
            }
            q.pop();
        }
    }
}
int main()
{
    node*root=buildtree();
    cout<<maxsumpath(root).maxsum<<endl;
    return 0;
}