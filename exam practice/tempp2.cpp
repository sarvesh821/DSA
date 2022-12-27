// #include<bits/stdc++.h>
// using namespace std;
// int findreversals(string s){
//     stack<char>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//     for(int i=0;i<s.length();i++){
//         if(s[i]==']' && !s1.empty()){
//             if(s1.top()=='['){
//                 s1.pop();
//             }
//             else{
//                 s1.push(s[i]);
//             }
//         }
//         else{
//             s1.push(s[i]);
//         }
//     }
//     int rl=s1.size();
//     int n=0;
//     while(!s1.empty() && s1.top()=='['){
//         s1.pop();
//         n++;
//     }
//     return (rl/2+n%2);
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//       cout<<findreversals(s)<<endl;
//     }

// }
#include<iostream>
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
node*insertnode(node*root,int data){
    if(root==NULL){
        return new node(data);

    }
    if(data<root->data){
        root->left=insertnode(root,data);
    }
    else{
        root->right=insertnode(root,data);
    }
    return root;
}
node*buildbst(){
    int data;
    cin>>data;
    node*root=NULL;
    while(data!=-1){
        insertnode(root,data);
        cin>>data;
    }
    return root;
}
node*buildtree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node*root=new node(data);
    root->left=buildtree();
    root->right=buildtree();
    return root;

}
void print(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node*root=buildtree();
    print(root);
}