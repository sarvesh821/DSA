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
void insertathead(node*&head,int data){
    if(head==NULL){
        return;
    }
    node*n=new node(data);
    n->next=head;
    head=n;
}
void insertattail(node*&head,int data){
    if(head==NULL){
        return;
    }
    node*temp=head;
    node*newnode=new node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}
void insertatmiddle(node*&head,int pos,int data){
    if(head==NULL){
        return;
    }
    node*temp=head;
    node*newnode=new node(data);
    for(int i=1;i<pos-1;i++){
          temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void deleteathead(node*&head){
    if(head==NULL){
        return;
    }
    node*key=head;
    head=head->next;
    delete key;

}
int count(node*head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
void deleteatmid(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head;
    int mid=count(head)/2;
   while(mid-->1){
    temp=temp->next;

   }
   temp->next=temp->next->next;

}
void deleteattail(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
int findmid(node*head){
    if(head==NULL){
        return 0;
    }
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}
void print(node*head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
node*head=takeinput();
//insertatmiddle(head,3,34);
//deleteatmid(head);
cout<<findmid(head)<<endl;
print(head);
}