#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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
            newnode->prev = tail;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = new node(data);
    temp->next = head;
    // temp->prev=head->prev;

    head->prev = temp;
    head = temp;
}
void printlk(node *head)
{
    if (head == NULL)
    {
        return;
    }
    while (head->next != NULL)
    {
        // cout<<head->data<<" ";
        head = head->next;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}
int main()
{
    node *head = takeinput();
    insertathead(head, 78);
    printlk(head);
    return 0;
}