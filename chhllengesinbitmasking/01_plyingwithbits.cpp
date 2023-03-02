#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n, m;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            int ch = i;
            while (ch != 0)
            {
                int lastbit = ch & 1;
                // cout << sum << endl;
                sum += lastbit;
                ch = ch >> 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}