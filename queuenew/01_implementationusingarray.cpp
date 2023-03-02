#include <bits/stdc++.h>
using namespace std;
class queuee
{
    int *arr;
    int f, r, cs, ms;

public:
    queuee(int ds = 5)
    {
        arr = new int[ds];
        cs = 0;
        f = 0;
        ms = ds;
        r = ms - 1;
    }
    bool full()
    {
        return cs == ms;
    }
    bool empty()
    {
        return cs == 0;
    }
    void push(int data)
    {
        if (!full())
        {
            r = (r + 1) % ms;
            arr[r] = data;
            cs++;
        }
    }
    void pop()
    {
        if (!empty())
        {
            f = (f + 1) % ms;
            cs--;
        }
    }
    int front()
    {
        return arr[f];
    }
    ~queuee()
    {
        if (arr != NULL)
        {
            delete[] arr;
            arr = NULL;
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
    cout << q.empty() << endl;
    cout << q.full() << endl;
    return 0;
}