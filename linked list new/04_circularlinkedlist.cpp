#include <bits/stdc++.h>
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
    node *n = new node(data);
    node *temp = head;
    n->next = head;
    if (temp != NULL)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    else
    {
        n->next = n;
    }
    head = n;
}
node *getnode(node *head, int data)
{
    node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }
    if (temp->data == data)
    {
        return temp;
    }
    return NULL;
}
void deletenode(node *&head, int data)
{
    node *del = getnode(head, data);
    if (del == NULL)
    {
        return;
    }
    if (head == del)
    {
        head = head->next;
    }
    node *temp = head;
    while (temp->next != del)
    {
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}
void print(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
    return;
}
int main()
{
    node *head = NULL;
    insertathead(head, 89);
    insertathead(head, 45);
    insertathead(head, 12);
    insertathead(head, 67);
    deletenode(head, 45);
    print(head);

    return 0;
}