#include <bits/stdc++.h>
using namespace std;
void balanceparenthesis(char arr[])
{
    int l = strlen(arr);

    stack<int> v;
    for (int i = 0; i < l; i++)
    {
        char ch = arr[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            v.push(ch);
        }
        else if (!v.empty())
        {
            if (ch == ')' && v.top() == '(' || ch == ']' && v.top() == '[' || ch == '}' && v.top() == '{')
            {
                v.pop();
            }
        }

        else
        {
            v.push(ch);
        }
    }
    if (v.empty())
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
int main()
{
    char arr[1000];
    cin >> arr;
    balanceparenthesis(arr);

    return 0;
}