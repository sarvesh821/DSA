#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }

        cin >> data;
    }
    return head;
}
int countlen(node*head){
    int count=0;
    if(head==NULL){
        return 0;
    }
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
void deletealt(node *head)
{
    if (head == NULL)
    {
        return;
    }
    int ans=countlen(head);
    if(ans%2==0){
        node* slow=head;
        node* fast=head;
       while(slow!=NULL && slow->next!=NULL){
         fast=fast->next->next;
         slow->next=fast;
         slow=slow->next;
         if(slow->next->next==NULL){
            slow->next=NULL;
         }
       }
    }
    else{
        node* slow=head;
        node* fast=head;
       while(slow->next!=NULL){
         fast=fast->next->next;
         slow->next=fast;
         slow=slow->next;
         
       }
      
    }
  
    // while (slow != NULL && slow->next != NULL)
    // {
    //     if(fast->next && fast->next->next){
    //     fast = fast->next->next;
    //     slow->next = fast;
    //     slow = slow->next;
    //     if (!slow->next)
    //     {
    //         break;
    //     }}else{
    //         fast->next = NULL;
    //     }
    // }
}
void printdata(node *head)
{
    if (head == NULL)
    {
        return;
    }

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = takeinput();
    deletealt(head);
    printdata(head);

    return 0;
}
