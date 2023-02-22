#include <bits/stdc++.h>
using namespace std;
template <typename t>
class stackss
{
private:
    vector<t> v;

public:
    void push(int data)
    {
        v.push_back(data);
    }
    void pop()
    {
        if (!isempty())
        {
            v.pop_back();
        }
    }
    bool isempty()
    {
        return v.size() == 0;
    }
    t top()
    {
        return v[v.size() - 1];
    }
};
int main()
{
    stackss<char> s;
    s.push(65);
    s.push(66);
    cout << s.top() << endl;
    cout << s.isempty() << endl;

    return 0;
}