#include <bits/stdc++.h>
using namespace std;
class queuee
{
    stack<int> s1, s2;

public:
    void push(int data)
    {
        s1.push(data);
    }
    void pop()
    {
        while (s1.size() != 1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int front()
    {
        while (s1.size() != 1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s1.top();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    bool isempty()
    {
        if (s1.empty() && s2.empty())
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
    queuee q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.isempty() << endl;
    return 0;
}