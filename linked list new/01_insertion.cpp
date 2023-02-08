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
int length(node *head)
{
    int count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
void insertionathead(node *&head, int data)
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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *n = new node(data);
    temp->next = n;
    n->next = NULL;
}
void insertionatmiddle(node *&head, int data, int position)
{
    if (head == NULL || position == 0)
    {
        insertionathead(head, data);
    }
    if (position > length(head))
    {
        insertattail(head, data);
    }
    node *temp = head;
    // while (position != 0)
    // {
    //     temp = temp->next;
    //     position--;
    // }
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    node *n = new node(data);
    n->next = temp->next;
    temp->next = n;
}
void deleteathead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}
void deleteattail(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *front = head->next;
    node *back = head;
    while (front->next != NULL)
    {
        front = front->next;
        back = back->next;
    }
    back->next = front->next;
    delete front;
}
void deleteatmiddle(node *head, int position)
{
    if (head == NULL || position == 0)
    {
        deleteathead(head);
    }
    if (position > length(head))
    {
        deleteattail(head);
    }
    else
    {
        node *front = head->next;
        node *back = head;
        for (int i = 0; i < position - 1; i++)
        {
            front = front->next;
            back = back->next;
        }
        back->next = front->next;
        delete front;
    }
}
int searchele(node *head, int key)
{
    node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}
bool recursivesearch(node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }
    else if (head->data == key)
    {
        return true;
    }
    else
    {
        return recursivesearch(head->next, key);
    }
}
node *takeinput()
{
    int d;
    cin >> d;
    node *head = NULL;
    while (d != -1)
    {
        insertionathead(head, d);
        cin >> d;
    }
    return head;
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

// ostream &operator<<(ostream &os, node *head)
// {
//     print(head);
//     return os;
// }
// istream &operator>>(istream &is, node *head)
// {
//     head = takeinput();
//     return is;
// }
void reverselinkedlist(node *&head)
{
    node *c = head;
    node *p = NULL;
    node *n;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
}
node *recreverse(node *&head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    node *shead = recreverse(head->next);
    node *temp = head->next;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    temp->next = head;
    head->next = NULL;

    return shead;
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
node *findkthnodefromend(node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head;
    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
int main()
{
    node *head = takeinput();
    print(head);
    // cin >> head;
    //  cout << head;
    cout << findmid(head)->data;
    cout << endl;
    cout << findkthnodefromend(head, 3)->data;
    // reverselinkedlist(head);
    // cout << head;
    // head = recreverse(head);
    // cout << head;
    // print(head);
    // insertionathead(head, 12);
    // insertionathead(head, 13);
    // insertionathead(head, 14);
    // insertionathead(head, 15);
    // print(head);
    // insertattail(head, 78);
    // print(head);
    // insertionatmiddle(head, 90, 1);
    // print(head);
    // deleteattail(head);
    // print(head);
    // deleteatmiddle(head, 3);
    // print(head);
    // cout << searchele(head, 12);
    // cout << endl;
    // cout << recursivesearch(head, 90);

    return 0;
}