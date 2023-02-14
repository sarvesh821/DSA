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
vector<int> nextgreaternode(node *head)
{
    vector<int> v;
    if (head == NULL || head->next == NULL)
    {
        v.push_back(0);
    }

    int max = 0;
    node *first = head;

    while (first != NULL)

    {
        if (first->next == NULL)
        {
            v.push_back(0);
            break;
        }
        node *last = first->next;
        while (last != NULL)
        {
            if (last->data > first->data)
            {
                max = last->data;
            }
            last = last->next;
        }
        v.push_back(max);
        first = first->next;
    }
    return v;
}
int main()
{
    node *head = takeinput();
    vector<int> ans = nextgreaternode(head);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}