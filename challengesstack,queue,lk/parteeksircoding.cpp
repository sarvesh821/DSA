#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<int> s;
    while (t--)
    {

        int n, m;
        cin >> n;
        if (n == 2)
        {
            cin >> m;
            s.push(m);
        }
        else if (n == 1)
        {
            if (s.empty())
            {
                cout << "no code"
                     << endl;
            }
            else
            {
                cout << s.top() << endl;

                s.pop();
            }
        }
    }
    return 0;
}