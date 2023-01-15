#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len - 1; i++)
    {
        int diff = int(s[i + 1]) - int(s[i]);
        cout << s[i] << diff;
    }
    cout << s[len - 1];
    return 0;
}