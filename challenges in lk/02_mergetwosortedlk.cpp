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
// void insertathead(node *&head, int data)
// {
//     if (head == NULL)
//     {
//         head = new node(data);
//         return;
//     }
//     node *temp = new node(data);
//     temp->next = head;
//     head = temp;
// }
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
node *mergelinkedlist(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = mergelinkedlist(a->next, b);
    }
    else
    {
        c = b;
        c->next = mergelinkedlist(a, b->next);
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
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        node *head = NULL;
        node *head2 = NULL;
        int n, ele;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            // int ele;
            cin >> ele;
            insertattail(head, ele);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            // int no;
            cin >> ele;
            insertattail(head2, ele);
        }
        node *ans = mergelinkedlist(head, head2);
        print(ans);
    }
    return 0;
}