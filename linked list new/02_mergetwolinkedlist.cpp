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
node *takeinput()
{
    int d;
    cin >> d;
    node *head = NULL;
    node *tail = NULL;
    while (d != -1)
    {
        node *newnode = new node(d);
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
        cin >> d;
    }
    return head;
}
node *findmid(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *mergetwolinkedlist(node *a, node *b)
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
        c->next = mergetwolinkedlist(a->next, b);
    }
    else
    {
        c = b;
        c->next = mergetwolinkedlist(a, b->next);
    }
    return c;
}
node *mergesort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *midpoint = findmid(head);
    node *a = head;
    node *b = midpoint->next;
    midpoint->next = NULL;
    a = mergesort(a);
    b = mergesort(b);
    node *temp = mergetwolinkedlist(a, b);
    return temp;
}
bool detectcycle(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void removecycle(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow=head;
        }
    }
    while(slow->next==fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
void print(node *head)
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
    cout << endl;
}
int main()
{
    node *head = takeinput();

    node *newhead = mergesort(head);
    print(newhead);
    cout << detectcycle(head);

    return 0;
}