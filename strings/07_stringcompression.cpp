#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int count = 0;
    cout << s[0];
    for (int i = 1; i < len; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            cout << count + 1;
            count = 0;
            cout << s[i];
        }
    }
    cout << count + 1;

    return 0;
}