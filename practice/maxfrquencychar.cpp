#include <bits/stdc++.h>
using namespace std;
char maxfrequencychar(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        mp[ch]++;
    }
    int maxfrequency = 0;
    char ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] > maxfrequency)
        {
            maxfrequency = mp[s[i]];
            ans = s[i];
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << maxfrequencychar(s);
    return 0;
}