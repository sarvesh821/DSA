#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertattail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *temp = head;
    node *n = new node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = NULL;
}
void insertathead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
node *evenafterodd(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *c = NULL;
    node *temp = head;
    node *temp2 = head;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            insertattail(c, temp->data);
        }
        else
        {
            insertathead(c, temp->data);
        }
        temp = temp->next;
    }

    return c;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    int n, ele;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        insertattail(head, ele);
    }
    node *ans = evenafterodd(head);
    print(ans);
    return 0;
}