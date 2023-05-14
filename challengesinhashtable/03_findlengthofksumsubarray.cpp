#include <bits/stdc++.h>
using namespace std;
int lengthofksumsubarray(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    int pre = 0;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        pre += arr[i];
        if (pre == k)
        {
            length = max(length, i + 1);
        }
        if (mp.find(pre - k) != mp.end())
        {
            length = max(length, i - mp[pre - k]);
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
    int k;
    cin >> k;
    cout << lengthofksumsubarray(arr, n, k);
    return 0;
}