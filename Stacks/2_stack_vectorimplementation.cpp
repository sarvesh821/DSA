#include <iostream>
#include <vector>

using namespace std;
template<typename t>
class stack
{
private:
    vector<t> v;

public:
    int getsize()
    {
        return v.size();
    }
    void push(t data)
    {
        v.push_back(data);
    }
    bool isempty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    t pop()
    {
        if (v.size() == 0)
        {
            return -1;
        }
        int ans = v[v.size() - 1];
        v.pop_back();
        return ans;
    }
    t top()
    {
        if (v.size() == 0)
        {
            return -1;
        }
        return v[v.size() - 1];
    }
};
int main()
{
    stack<char> s1;
    s1.push(69);
    s1.push(67);
    s1.push(78);
    s1.push(99);
    s1.push(103);
    cout << s1.getsize() << endl;
    cout << s1.isempty() << endl;
    cout << s1.pop() << endl;
    cout << s1.top() << endl;

    return 0;
}