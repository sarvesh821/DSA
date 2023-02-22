#include <bits/stdc++.h>
using namespace std;
bool isbalanced(char *arr)
{
    stack<char> s;
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        char ch = arr[i];
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            if (s.empty() or s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
int main()
{
    char arr[1000];
    cin >> arr;

    if (isbalanced(arr))
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
    return 0;
}