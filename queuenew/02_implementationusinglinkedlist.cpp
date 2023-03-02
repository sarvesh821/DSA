#include <bits/stdc++.h>
using namespace std;
class queuee
{
    int cs;
    list<int> l;

public:
    queuee()
    {
        cs = 0;
    }
    bool isempty()
    {
        return cs == 0;
    }
    void push(int data)
    {
        l.push_back(data);
        cs++;
    }
    void pop()
    {
        if (!isempty())
        {
            l.pop_front();
            cs--;
        }
    }
    int front()
    {
        return l.front();
    }
};
int main()
{
    queuee q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
    }
    q.pop();
    cout << q.front() << endl;
    return 0;
}