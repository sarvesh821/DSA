#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
node(int data){
    this->data=data;
    this->next=NULL;
}
};
node*takeinput(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1){
        node*newnode=new node(data);
        if(head==NULL){
        head=newnode;
        tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
node* findmid(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    //cout<<slow->data;
    return slow;
}
node*merge(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node*c;
    if(a->data<b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
node*mergesort(node*head){
    // cout<<"hello";
    if(head==NULL || head->next==NULL){
        return head;
    }
    // cout<<"hello";
    node*mid=findmid(head);
  
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    a=mergesort(a);
    b=mergesort(b);
   node* ans= merge(a,b);
return ans;
}
void print(node*head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
node*head=takeinput();
print(mergesort(head));

}



// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// node *takeinput()
// {
//     int data;
//     cin >> data;
//     node *head = NULL;
//     node *tail = NULL;
//     while (data != -1)
//     {
//         node *newnode = new node(data);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = tail->next;
//         }
//         cin>>data;
  
//     }
//           return head;
// }
// node* midpoint(node*head){
//     if(head==NULL ||head->next==NULL){
//         return head;
//     }
//     node*slow=head;
//     node*fast=head->next;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//    // cout<<slow->data<<endl;
//     return slow;
// }
// node* mergetwosortedlk(node*a,node*b){
//     if(a==NULL){
//         return b;
//     }
//     if(b==NULL){
//         return a;
//     }
// node*c;
// if(a->data<b->data){
//     c=a;
//     c->next=mergetwosortedlk(a->next,b);
// }
// else{
//     c=b;
//     c->next=mergetwosortedlk(a,b->next);
// }
// return c;
// }
// node* mergesort(node*head){
//       //cout<<head->data;
//     if(head==NULL || head->next==NULL){
      
//         return head;
//     }
//     node*temp=midpoint(head);
//     node*a=head;
//     node*b=temp->next;
//     temp->next=NULL;
//    a= mergesort(a);
//   b=  mergesort(b);

//     node*ans= mergetwosortedlk(a,b);
//     return ans;
// }
// void printlk(node *head)
// {
//        if (head == NULL)
//     {
//         return;
//     }
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// int main()
// {
// node*head=takeinput();
// //printlk(a);
// //node*b=takeinput();
// //mergetwosortedlk(a,b);
// printlk(mergesort(head));
//     return 0;
// }