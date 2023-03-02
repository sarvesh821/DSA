#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    int j = 0;
    while (ans > 0)
    {
        int last = ans & 1;
        j++;
        if (last == 1)
        {
            break;
        }
        ans = ans >> 1;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int y = arr[i];
        int w = y >> (j - 1);
        if (w & 1 == 1)
        {
            v.push_back(arr[i]);
        }
    }
    int ans2 = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans2 = ans2 ^ v[i];
    }
    int ans3 = ans ^ ans2;

    cout << ans3 << " " << ans2;
    return 0;
}