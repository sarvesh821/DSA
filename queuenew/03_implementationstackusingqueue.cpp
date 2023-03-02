#include <bits/stdc++.h>
using namespace std;
class stackk
{
    queue<int> q1, q2;

public:
    void push(int data)
    {
        if (q1.empty())
        {
            q1.push(data);
            while (!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        else
        {
            q2.push(data);
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }
    void pop()
    {
        if (!q1.empty())
        {
            q1.pop();
        }
        else
        {
            q2.pop();
        }
    }
    int top()
    {
        if (!q1.empty())
        {
            return q1.front();
        }
        else
        {
            return q2.front();
        }
    }
    bool isempty()
    {
        if (q1.empty() && q2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stackk s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i);
    }
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}