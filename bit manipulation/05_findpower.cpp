#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, n;
    cin >> a >> n;
    int ans = 1;
    while (n != 0)
    {
        int last = n & 1;
        if (last)
        {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}