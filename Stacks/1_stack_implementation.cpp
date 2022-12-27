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
class stack
{
public:
    node *head;
    int size = 0;
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int ele)
    {

        if (isempty())
        {
            node *newnode = new node(ele);
            head = newnode;
            size++;
        }
        else
        {
            node *newnode = new node(ele);
            newnode->next = head;
            head = newnode;
            size++;
        }
    }
    int pop()
    {
        if (isempty())
        {
            return -1;
        }
        int ans = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    int top()
    {
        if (isempty())
        {
            return -1;
        }
        return head->data;
    }
};
int main()
{
    stack s1;
    s1.push(23);
    s1.push(24);
    s1.push(26);
    s1.push(25);
    cout << s1.getsize() << endl;
    cout << s1.isempty() << endl;
    cout << s1.pop() << endl;
    cout << s1.top() << endl;
    return 0;
}
