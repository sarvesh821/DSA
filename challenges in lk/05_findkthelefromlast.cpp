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
int findkthnodefromlast(node *head, int key)
{

    node *slow = head;
    node *fast = head;
    while (key != 0)
    {
        if (slow == NULL)
        {
            return -1;
        }
        else
        {
            slow = slow->next;
        }

        key--;
    }
    while (slow != NULL)
    {
        slow = slow->next;

        fast = fast->next;
    }

    return fast->data;
}
int main()
{
    node *head = takeinput();
    int key;
    cin >> key;
    cout << findkthnodefromlast(head, key);
    return 0;
}