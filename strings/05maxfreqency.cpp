#include <bits/stdc++.h>
// #define ASCII_SIZE 256
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count[1000] = {0};

    int len = s.length();
    int max = 0;
    char result;

    for (int i = 0; i < len; i++)
    {
        count[s[i]]++;
        if (max < count[s[i]])
        {
            max = count[s[i]];
            result = s[i];
        }
    }

    cout << result;
}