#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertattail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}
bool ispalindrome(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->next == NULL)
    {
        return true;
    }
    node *fast = head;
    node *slow = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
    }
    while (slow != fast)
    {
        if (slow->data != fast->data)
        {
            return false;
            break;
        }
        slow = slow->next;
        fast = fast->prev;
    }
    return true;
}
bool checkpalindrome(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *slow = head;
    node *fast = head;
    node *prev;
    node *next;
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
    while (slow!=NULL && fast!=NULL)
    {
        if (slow->data != fast->data)
        {
            return false;
        }
        else
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return true;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
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
    if (checkpalindrome(head))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}