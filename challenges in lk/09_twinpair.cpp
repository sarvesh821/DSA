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
int findmaxsumpair(node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    int max = INT_MIN;
    int sum;
    node *slow = head;
    node *fast = head;
    node *next;
    node *prev;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    prev = slow;
    slow = slow->next;
    prev->next = NULL;
    while (slow)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }
    fast = head;
    slow = prev;
    while (slow != NULL && fast != NULL)
    {
        sum = slow->data + fast->data;
        if (sum > max)
        {
            max = sum;
        }
        slow = slow->next;
        fast = fast->next;
    }
    return max;
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
node *oddevenlinkedlist(node *head)
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
        if (temp->data % 2 != 0)
        {
            insertathead(c, temp->data);
        }
        else
        {
            insertattail(c, temp->data);
        }
        temp = temp->next;
    }
    return c;
}
node *oddaftereven(node *head)
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
        if (temp->data % 2 != 0)
        {

            insertattail(c, temp->data);
        }
        temp = temp->next;
    }

    while (temp2 != NULL)
    {
        if (temp2->data % 2 == 0)
        {

            insertattail(c, temp2->data);
        }
        temp2 = temp2->next;
    }
    return c;
}
void print(node *head)
{
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
    node *ans = oddaftereven(head);
    print(ans);
    return 0;
}