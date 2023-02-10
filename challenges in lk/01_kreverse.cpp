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
int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
// node *reverselk(node *head, int k)
// {
//     node *curr = head;
//     node *prev = NULL;
//     node *next;

//     while (k != 0)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         k--;
//     }

//     head->next = next;
//     return prev;
// }
node *reverselinkedlist(node *head, int k)
{
    node *dumy = new node(0);
    dumy->next = head;
    node *curr = head;
    node *prev = dumy;
    node *next;
    int len = length(head);
    while (len >= k)
    {
        while (k != 0)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            k--;
        }
        prev = curr;
        len -= k;
    }
    return dumy->next;
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
    node *ans = reverselinkedlist(head, 3);
    print(ans);
    return 0;
}