#include <bits/stdc++.h>
using namespace std;
void insertele(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insertele(s, x);
    s.push(data);
}
void recursivereverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    recursivereverse(s);
    insertele(s, x);
}
int main()
{
    stack<int> s1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        s1.push(no);
    }
    recursivereverse(s1);
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}