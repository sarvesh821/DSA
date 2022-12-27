#include <iostream>
#include <queue>

using namespace std;
template <typename t>
class stack
{
    queue<t> q1;
    queue<t> q2;

public:
    void push(t x)
    {
        q1.push(x);
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }
        while (q1.size() > 1)
        {
            t element = q1.front();
            q2.push(element);
            q1.pop();
        }
        q1.pop();
        swap(q1, q2);
    }
    t top()
    {
        while (q1.size() > 1)
        {
            t element = q1.front();
            q2.push(element);
            q1.pop();
        }
        t element1 = q1.front();
        q2.push(element1);
        q1.pop();
        swap(q1, q2);
        return element1;
    }
    int getsize()
    {
        return q1.size() + q2.size();
    }
    bool isempty()
    {
        return getsize() == 0;
    }
};
int main()
{
    stack<int> s;
    s.push(23);
    s.push(24);
    s.push(25);
    s.push(26);
    s.push(27);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout<<s.getsize()<<endl;
    cout<<s.isempty()<<endl;

    return 0;
}