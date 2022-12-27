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
void insertathead(node *&head, int data)
{   
    node*temp=new node(data);
    node*n=head;
    if(head==NULL){
        head=temp;
        temp->next=temp;
    }
    while(n->next!=head){
        n=n->next;
    }
    n->next=temp;
    temp->next=head;
    head=temp;

}
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
       // node *newnode = new node(data);
      
      insertathead(head,data);

        cin >> data;
    }
    return head;
}

void printdata(node *head)
{
    if (head == NULL)
    {
        return;
    }
node*temp=head;
    while (temp->next != head)
    {
        cout << head->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = takeinput();
   insertathead(head, 78);
    printdata(head);
    return 0;
}