#include <iostream>
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
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
        node *newnode = new node(data);
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
bool searchelement(node *head, int key)
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
void printdata(node *head)
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
    node *head = takeinput();
    printdata(head);
   cout<< searchelement(head, 40)<<endl;;
    return 0;
}