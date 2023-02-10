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
void appendknodes(node *&head, int key)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    if (key == 0)
    {
        return;
    }
    node *slow = head;
    node *fast = head;
    while (key != 0)
    {
        slow = slow->next;
        key--;
    }
    while (slow->next != NULL)
    {
        slow = slow->next;

        fast = fast->next;
    }
    slow->next = head;
    head = fast->next;
    fast->next = NULL;
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
    int key;
    cin >> key;
    appendknodes(head, key);
    print(head);

    return 0;
}