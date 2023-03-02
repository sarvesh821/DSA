#include <bits/stdc++.h>
using namespace std;
int balanceprenthesis(string s)
{
    int l = s.length();
    stack<int> v;
    int curr = 0;
    int max = 0;
    for (int i = 0; i < l; i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            // if (!v.empty())
            // {
            //     if (v.top() == ch)
            //     {
            //         curr = 0;
            //     }
            // }

            v.push(ch);
        }
        else if (!v.empty())
        {
            if (ch == ')')
            {
                v.pop();
                curr += 2;
                if (curr > max)
                {
                    max = curr;
                }
            }
        }
        else
        {
            // cout << "hello" << endl;
            v.push(ch);
            if (curr > max)
            {
                max = curr;
            }
            curr = 0;
        }
    }

    return max;
}
int main()
{
    string s;
    cin >> s;
    cout << balanceprenthesis(s);
    return 0;
}