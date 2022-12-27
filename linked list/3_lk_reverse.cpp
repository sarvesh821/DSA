#include <iostream>
using namespace std;
class NODE
{
public:
    int data;
    NODE *next;
    NODE(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
NODE *takeinput()
{
    int data;
    cin >> data;
    NODE *head = NULL;
    NODE *tail = NULL;

    while (data != -1)
    {
        NODE *newnode = new NODE(data);
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

        cin >> data;
    }
    return head;
}
bool searchelement(NODE *head, int key)
{

    while (head != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        else
        {

            head = head->next;
        }
    }
    return false;
}
void reverselk(NODE *&head)
{
    NODE *p = NULL;
    NODE *c = head;
    NODE *n = NULL;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
}
void printdata(NODE *head)
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
}
int main()
{
    NODE *head = takeinput();
    reverselk(head);
    printdata(head);
    // cout<< searchelement(head, 40)<<endl;;
    // reverselk(head);

    return 0;
}