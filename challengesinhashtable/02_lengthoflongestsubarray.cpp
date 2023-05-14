#include <bits/stdc++.h>
using namespace std;
int longestsubarrysum(int arr[], int n)
{
    unordered_map<int, int> mp;
    int pre = 0;
    int length = 0;

    for (int i = 0; i < n; i++)
    {
        pre += arr[i];
        if (pre == 0)
        {
            length = max(length, i + 1);
        }
        if (mp.find(pre) != mp.end())
        {
            length = max(length, i - mp[pre]);
        }
        else
        {
            mp[pre] = i;
        }
    }
    return length;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestsubarrysum(arr, n);

    return 0;
}